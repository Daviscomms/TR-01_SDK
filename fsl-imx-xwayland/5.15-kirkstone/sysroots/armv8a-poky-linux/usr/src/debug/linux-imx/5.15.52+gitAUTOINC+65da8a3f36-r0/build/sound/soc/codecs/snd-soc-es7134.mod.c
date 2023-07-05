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
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0x1a2c0151, "dapm_regulator_event" },
	{ 0xe2c3a724, "snd_soc_dapm_new_controls" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x3ddf8700, "snd_soc_dapm_add_routes" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x9b70a0e2, "devm_kmalloc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ceverest,es7134");
MODULE_ALIAS("of:N*T*Ceverest,es7134C*");
MODULE_ALIAS("of:N*T*Ceverest,es7144");
MODULE_ALIAS("of:N*T*Ceverest,es7144C*");
MODULE_ALIAS("of:N*T*Ceverest,es7154");
MODULE_ALIAS("of:N*T*Ceverest,es7154C*");
