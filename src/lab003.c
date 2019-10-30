#include <pthread.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/syscall.h>

const char *datafile = "lab003.data";

#define BUFSIZE		(8 * 1024)
#define FILESIZE	(10 * 1024 * 1024)
#define THREADS 2

void
init_data()
{
	int fd;
	long long i;
	char buf[BUFSIZE];

	if ((fd = open(datafile, O_CREAT | O_WRONLY, 0644)) < 0) {
		printf("ERROR: Can't open datafile: %s\n", datafile);
		exit(1);
	}

	for (i = 0; i < FILESIZE / BUFSIZE; i++) {
		if (write(fd, buf, BUFSIZE) < 0) {
			printf("ERROR: write error.\n");
			exit(2);
		}
	}

	close(fd);
}

ssize_t
os_read(int fd, void *buf, size_t count)
{
	// See what happens if you use read() instead of syscall():
	//
	// return read(fd, buf, count);
	return syscall(SYS_read, fd, buf, count);
}

void
load_data()
{
	int fd;
	char buf[1];

	if ((fd = open(datafile, O_RDONLY)) < 0) {
		printf("ERROR: Can't open database: %s\n", datafile);
		exit(2);
	}

	for (;;) { os_read(fd, &buf, 0); }

	(void) close(fd);
}

void
import_database()
{
	load_data();
}

void *
thread_start(void *arg)
{
	for (;;) {
		import_database();
	}
}

int
main(int argc, char *argv[])
{
	int i;
	pthread_t threadids[THREADS];
	char cmd[80];
	pid_t pid;

	init_data();

	pid = getpid();
	sprintf(cmd, "taskset -cp 0 %d >/dev/null\n", pid);
	system(cmd);

	for (i = 0; i < THREADS; i++) {
		if ((pthread_create(&threadids[i], NULL, thread_start,
		    NULL) != 0)) {
			perror("Thread create failed");
		}
	}

	for (i = 0; i < THREADS; i++)
		pthread_join(threadids[i], NULL);

	return 0;
}
