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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa21db26d, "__pm_runtime_idle" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0xa22239ed, "gnss_put_device" },
	{ 0x8b17f3a2, "gnss_register_device" },
	{ 0x7ba98830, "serdev_device_close" },
	{ 0xd30755fb, "__pm_runtime_resume" },
	{ 0x16585792, "gnss_deregister_device" },
	{ 0xfb3e6f17, "gnss_allocate_device" },
	{ 0xdded8ed6, "serdev_device_wait_until_sent" },
	{ 0xb46e68f9, "serdev_device_write" },
	{ 0x7743c0fd, "serdev_device_write_wakeup" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x9a4df8d8, "serdev_device_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x1423925b, "serdev_device_set_flow_control" },
	{ 0x25164238, "gnss_insert_raw" },
	{ 0xfb4fe68d, "serdev_device_set_baudrate" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "gnss");

