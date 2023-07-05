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
	{ 0xc264d4ce, "param_ops_bool" },
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x691166c5, "gpiod_get_value_cansleep" },
	{ 0x9fd0b672, "of_device_is_compatible" },
	{ 0xf9a482f9, "msleep" },
	{ 0x44f81556, "_dev_info" },
	{ 0x19604b69, "dev_err_probe" },
	{ 0x9681373c, "devm_power_supply_register" },
	{ 0x6c0dca5a, "devm_add_action" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0xbebe8185, "gpiod_to_irq" },
	{ 0xbf5c563f, "devm_gpiod_get_optional" },
	{ 0x9b72ce26, "device_property_present" },
	{ 0x62b91460, "device_property_read_u32_array" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x87ae3dce, "device_get_match_data" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xf5ca1375, "devm_kasprintf" },
	{ 0xbf08bd0b, "devm_kmemdup" },
	{ 0x9397e201, "power_supply_changed" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x977cf6a9, "i2c_smbus_read_word_data" },
	{ 0x1fa1a10b, "i2c_smbus_write_word_data" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3508f8d7, "i2c_smbus_read_i2c_block_data" },
	{ 0x156e258c, "i2c_smbus_read_byte_data" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xbf221102, "i2c_smbus_read_block_data" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3ef97b8b, "power_supply_get_drvdata" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csbs,sbs-battery");
MODULE_ALIAS("of:N*T*Csbs,sbs-batteryC*");
MODULE_ALIAS("of:N*T*Cti,bq20z65");
MODULE_ALIAS("of:N*T*Cti,bq20z65C*");
MODULE_ALIAS("of:N*T*Cti,bq20z75");
MODULE_ALIAS("of:N*T*Cti,bq20z75C*");
MODULE_ALIAS("i2c:bq20z65");
MODULE_ALIAS("i2c:bq20z75");
MODULE_ALIAS("i2c:sbs-battery");
