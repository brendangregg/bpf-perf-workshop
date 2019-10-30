#include <sys/types.h>
#include <sys/stat.h>
#include <strings.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

const char *datafile = "lab001.log";

#define BUFSIZE		(1 * 128)
#define BIGSIZE		(2 * 1024 * 1024)
#define FILESIZE	(50 * 1024 * 1024)

ssize_t
os_write(int fd, const void *buf, size_t count)
{
	ssize_t s;
	s = write(fd, buf, count);
	fsync(fd);
	return s;
}

ssize_t
debugdump(int fd, const void *buf, size_t count)
{
        return os_write(fd, buf, count);
}

void
write_log(int fd)
{
	char *buf, *big;
	long long i;
	int ret, j;

	buf = malloc(BUFSIZE);
	big = malloc(BIGSIZE);
	if (buf == NULL || big == NULL) {
		printf("ERROR: malloc buffers.\n");
		exit(1);
	}
	bzero(buf, BUFSIZE);
	bzero(big, BIGSIZE);

	for (;;) {
		for (i = 0, j = 0; i < FILESIZE;) {
			if ((j++ % 200) == 50) {
				ret = debugdump(fd, big, BIGSIZE);
				i += BIGSIZE;
			} else {
				ret = os_write(fd, buf, BUFSIZE);
				i += BUFSIZE;
			}

			if (ret < 0) {
				printf("ERROR: write error.\n");
				exit(2);
			}
		}

		if (lseek(fd, 0, SEEK_SET) < 0) {
			printf("ERROR: seek() failed.\n");
			exit(3);
		}
	}

	free(buf);
	free(big);
}

int
main()
{
	int fd;

	if ((fd = open(datafile, O_CREAT | O_WRONLY, 0644)) < 0) {
		printf("ERROR: writing to %s\n", datafile);
		exit(1);
	}

	write_log(fd);

	return (0);
}
