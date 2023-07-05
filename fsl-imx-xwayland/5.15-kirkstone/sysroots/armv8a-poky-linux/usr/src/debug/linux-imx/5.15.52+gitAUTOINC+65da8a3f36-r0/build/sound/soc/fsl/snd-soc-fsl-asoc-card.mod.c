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
	{ 0x19604b69, "dev_err_probe" },
	{ 0x54bb3e7e, "of_node_name_eq" },
	{ 0xb4dd5863, "snd_soc_pm_ops" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x72b1eef4, "snd_soc_dai_set_pll" },
	{ 0x9fd0b672, "of_device_is_compatible" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xf5ca1375, "devm_kasprintf" },
	{ 0x45979055, "snd_soc_daifmt_parse_format" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xfaad83bc, "of_find_i2c_device_by_node" },
	{ 0x3ab7ce39, "snd_pcm_hw_constraint_list" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0xf307bec7, "snd_soc_dpcm_get_substream" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x4f326caa, "snd_soc_jack_notifier_register" },
	{ 0x87aff054, "snd_soc_daifmt_parse_clock_provider_raw" },
	{ 0x10a44c23, "put_device" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xdc3395f5, "asoc_simple_init_jack" },
	{ 0xb38ec877, "snd_soc_dai_set_sysclk" },
	{ 0x8cfc5ddd, "clk_get" },
	{ 0x4d6b6c15, "snd_soc_of_parse_audio_routing" },
	{ 0x58631dab, "imx_audmux_v2_configure_port" },
	{ 0x58b454ff, "snd_soc_dapm_disable_pin" },
	{ 0x3a51b72d, "snd_soc_dai_set_fmt" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5cfaf4b, "snd_soc_dapm_enable_pin" },
	{ 0x1491f466, "of_parse_phandle_with_args" },
	{ 0xc2267601, "snd_soc_dai_set_tdm_slot" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x65755402, "of_find_device_by_node" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0x9b70a0e2, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-imx-audmux");

MODULE_ALIAS("of:N*T*Cfsl,imx-audio-ac97");
MODULE_ALIAS("of:N*T*Cfsl,imx-audio-ac97C*");
MODULE_ALIAS("of:N*T*Cfsl,imx-audio-cs42888");
MODULE_ALIAS("of:N*T*Cfsl,imx-audio-cs42888C*");
MODULE_ALIAS("of:N*T*Cfsl,imx-audio-cs427x");
MODULE_ALIAS("of:N*T*Cfsl,imx-audio-cs427xC*");
MODULE_ALIAS("of:N*T*Cfsl,imx-audio-tlv320aic32x4");
MODULE_ALIAS("of:N*T*Cfsl,imx-audio-tlv320aic32x4C*");
MODULE_ALIAS("of:N*T*Cfsl,imx-audio-sgtl5000");
MODULE_ALIAS("of:N*T*Cfsl,imx-audio-sgtl5000C*");
MODULE_ALIAS("of:N*T*Cfsl,imx-audio-wm8962");
MODULE_ALIAS("of:N*T*Cfsl,imx-audio-wm8962C*");
MODULE_ALIAS("of:N*T*Cfsl,imx-audio-wm8960");
MODULE_ALIAS("of:N*T*Cfsl,imx-audio-wm8960C*");
MODULE_ALIAS("of:N*T*Cfsl,imx-audio-mqs");
MODULE_ALIAS("of:N*T*Cfsl,imx-audio-mqsC*");
MODULE_ALIAS("of:N*T*Cfsl,imx-audio-wm8524");
MODULE_ALIAS("of:N*T*Cfsl,imx-audio-wm8524C*");
MODULE_ALIAS("of:N*T*Cfsl,imx-audio-si476x");
MODULE_ALIAS("of:N*T*Cfsl,imx-audio-si476xC*");
MODULE_ALIAS("of:N*T*Cfsl,imx-audio-wm8958");
MODULE_ALIAS("of:N*T*Cfsl,imx-audio-wm8958C*");
