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
	{ 0x5560e4a2, "devm_snd_soc_register_card" },
	{ 0xf6e5a2d8, "snd_soc_of_parse_card_name" },
	{ 0xdc9a6fc6, "of_property_read_u32_index" },
	{ 0x112e4e55, "of_parse_phandle" },
	{ 0x19604b69, "dev_err_probe" },
	{ 0xb4dd5863, "snd_soc_pm_ops" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x3ab7ce39, "snd_pcm_hw_constraint_list" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xb38ec877, "snd_soc_dai_set_sysclk" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0x9b70a0e2, "devm_kmalloc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,imx-audio-spdif");
MODULE_ALIAS("of:N*T*Cfsl,imx-audio-spdifC*");
