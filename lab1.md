# lab1: Investigate latency

## Problem Statement

An application has higher-than expected latency, including latency outliers. Why, and how can performance be improved?

## Instructions

To compile and run the application:

```
cd src
gcc -O0 -o lab001 lab001.c
./lab001 &
```

While running, you can use any BPF tool to investigate performance. See the References below. You will need to run them as root, so `sudo bash` first for a root shell. Both BCC and bpftrace tools are installed on the student (Ubuntu) systems in your $PATH, so using tab completion:

```
# opensnoop<tab><tab>
opensnoop-bpfcc  opensnoop.bt 
```

opensnoop-bpfcc is the BCC version, and opensnoop.bt is the bpftrace version.

You can also use traditional tools, including top(1), vmstat(1), mpstat(1), iostat(1), and sar(1), provided they do not perturb performance -- this is a (pretend) production system! That means strace(1) and tcpdump(8) are forbidden. Use BPF equivalents instead.

When you have finished your analysis, remember to kill the lab001 process.

## References

- [BCC tools](https://github.com/iovisor/bcc#tools)
- [bpftrace tools](https://github.com/iovisor/bpftrace#tools)
- [BPF book tools](https://github.com/brendangregg/bpf-perf-tools-book#tools)
- [BCC tutorial](https://github.com/iovisor/bcc/blob/master/docs/tutorial.md)

Copyright Brendan Gregg, 2019. All rights reserved.
