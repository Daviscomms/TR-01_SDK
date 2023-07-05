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
	{ 0xea3f7211, "devm_gpiochip_add_data_with_key" },
	{ 0x91f84a89, "dev_get_regmap" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0x638c2907, "gpiochip_get_data" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cqcom,wcd9340-gpio");
MODULE_ALIAS("of:N*T*Cqcom,wcd9340-gpioC*");
MODULE_ALIAS("of:N*T*Cqcom,wcd9341-gpio");
MODULE_ALIAS("of:N*T*Cqcom,wcd9341-gpioC*");
