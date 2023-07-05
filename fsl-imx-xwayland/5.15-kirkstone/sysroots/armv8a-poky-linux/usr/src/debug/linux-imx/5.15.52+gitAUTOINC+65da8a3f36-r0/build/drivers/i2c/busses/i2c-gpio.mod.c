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
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x44f81556, "_dev_info" },
	{ 0xcce60432, "desc_to_gpio" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x41fb46af, "devm_gpiod_get_index" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8dbfcded, "i2c_bit_add_numbered_bus" },
	{ 0x5792f848, "strlcpy" },
	{ 0x62ba7b46, "gpiod_cansleep" },
	{ 0xc3201a50, "devm_gpiod_get" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xe3f4d0d8, "gpiod_set_value_cansleep" },
	{ 0x691166c5, "gpiod_get_value_cansleep" },
	{ 0xe473e1a8, "i2c_del_adapter" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ci2c-gpio");
MODULE_ALIAS("of:N*T*Ci2c-gpioC*");
