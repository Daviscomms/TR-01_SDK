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
	{ 0xc3201a50, "devm_gpiod_get" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x361254bf, "snd_soc_info_enum_double" },
	{ 0x22833452, "snd_soc_dapm_kcontrol_dapm" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0xe3f4d0d8, "gpiod_set_value_cansleep" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x7a5fd1fd, "snd_soc_dapm_mux_update_power" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csimple-audio-mux");
MODULE_ALIAS("of:N*T*Csimple-audio-muxC*");
