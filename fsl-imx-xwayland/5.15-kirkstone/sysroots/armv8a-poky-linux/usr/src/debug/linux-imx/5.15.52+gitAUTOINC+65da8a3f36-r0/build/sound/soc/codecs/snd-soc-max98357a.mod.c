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
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x62b91460, "device_property_read_u32_array" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0xbf5c563f, "devm_gpiod_get_optional" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xb95bc595, "gpiod_set_value" },
	{ 0x9b70a0e2, "devm_kmalloc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:MX98357A:*");
MODULE_ALIAS("acpi*:MX98360A:*");
MODULE_ALIAS("of:N*T*Cmaxim,max98357a");
MODULE_ALIAS("of:N*T*Cmaxim,max98357aC*");
MODULE_ALIAS("of:N*T*Cmaxim,max98360a");
MODULE_ALIAS("of:N*T*Cmaxim,max98360aC*");
