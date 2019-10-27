# BPF Performance Tools Workshop

This is a 90-minute workshop created by Brendan Gregg, and uses some exercises from the book [BPF Performance Tools: Linux System and Application Observability](http://www.brendangregg.com/bpf-performance-tools-book.html). BPF enables a new class of custom, efficient, and production safe performance analysis tools. Historically BPF stood for Berkeley Packet Filter, but since it has become a general purpose execution environment it is now a technology name and no longer an acronym. BPF is part of the Linux kernel.

This workshop is composed of slides, exercises, discussion, and demos. This repository contains two of those four parts: the slides and exercises, the other two are only available in class.

## Prerequisites

You can either:

- SSH to a lab instance (see bit of paper), or,
- Setup your own system. Install [BCC](https://github.com/iovisor/bcc) & [bpftrace](https://github.com/iovisor/bpftrace), this repo, and extra tools from [bpf-perf-tools-book](https://github.com/brendangregg/bpf-perf-tools-book).

## References

You may wish to open these in tabs. For labs 1-3 (BCC):

- [BCC tools](https://github.com/iovisor/bcc#tools)
- [BCC tutorial](https://github.com/iovisor/bcc/blob/master/docs/tutorial.md)

For labs 4-5 (bpftrace):

- [bpftrace tutorial](https://github.com/iovisor/bpftrace/blob/master/docs/tutorial_one_liners.md)
- [bpftrace reference guide](https://github.com/iovisor/bpftrace/blob/master/docs/reference_guide.md)
- [BPF book tools](https://github.com/brendangregg/bpf-perf-tools-book#tools)

## Labs

- [lab1: Investigate latency](lab1.md)
- [lab2: Investigate SSH login performance](lab2.md)
- [lab3: Analyze a CPU issue](lab3.md)
- [lab4: Develop new bpftrace tools](lab4.md)
- [lab5: Advanced bpftrace tools (optional)](lab5.md)

Copyright Brendan Gregg, 2019. All rights reserved.
