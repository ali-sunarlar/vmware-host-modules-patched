VMWARE_VER ?= 17.5.1

all:
	$(MAKE) -C vmmon-only
	$(MAKE) -C vmnet-only

clean:
	$(MAKE) -C vmmon-only clean
	$(MAKE) -C vmnet-only clean

install:
	sudo mkdir -p /lib/modules/$$(uname -r)/kernel/drivers/misc/
	sudo cp -v vmmon-only/vmmon.ko /lib/modules/$$(uname -r)/kernel/drivers/misc/
	sudo cp -v vmnet-only/vmnet.ko /lib/modules/$$(uname -r)/kernel/drivers/misc/
	sudo depmod -a
