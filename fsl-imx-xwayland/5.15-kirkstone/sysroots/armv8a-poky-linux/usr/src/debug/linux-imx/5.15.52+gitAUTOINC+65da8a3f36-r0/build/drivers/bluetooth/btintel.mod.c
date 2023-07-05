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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc30f8a7c, "module_layout" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdf035812, "__hci_cmd_sync" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0x9b1720b3, "__hci_cmd_sync_ev" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x7aad008b, "bt_to_errno" },
	{ 0x718b8b7, "bt_info" },
	{ 0xeb9439ca, "__regmap_init" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x9d127634, "skb_pull" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0xacec3cf1, "request_firmware_direct" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x42faebf4, "hci_cmd_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8c1743db, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x11d6a11b, "firmware_request_nowarn" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc6d09aa9, "release_firmware" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F110A36B013389D3EE9B4EC");
