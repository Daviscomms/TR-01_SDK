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
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x78369793, "regmap_irq_get_domain" },
	{ 0x5ca32d17, "devm_regmap_add_irq_chip_fwnode" },
	{ 0xc3d256ea, "dev_fwnode" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x72072124, "platform_get_irq" },
	{ 0x9b72ce26, "device_property_present" },
	{ 0x520c9fef, "devm_gpio_regmap_register" },
	{ 0x91f84a89, "dev_get_regmap" },
	{ 0x62b91460, "device_property_read_u32_array" },
	{ 0x87ae3dce, "device_get_match_data" },
	{ 0xdcb764ad, "memset" },
};

MODULE_INFO(depends, "gpio-regmap");

MODULE_ALIAS("of:N*T*Ckontron,sl28cpld-gpio");
MODULE_ALIAS("of:N*T*Ckontron,sl28cpld-gpioC*");
MODULE_ALIAS("of:N*T*Ckontron,sl28cpld-gpi");
MODULE_ALIAS("of:N*T*Ckontron,sl28cpld-gpiC*");
MODULE_ALIAS("of:N*T*Ckontron,sl28cpld-gpo");
MODULE_ALIAS("of:N*T*Ckontron,sl28cpld-gpoC*");
