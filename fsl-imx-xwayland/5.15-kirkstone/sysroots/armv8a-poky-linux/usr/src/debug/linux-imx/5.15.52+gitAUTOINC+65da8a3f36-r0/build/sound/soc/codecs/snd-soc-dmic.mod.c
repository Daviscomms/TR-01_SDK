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
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x62b91460, "device_property_read_u32_array" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0xbf5c563f, "devm_gpiod_get_optional" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe3f4d0d8, "gpiod_set_value_cansleep" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xb61632ee, "param_ops_uint" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cdmic-codec");
MODULE_ALIAS("of:N*T*Cdmic-codecC*");
