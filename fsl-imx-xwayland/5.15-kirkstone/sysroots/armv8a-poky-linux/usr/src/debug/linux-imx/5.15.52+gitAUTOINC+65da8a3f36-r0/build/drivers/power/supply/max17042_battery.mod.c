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
	{ 0x5627a635, "power_supply_am_i_supplied" },
	{ 0x37a0cba, "kfree" },
	{ 0x44f81556, "_dev_info" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x6f2bde91, "acpi_match_device" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6c0dca5a, "devm_add_action" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x9681373c, "devm_power_supply_register" },
	{ 0x201129d4, "__devm_regmap_init_i2c" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x92997ed8, "_printk" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x984afbc5, "regmap_write" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0x3ef97b8b, "power_supply_get_drvdata" },
	{ 0x9397e201, "power_supply_changed" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x3ce4ca6f, "disable_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:max17042");
MODULE_ALIAS("i2c:max17047");
MODULE_ALIAS("i2c:max17050");
MODULE_ALIAS("i2c:max17055");
MODULE_ALIAS("i2c:max77849-battery");
MODULE_ALIAS("of:N*T*Cmaxim,max17042");
MODULE_ALIAS("of:N*T*Cmaxim,max17042C*");
MODULE_ALIAS("of:N*T*Cmaxim,max17047");
MODULE_ALIAS("of:N*T*Cmaxim,max17047C*");
MODULE_ALIAS("of:N*T*Cmaxim,max17050");
MODULE_ALIAS("of:N*T*Cmaxim,max17050C*");
MODULE_ALIAS("of:N*T*Cmaxim,max17055");
MODULE_ALIAS("of:N*T*Cmaxim,max17055C*");
MODULE_ALIAS("of:N*T*Cmaxim,max77849-battery");
MODULE_ALIAS("of:N*T*Cmaxim,max77849-batteryC*");
MODULE_ALIAS("acpi*:MAX17047:*");
