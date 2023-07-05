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
	{ 0x7f8ed9b2, "sysfs_remove_group" },
	{ 0x1810fe3a, "of_get_next_child" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x2772b215, "of_property_read_variable_u8_array" },
	{ 0x2383879c, "of_property_read_string" },
	{ 0x1857d1a0, "regulator_disable" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x91b8044e, "sysfs_create_group" },
	{ 0xe545a4c7, "devm_backlight_device_register" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x250ebd23, "regulator_enable" },
	{ 0xc231191d, "devm_regulator_get_optional" },
	{ 0x9b26d69f, "devm_regulator_get" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xdd09ea29, "devm_pwm_get" },
	{ 0xea466442, "pwm_apply_state" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x9222bda4, "i2c_smbus_write_byte_data" },
	{ 0x156e258c, "i2c_smbus_read_byte_data" },
	{ 0x96848186, "scnprintf" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:lp8550");
MODULE_ALIAS("i2c:lp8551");
MODULE_ALIAS("i2c:lp8552");
MODULE_ALIAS("i2c:lp8553");
MODULE_ALIAS("i2c:lp8555");
MODULE_ALIAS("i2c:lp8556");
MODULE_ALIAS("i2c:lp8557");
MODULE_ALIAS("of:N*T*Cti,lp8550");
MODULE_ALIAS("of:N*T*Cti,lp8550C*");
MODULE_ALIAS("of:N*T*Cti,lp8551");
MODULE_ALIAS("of:N*T*Cti,lp8551C*");
MODULE_ALIAS("of:N*T*Cti,lp8552");
MODULE_ALIAS("of:N*T*Cti,lp8552C*");
MODULE_ALIAS("of:N*T*Cti,lp8553");
MODULE_ALIAS("of:N*T*Cti,lp8553C*");
MODULE_ALIAS("of:N*T*Cti,lp8555");
MODULE_ALIAS("of:N*T*Cti,lp8555C*");
MODULE_ALIAS("of:N*T*Cti,lp8556");
MODULE_ALIAS("of:N*T*Cti,lp8556C*");
MODULE_ALIAS("of:N*T*Cti,lp8557");
MODULE_ALIAS("of:N*T*Cti,lp8557C*");
