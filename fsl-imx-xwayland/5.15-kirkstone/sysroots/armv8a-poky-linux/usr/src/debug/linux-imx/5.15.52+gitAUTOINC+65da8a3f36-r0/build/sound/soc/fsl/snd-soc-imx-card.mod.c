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
	{ 0x5560e4a2, "devm_snd_soc_register_card" },
	{ 0xf6e5a2d8, "snd_soc_of_parse_card_name" },
	{ 0x19604b69, "dev_err_probe" },
	{ 0x54bb3e7e, "of_node_name_eq" },
	{ 0xb4dd5863, "snd_soc_pm_ops" },
	{ 0xf5ca1375, "devm_kasprintf" },
	{ 0xf447ec11, "snd_soc_of_get_dai_link_codecs" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3ab7ce39, "snd_pcm_hw_constraint_list" },
	{ 0x6412f214, "snd_soc_of_get_dai_name" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0x2383879c, "of_property_read_string" },
	{ 0x5a921311, "strncmp" },
	{ 0x9f8e4c04, "asoc_simple_parse_daifmt" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x2af0731c, "of_get_child_by_name" },
	{ 0x82fcc1cc, "snd_pcm_hw_rule_add" },
	{ 0x77cd6851, "snd_soc_dai_link_set_capabilities" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x1810fe3a, "of_get_next_child" },
	{ 0xb38ec877, "snd_soc_dai_set_sysclk" },
	{ 0x4d6b6c15, "snd_soc_of_parse_audio_routing" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x3a51b72d, "snd_soc_dai_set_fmt" },
	{ 0x1491f466, "of_parse_phandle_with_args" },
	{ 0xc2267601, "snd_soc_dai_set_tdm_slot" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xad40211d, "snd_soc_of_parse_tdm_slot" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,imx-audio-card");
MODULE_ALIAS("of:N*T*Cfsl,imx-audio-cardC*");
