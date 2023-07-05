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
	{ 0x112e4e55, "of_parse_phandle" },
	{ 0x54bb3e7e, "of_node_name_eq" },
	{ 0xb4dd5863, "snd_soc_pm_ops" },
	{ 0x9fd0b672, "of_device_is_compatible" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x3ab7ce39, "snd_pcm_hw_constraint_list" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x10a44c23, "put_device" },
	{ 0x76b27720, "snd_soc_component_set_jack" },
	{ 0xb38ec877, "snd_soc_dai_set_sysclk" },
	{ 0xeaeaa8c3, "snd_soc_card_jack_new" },
	{ 0xf22e3e2c, "snd_pcm_hw_constraint_minmax" },
	{ 0xc2267601, "snd_soc_dai_set_tdm_slot" },
	{ 0x65755402, "of_find_device_by_node" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0x9b70a0e2, "devm_kmalloc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,imx-audio-hdmi");
MODULE_ALIAS("of:N*T*Cfsl,imx-audio-hdmiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx-audio-sii902x");
MODULE_ALIAS("of:N*T*Cfsl,imx-audio-sii902xC*");
