# Install

> cd /tmp
> wget https://github.com/rr-debugger/rr/releases/download/5.4.0/rr-5.4.0-Linux-$(uname -m).deb
> sudo dpkg -i rr-5.4.0-Linux-$(uname -m).deb

> rr record ./main
> rr replay

> $sudo apt-get install linux-tools-common linux-tools-generic linux-tools-`uname -r`
> sudo sysctl kernel.perf_event_paranoid=1


