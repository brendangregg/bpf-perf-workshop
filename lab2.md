# lab2: Investigate SSH login performance

## Problem Statement

Under load, it can take a few seconds to login to your lab system via SSH. Even when idle, it can take 1-2 seconds. Why does it take this long on an idle system, and how can this login time be reduced?

## Instructions

Use two terminal windows. In one, SSH to the target system and run BPF analysis tools. In the other, SSH to the target system while analysis tools are running. You can also run ssh via `time` to create both a login event for analysis, plus provide some timing details:

```
$ time ssh student@IP_ADDRESS echo hello
hello

real	0m1.200s
user	0m0.027s
sys	0m0.008s
```

As with [lab1](lab1.md), you can use BPF tools from BCC, bpftrace, and the book for analysis. You an also use traditional tools, except those that perturb performance (e.g., strace(1) and tcpdump(8)).

## References

- [BCC tools](https://github.com/iovisor/bcc#tools)
- [bpftrace tools](https://github.com/iovisor/bpftrace#tools)
- [BPF book tools](https://github.com/brendangregg/bpf-perf-tools-book#tools)
- [BCC tutorial](https://github.com/iovisor/bcc/blob/master/docs/tutorial.md)

Copyright Brendan Gregg, 2019. All rights reserved.
