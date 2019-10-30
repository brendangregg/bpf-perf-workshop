# lab1: Investigate latency

## Problem Statement

An application has higher-than expected latency, including latency outliers. Why, and how can performance be improved?

## Instructions

To run the application.

```
cd bpf-perf-workshop
./lab001 &
```

lab001 simulates a performance issue based on previous real world problems. It does not include application logic: for simplicity, it only executes the problem.

While lab001 is running, you can use any BPF tool to investigate performance. See the References below. You will need to run them as root, so `sudo bash` first for a root shell. You can also use traditional tools, including top(1), vmstat(1), mpstat(1), iostat(1), and sar(1), provided they do not perturb performance -- this is a (pretend) production system! That means strace(1) and tcpdump(8) are forbidden. Use BPF equivalents instead.

When you have finished your analysis, remember to kill the lab001 process.

## Help! I'm completely lost

If you don't know where to start, you can try working through the following checklists:

- [0. Before bcc](https://github.com/iovisor/bcc/blob/master/docs/tutorial.md#0-before-bcc)
- [1. General Performance](https://github.com/iovisor/bcc/blob/master/docs/tutorial.md#1-general-performance)

These are from my [BCC tutorial](https://github.com/iovisor/bcc/blob/master/docs/tutorial.md). These won't find everything, but are a good start.

Later in this workshop I'll introduce methodologies to help you begin performance analysis.

## References

- [BCC tools](https://github.com/iovisor/bcc#tools)
- [bpftrace tools](https://github.com/iovisor/bpftrace#tools)
- [BPF book tools](https://github.com/brendangregg/bpf-perf-tools-book#tools)
- [BCC tutorial](https://github.com/iovisor/bcc/blob/master/docs/tutorial.md)

Copyright Brendan Gregg, 2019. All rights reserved.
