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
	{ 0x5d2a551, "unregister_rpmsg_driver" },
	{ 0xc2d15cdb, "__register_rpmsg_driver" },
	{ 0x9fd0b672, "of_device_is_compatible" },
	{ 0x2383879c, "of_property_read_string" },
	{ 0x57654752, "of_find_node_by_name" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x2f4e43f, "platform_device_register_full" },
	{ 0xdcb764ad, "memset" },
	{ 0x44f81556, "_dev_info" },
	{ 0xf3cf0571, "platform_device_unregister" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xa6257a2f, "complete" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "");

