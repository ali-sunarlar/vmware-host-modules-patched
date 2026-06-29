# VMware Host Modules for Linux Kernel 7.0+ & GCC 15+

This repository contains fully working `vmmon` and `vmnet` source code for VMware Workstation patched to compile flawlessly on modern GNU/Linux environments running Kernel 7.0+ and GCC 15/C23 (such as Ubuntu 26.04).

## Acknowledgments
Special thanks to **Gemini**, who co-authored, debugged, and crafted the initial kernel flattening patches, and huge credits to **caleb173** for the brilliant dynamic header adjustment mapping (`*_large` -> `*_leaf` page tables and `timer_delete_sync` hooks) which resolved the hardware monitor initialization constraints.

## Quick Installation

```bash
# Clone the repository
git clone [https://github.com/ali-sunarlar/vmware-host-modules-patched.git](https://github.com/ali-sunarlar/vmware-host-modules-patched.git)
cd vmware-host-modules-patched

# Build the verified source tree
export KBUILD_MODPOST_WARN=1
make ccflags-y="-I\$(src)/linux -I\$(src)"

# Deploy and restart engine
sudo make install
sudo modprobe -v vmmon
sudo modprobe -v vmnet
sudo systemctl restart vmware
