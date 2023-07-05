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
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x9681373c, "devm_power_supply_register" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x9b72ce26, "device_property_present" },
	{ 0x62b91460, "device_property_read_u32_array" },
	{ 0x201129d4, "__devm_regmap_init_i2c" },
	{ 0x9166fada, "strncpy" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x20f03182, "power_supply_get_battery_info" },
	{ 0xdcb764ad, "memset" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0x984afbc5, "regmap_write" },
	{ 0x3ef97b8b, "power_supply_get_drvdata" },
	{ 0x9397e201, "power_supply_changed" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xab6dcbf2, "regmap_read" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,bq25980");
MODULE_ALIAS("of:N*T*Cti,bq25980C*");
MODULE_ALIAS("of:N*T*Cti,bq25975");
MODULE_ALIAS("of:N*T*Cti,bq25975C*");
MODULE_ALIAS("of:N*T*Cti,bq25960");
MODULE_ALIAS("of:N*T*Cti,bq25960C*");
MODULE_ALIAS("i2c:bq25980");
MODULE_ALIAS("i2c:bq25975");
MODULE_ALIAS("i2c:bq25960");
