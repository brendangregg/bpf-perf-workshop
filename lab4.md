# lab4: Develop new bpftrace tools

## Problem Statement

Gain experience developing new tools using bpftrace.

## Instructions

You can start with the bpftrace tools in bpftrace/tools, and make copies for editing and customizing. Where noted, some of these labs are from the BPF book. You do not need to complete all of these.

A) Modify biolatency.bt to print a linear histogram instead, for the range 0 to 100 milliseconds and a step size of one millisecond. (From the [BPF book](http://www.brendangregg.com/bpf-performance-tools-book.html) Ch09.)

B) Modify biolatency.bt to print the linear histogram summary every one second. (From the [BPF book](http://www.brendangregg.com/bpf-performance-tools-book.html) Ch09.)

C) Copy opensnoop.bt to a new file, rmsnoop.bt. Change it to print files that were deleted (tip: the command is called "rm", but the syscall is called something else.) Use rmsnoop.bt to trace an SSH login: what did you see?

D) execsnoop.bt only sees new processes that call exec(2) (execve(2)), although some may fork(2) or clone(2) and not exec(2) (e.g., the creation of worker processes). Write a new tool called procsnoop(8) to show all new processes with as many details as possible. You could trace fork() and clone(), or use the sched tracepoints, or something else. (From the [BPF book](http://www.brendangregg.com/bpf-performance-tools-book.html) Ch06.)

## References

- [bpftrace tutorial](https://github.com/iovisor/bpftrace/blob/master/docs/tutorial_one_liners.md)
- [bpftrace reference guide](https://github.com/iovisor/bpftrace/blob/master/docs/reference_guide.md)
- [BPF book tools](https://github.com/brendangregg/bpf-perf-tools-book#tools)

Copyright Brendan Gregg, 2019. All rights reserved.
