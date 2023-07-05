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
	{ 0x329df44, "slim_driver_unregister" },
	{ 0x80769c6a, "__slim_driver_register" },
	{ 0x19604b69, "dev_err_probe" },
	{ 0xbb0713d7, "gpiod_set_raw_value" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb24e5922, "gpiod_direction_output_raw" },
	{ 0x610092b7, "gpio_to_desc" },
	{ 0x5508ddd9, "regulator_bulk_enable" },
	{ 0xf7d3fd7b, "regulator_bulk_get" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0xf3dec445, "of_get_named_gpio_flags" },
	{ 0xd4683087, "of_irq_get" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x64575cd5, "regulator_bulk_disable" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xdfd8c0e, "mfd_add_devices" },
	{ 0x558ef43f, "devm_regmap_add_irq_chip" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x984afbc5, "regmap_write" },
	{ 0x44f81556, "_dev_info" },
	{ 0xe009f34c, "mfd_remove_devices" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x86bc8961, "regmap_bulk_read" },
	{ 0xc10050e0, "__regmap_init_slimbus" },
};

MODULE_INFO(depends, "slimbus,regmap-slimbus");

