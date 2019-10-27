# lab3: Analyze a CPU issue

## Problem Statement

The application has high CPU usage even though it isn't serving many (or any) requests. What is happening? How many potential problems can you identify?

## Instructions

To compile and run the application:

```
cd src
gcc -O0 -pthread -o lab003 lab003.c
./lab003 &
```

While running, analyze the application in as much detail as possible. As with [lab1](lab1.md), you can use BPF tools from BCC, bpftrace, and the book for analysis. You an also use traditional tools, except those that perturb performance (e.g., strace(1) and tcpdump(8)).

When you have finished your analysis, remember to kill the lab003 process.

## References

- [BCC tools](https://github.com/iovisor/bcc#tools)
- [bpftrace tools](https://github.com/iovisor/bpftrace#tools)
- [BPF book tools](https://github.com/brendangregg/bpf-perf-tools-book#tools)
- [BCC tutorial](https://github.com/iovisor/bcc/blob/master/docs/tutorial.md)

Copyright Brendan Gregg, 2019. All rights reserved.
