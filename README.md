# VMware Host Modules for Linux Kernel 7.0+ & GCC 15+

This repository contains patched `vmmon` and `vmnet` modules for VMware Workstation (tested on 17.5.1) to compile flawlessly on modern GNU/Linux systems running Kernel 7.0+ and GCC 15/C23.

## What has been fixed?
- **Timer API Upgrades:** Transitioned deprecated timer functions to `timer_setup` and `timer_shutdown_sync`.
- **Control Register (CR4) Handling:** Fixed illegal `read_cr4()` blocks using native kernel wrappers.
- **MSR Registry Protection:** Stabilized `rdmsr_safe` macro architecture for modern C compiler enforcement.
- **Network Locking Mechanics:** Replaced removed `dev_base_lock` hooks with modern RCU (`rcu_read_lock`) contexts.
- **Linker Symbol Alignment:** Provided static shims for legacy standalone binary artifacts (`bootstrap/`) to prevent `Unknown symbol` faults during `modprobe`.

## Quick Installation

```bash
git clone [https://github.com/YOUR_USERNAME/vmware-host-modules-patched.git](https://github.com/YOUR_USERNAME/vmware-host-modules-patched.git)
cd vmware-host-modules-patched
export KBUILD_MODPOST_WARN=1
make ccflags-y="-I\$(src)/linux -I\$(src)"

# Deploying artifacts
sudo rm -f /lib/modules/$(uname -r)/kernel/drivers/misc/vm{mon,net}.ko
sudo rm -f /lib/modules/$(uname -r)/misc/vm{mon,net}.ko
sudo mkdir -p /lib/modules/$(uname -r)/kernel/drivers/misc/
sudo cp -v vmmon-only/vmmon.ko /lib/modules/$(uname -r)/kernel/drivers/misc/
sudo cp -v vmnet-only/vmnet.ko /lib/modules/$(uname -r)/kernel/drivers/misc/

sudo depmod -a
sudo modprobe -v vmmon
sudo modprobe -v vmnet
sudo systemctl restart vmware
