# lab5: Advanced bpftrace tools (optional)

## Problem Statement

Gain experience developing advanced tools using bpftrace.

## Instructions

You can start with the bpftrace tools in bpftrace/tools and bpf-perf-tools-book/originals, and make copies for editing and customizing. Where noted, some of these labs are from the BPF book. This is an optional exercise for students who have finished the earlier labs. You do not need to finish these.

A) Develop a tool to show the ratio of logical file system I/O (via VFS or the file system interface) vs physical I/O (via block tracepoints). (From the BPF book Ch08.)

B) Develop a tool to analyze file descriptor leaks: those that were allocated during tracing but not freed. One possible solution may be to trace the kernel functions __alloc_fd() and __close_fd(). (From the BPF book Ch08.)

C) (Unsolved) Develop a tool to show the time between accesses in the page cache as a distribution. What are the challenges with this tool? (From the BPF book Ch08.)

The book contains more advanced and unsolved exercises.

## References

- [bpftrace tutorial](https://github.com/iovisor/bpftrace/blob/master/docs/tutorial_one_liners.md)
- [bpftrace reference guide](https://github.com/iovisor/bpftrace/blob/master/docs/reference_guide.md)
- [BPF book tools](https://github.com/brendangregg/bpf-perf-tools-book#tools)
- [BPF book](http://www.brendangregg.com/bpf-performance-tools-book.html)

Copyright Brendan Gregg, 2019. All rights reserved.
