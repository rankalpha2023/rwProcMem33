#include <linux/module.h>
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xc5b0b146, "module_layout" },
	{ 0x5a921311, "strncmp" },
	{ 0x98cf60b3, "strlen" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xc53cebb3, "kobject_del" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xb7c9d81a, "pid_task" },
	{ 0xaa429526, "find_get_pid" },
	{ 0x6c292f36, "put_pid" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x29551287, "proc_remove" },
	{ 0xeef4885f, "unregister_kretprobe" },
	{ 0x992f9d86, "proc_create" },
	{ 0x2a530cb5, "proc_mkdir" },
	{ 0x4b03472e, "register_kretprobe" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x42600520, "unregister_kprobe" },
	{ 0x8060002, "register_kprobe" },
	{ 0xdcb764ad, "memset" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x7c32d0f0, "printk" },
	{ 0x999e8297, "vfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd6ee688f, "vmalloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

