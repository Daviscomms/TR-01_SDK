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
	{ 0xa4d6e7ef, "regulator_get_voltage_sel_regmap" },
	{ 0xd8c397fe, "regulator_set_voltage_sel_regmap" },
	{ 0xa7163fbe, "regulator_map_voltage_linear" },
	{ 0xb69c4ab4, "regulator_list_voltage_linear" },
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x78a0ffba, "devm_fwnode_gpiod_get_index" },
	{ 0xa6e90141, "regulator_set_active_discharge_regmap" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe3f4d0d8, "gpiod_set_value_cansleep" },
	{ 0x1d38a523, "rdev_get_id" },
	{ 0xdee17ab1, "rdev_get_drvdata" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xb36316f6, "devm_regulator_register" },
	{ 0x201129d4, "__devm_regmap_init_i2c" },
	{ 0x9b70a0e2, "devm_kmalloc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:tps65132");
