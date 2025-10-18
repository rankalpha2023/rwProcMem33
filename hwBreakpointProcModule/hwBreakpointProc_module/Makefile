CROSS?= aarch64-linux-android-
KERNEL_DIR?= ~/arrow/android-kernel
CURRENT_PATH:= $(shell pwd)
MODULE_NAME= rwProcMem33

src_dir?= $(shell pwd)
export src_dir


includedir:= -I$(src_dir)
EXTRA_CFLAGS+= $(includedir) -g

obj-m:= $(MODULE_NAME).o
$(MODULE_NAME)-objs+= 	hwBreakpointProc_module.o

    

all: ko
# 编译驱动
ko:
	make -C $(KERNEL_DIR) M=$(CURRENT_PATH) EXTRA_CFLAGS="$(EXTRA_CFLAGS)" CROSS_COMPILE=${CROSS} ARCH=arm64 modules


clean:
	make -C $(KERNEL_DIR) M=$(CURRENT_PATH) clean