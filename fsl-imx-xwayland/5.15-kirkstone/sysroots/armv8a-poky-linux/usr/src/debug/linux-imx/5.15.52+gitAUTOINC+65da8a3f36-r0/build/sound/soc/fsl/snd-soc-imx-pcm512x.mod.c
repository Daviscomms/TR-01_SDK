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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5560e4a2, "devm_snd_soc_register_card" },
	{ 0xf6e5a2d8, "snd_soc_of_parse_card_name" },
	{ 0xd83d9c59, "snd_soc_of_parse_audio_simple_widgets" },
	{ 0xb4dd5863, "snd_soc_pm_ops" },
	{ 0x7c8fa292, "snd_soc_component_update_bits" },
	{ 0xf447ec11, "snd_soc_of_get_dai_link_codecs" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x3ab7ce39, "snd_pcm_hw_constraint_list" },
	{ 0x6412f214, "snd_soc_of_get_dai_name" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0x2383879c, "of_property_read_string" },
	{ 0x9f8e4c04, "asoc_simple_parse_daifmt" },
	{ 0xff91978a, "snd_soc_unregister_card" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x2af0731c, "of_get_child_by_name" },
	{ 0xddbad75f, "snd_soc_get_pcm_runtime" },
	{ 0x74a4d336, "snd_soc_dai_set_bclk_ratio" },
	{ 0xe6e60552, "snd_soc_of_parse_aux_devs" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x1810fe3a, "of_get_next_child" },
	{ 0xb38ec877, "snd_soc_dai_set_sysclk" },
	{ 0x4d6b6c15, "snd_soc_of_parse_audio_routing" },
	{ 0xbf5c563f, "devm_gpiod_get_optional" },
	{ 0xe3f4d0d8, "gpiod_set_value_cansleep" },
	{ 0x1491f466, "of_parse_phandle_with_args" },
	{ 0xa419a9ac, "snd_soc_component_read" },
	{ 0xe28f5a40, "snd_soc_limit_volume" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xad40211d, "snd_soc_of_parse_tdm_slot" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,imx-audio-pcm512x");
MODULE_ALIAS("of:N*T*Cfsl,imx-audio-pcm512xC*");
