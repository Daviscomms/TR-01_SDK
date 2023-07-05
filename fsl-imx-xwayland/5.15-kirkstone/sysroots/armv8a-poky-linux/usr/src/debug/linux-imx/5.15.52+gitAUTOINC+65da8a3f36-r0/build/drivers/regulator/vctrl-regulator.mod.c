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
	{ 0xd1e13211, "regulator_map_voltage_iterate" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xb36316f6, "devm_regulator_register" },
	{ 0x8da4e3f4, "devm_regulator_put" },
	{ 0x14b786d4, "regulator_get_voltage" },
	{ 0xb7c0f443, "sort" },
	{ 0x9a12a9a3, "regulator_list_voltage" },
	{ 0x89f57db3, "regulator_count_voltages" },
	{ 0xa65efb50, "of_get_regulator_init_data" },
	{ 0xf023c970, "regulator_get_linear_step" },
	{ 0x9b26d69f, "devm_regulator_get" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x1fee5046, "regulator_get_voltage_rdev" },
	{ 0x92997ed8, "_printk" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xcd4b26de, "regulator_set_voltage_rdev" },
	{ 0xdee17ab1, "rdev_get_drvdata" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cvctrl-regulator");
MODULE_ALIAS("of:N*T*Cvctrl-regulatorC*");
