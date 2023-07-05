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
	{ 0xc103ebe7, "i2c_hid_core_pm" },
	{ 0x9fc71ba, "i2c_hid_core_shutdown" },
	{ 0x52ca5f1a, "i2c_hid_core_remove" },
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x46c4a1cb, "i2c_hid_core_probe" },
	{ 0x9b72ce26, "device_property_present" },
	{ 0x4cbe04ee, "devm_regulator_bulk_get" },
	{ 0x62b91460, "device_property_read_u32_array" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5508ddd9, "regulator_bulk_enable" },
	{ 0x64575cd5, "regulator_bulk_disable" },
};

MODULE_INFO(depends, "i2c-hid");

MODULE_ALIAS("i2c:hid");
MODULE_ALIAS("i2c:hid-over-i2c");
MODULE_ALIAS("of:N*T*Chid-over-i2c");
MODULE_ALIAS("of:N*T*Chid-over-i2cC*");
