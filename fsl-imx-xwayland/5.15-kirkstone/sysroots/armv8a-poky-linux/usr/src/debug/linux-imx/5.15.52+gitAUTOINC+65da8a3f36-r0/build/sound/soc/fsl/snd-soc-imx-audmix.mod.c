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
	{ 0x7e4212d9, "of_count_phandle_with_args" },
	{ 0xb4dd5863, "snd_soc_pm_ops" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xf5ca1375, "devm_kasprintf" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x65268587, "snd_pcm_hw_constraint_mask64" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x3ab7ce39, "snd_pcm_hw_constraint_list" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x44f81556, "_dev_info" },
	{ 0x10a44c23, "put_device" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0xb38ec877, "snd_soc_dai_set_sysclk" },
	{ 0x3a51b72d, "snd_soc_dai_set_fmt" },
	{ 0xf22e3e2c, "snd_pcm_hw_constraint_minmax" },
	{ 0x1491f466, "of_parse_phandle_with_args" },
	{ 0xc2267601, "snd_soc_dai_set_tdm_slot" },
	{ 0x65755402, "of_find_device_by_node" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x9b70a0e2, "devm_kmalloc" },
};

MODULE_INFO(depends, "");

