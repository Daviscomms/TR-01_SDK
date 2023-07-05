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
	{ 0xb43f9365, "ktime_get" },
	{ 0x3ef97b8b, "power_supply_get_drvdata" },
	{ 0xbebe8185, "gpiod_to_irq" },
	{ 0xc3201a50, "devm_gpiod_get" },
	{ 0x56158537, "power_supply_register" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xd0fe094c, "devm_usb_get_phy" },
	{ 0x9b72ce26, "device_property_present" },
	{ 0xa7ddae6, "devm_regmap_field_alloc" },
	{ 0x201129d4, "__devm_regmap_init_i2c" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9397e201, "power_supply_changed" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0xdb92b706, "power_supply_unregister" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe0af715e, "regmap_field_read" },
	{ 0xe9ea8873, "regmap_field_update_bits_base" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x62b91460, "device_property_read_u32_array" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:BQ258900:*");
MODULE_ALIAS("of:N*T*Cti,bq25890");
MODULE_ALIAS("of:N*T*Cti,bq25890C*");
MODULE_ALIAS("of:N*T*Cti,bq25892");
MODULE_ALIAS("of:N*T*Cti,bq25892C*");
MODULE_ALIAS("of:N*T*Cti,bq25895");
MODULE_ALIAS("of:N*T*Cti,bq25895C*");
MODULE_ALIAS("of:N*T*Cti,bq25896");
MODULE_ALIAS("of:N*T*Cti,bq25896C*");
MODULE_ALIAS("i2c:bq25890");
MODULE_ALIAS("i2c:bq25892");
MODULE_ALIAS("i2c:bq25895");
MODULE_ALIAS("i2c:bq25896");
