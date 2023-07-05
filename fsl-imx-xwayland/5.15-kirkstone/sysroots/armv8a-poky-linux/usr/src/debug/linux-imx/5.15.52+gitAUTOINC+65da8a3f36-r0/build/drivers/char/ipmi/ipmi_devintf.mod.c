#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc30f8a7c, "module_layout" },
	{ 0xbcde32ad, "param_ops_int" },
	{ 0x8e1a37f7, "noop_llseek" },
	{ 0x9a842f6e, "ipmi_smi_watcher_unregister" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x7b0c3ed4, "ipmi_smi_watcher_register" },
	{ 0xbbcd58d3, "class_destroy" },
	{ 0x94a724d2, "__register_chrdev" },
	{ 0xecf5c754, "__class_create" },
	{ 0x12dd1e77, "ipmi_set_maintenance_mode" },
	{ 0x3bc993e, "ipmi_set_my_LUN" },
	{ 0xd54a5050, "ipmi_unregister_for_cmd" },
	{ 0x50f65edf, "ipmi_set_gets_events" },
	{ 0xfe0f2369, "ipmi_get_maintenance_mode" },
	{ 0x705dd14, "ipmi_register_for_cmd" },
	{ 0xfaaa4831, "ipmi_set_my_address" },
	{ 0x74778a80, "ipmi_get_my_LUN" },
	{ 0xec1c2a90, "ipmi_get_my_address" },
	{ 0x4c2054d7, "ipmi_request_settime" },
	{ 0xdcb764ad, "memset" },
	{ 0xe4f4665b, "ipmi_validate_addr" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x804f922a, "ipmi_addr_length" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x6105835b, "kill_fasync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x56470118, "__warn_printk" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xae71627d, "ipmi_create_user" },
	{ 0x80aa4656, "ipmi_free_recv_msg" },
	{ 0xf388b18b, "ipmi_destroy_user" },
	{ 0x9e75dccf, "fasync_helper" },
	{ 0x92997ed8, "_printk" },
	{ 0x2997220c, "device_create" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c126119, "device_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "ipmi_msghandler");

