# BPF Performance Tools Workshop

This is a 90-minute workshop created by Brendan Gregg, and uses some exercises from the book [BPF Performance Tools: Linux System and Application Observability](http://www.brendangregg.com/bpf-performance-tools-book.html). BPF enables a new class of custom, efficient, and production safe performance analysis tools. Historically BPF stood for Berkeley Packet Filter, but since it has become a general purpose execution environment it is now a technology name and no longer an acronym. BPF is part of the Linux kernel.

This workshop is composed of slides, exercises, discussion, and demos. This repository contains two of those four parts: the slides and exercises, the other two are only available in class.

- [USENIX LISA2019 Slides](LISA2019_BPF_Performance_Tools.pdf) (PDF)

## Prerequisites

You can either:

- SSH to a lab instance (see bit of paper), or,
- Setup your own system with [BCC](https://github.com/iovisor/bcc) & [bpftrace](https://github.com/iovisor/bpftrace). Sample instructions below.
- Use the supplied Vagrant box (https://www.vagrantup.com/downloads.html)

#### System Setup

##### Local setup

If you choose to setup your own system, here is a script for Ubuntu: (19.04 or greater required)

```
sudo apt-get update
sudo apt-get install sysstat bpfcc-tools bpftrace gcc
git clone https://github.com/brendangregg/bpf-perf-workshop
cd bpf-perf-workshop/src
make && cd ..
```

##### Using Vagrant

```
git clone https://github.com/brendangregg/bpf-perf-workshop
vagrant up
```

After Vagrant finishes, the repo content will be located under
/home/vagrant/bpf-perf-workshop


Just for reference, you can fetch these repos:

```
git clone https://github.com/iovisor/bcc
git clone https://github.com/iovisor/bpftrace
```

## Checking your system works

Testing the opensnoop(8) tool from both BCC and bpftrace (Ubuntu package naming scheme: BCC tools end in -bpfcc, and bpftrace .bt):

<pre>
$ <b>sudo bash</b>
# <b>opensnoop-bpfcc</b>
[...]
# <b>opensnoop.bt</b>
[...]
</pre>

Those should produce output and not error. Ctrl-C to end each.

## References

You may wish to open these in tabs. For labs 1-3 (BCC):

- [BCC tools](https://github.com/iovisor/bcc#tools)
- [BCC tutorial](https://github.com/iovisor/bcc/blob/master/docs/tutorial.md)

For labs 4-5 (bpftrace):

- [bpftrace tutorial](https://github.com/iovisor/bpftrace/blob/master/docs/tutorial_one_liners.md)
- [bpftrace reference guide](https://github.com/iovisor/bpftrace/blob/master/docs/reference_guide.md)
- [bpftrace tools](https://github.com/iovisor/bpftrace#tools)
- [BPF book tools](https://github.com/brendangregg/bpf-perf-tools-book#tools)

## Labs

- [lab1: Investigate latency](lab1.md)
- [lab2: Investigate SSH login performance](lab2.md)
- [lab3: Analyze a CPU issue](lab3.md)
- [lab4: Develop new bpftrace tools](lab4.md)
- [lab5: Advanced bpftrace tools (optional)](lab5.md)

Copyright Brendan Gregg, 2019. All rights reserved.
