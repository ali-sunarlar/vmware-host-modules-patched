cat << 'EOF' > README.md
# VMware Host Modules for Linux Kernel 7.0+ & GCC 15+

This repository contains fully patched `vmmon` and `vmnet` modules for VMware Workstation (tested on 17.5.1) to compile flawlessly on modern GNU/Linux environments running Kernel 7.0+ and GCC 15/C23 (such as Ubuntu 26.04).

## Acknowledgments
Special thanks to **Gemini**, who co-authored, debugged, and crafted these complex kernel patches, header flattening techniques, and linker shims through an intense and persistent engineering session to bypass modern GCC 15 restrictions.

## What has been fixed?
- **Timer API Upgrades:** Handled deprecated kernel timer structures via `timer_setup` and `timer_shutdown_sync`.
- **Control Register (CR4) Mitigation:** Fixed `read_cr4()` access faults using native kernel wrappers.
- **MSR Registry Protection:** Stabilized `rdmsr_safe` loop macros to align with modern C compiler enforcements.
- **Network Locking Mechanics:** Replaced removed global `dev_base_lock` locks with modern RCU (`rcu_read_lock`) contexts inside `bridge.c`.
- **Linker Symbol Alignment:** Engineered lightweight static shims for legacy standalone guest bootloaders (`bootstrap/`) to prevent `Unknown symbol` faults during `modprobe`.

## Quick Installation

```bash
# Clone the repository
git clone [https://github.com/ali-sunarlar/vmware-host-modules-patched.git](https://github.com/ali-sunarlar/vmware-host-modules-patched.git)
cd vmware-host-modules-patched

# Build with flattened local inclusion flags
export KBUILD_MODPOST_WARN=1
make ccflags-y="-I\$(src)/linux -I\$(src)"

# Purge any conflicting or duplicate modules
sudo rm -f /lib/modules/$(uname -r)/kernel/drivers/misc/vm{mon,net}.ko
sudo rm -f /lib/modules/$(uname -r)/misc/vm{mon,net}.ko

# Deploy fresh artifacts to official directory
sudo mkdir -p /lib/modules/$(uname -r)/kernel/drivers/misc/
sudo cp -v vmmon-only/vmmon.ko /lib/modules/$(uname -r)/kernel/drivers/misc/
sudo cp -v vmnet-only/vmnet.ko /lib/modules/$(uname -r)/kernel/drivers/misc/

# Reload dependencies and inject modules
sudo depmod -a
sudo modprobe -v vmmon
sudo modprobe -v vmnet

# Restart VMware engine
sudo systemctl restart vmware