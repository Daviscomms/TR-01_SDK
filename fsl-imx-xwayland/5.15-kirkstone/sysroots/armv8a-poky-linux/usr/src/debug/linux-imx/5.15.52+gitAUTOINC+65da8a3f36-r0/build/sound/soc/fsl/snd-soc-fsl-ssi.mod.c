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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x815588a6, "clk_enable" },
	{ 0x911e4d96, "debugfs_create_dir" },
	{ 0x6bdd324d, "of_find_node_opts_by_path" },
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0xf6cb582e, "single_open" },
	{ 0xa67fc6db, "snd_pcm_hw_constraint_step" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0xdbb0b953, "single_release" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x6d7399bf, "seq_printf" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0x2f4e43f, "platform_device_register_full" },
	{ 0x3b235e89, "debugfs_create_file" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x926155f3, "seq_read" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa9360d85, "__devm_regmap_init_mmio_clk" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xc6094e21, "imx_pcm_dma_init" },
	{ 0x11089ac7, "_ctype" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0x694f5df8, "debugfs_remove" },
	{ 0xf3cf0571, "platform_device_unregister" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x9f984513, "strrchr" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0x629cfb2a, "of_get_property" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0x13bec41d, "release_bus_freq" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xec3da1d2, "regcache_mark_dirty" },
	{ 0xd4423e61, "seq_lseek" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3f59d6dd, "request_bus_freq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x95bc757f, "of_property_match_string" },
	{ 0x72072124, "platform_get_irq" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xc4e20f3a, "devm_platform_get_and_ioremap_resource" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x984afbc5, "regmap_write" },
	{ 0x1e036ed0, "regcache_sync" },
	{ 0x1a2c5da8, "regcache_cache_only" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,mpc8610-ssi");
MODULE_ALIAS("of:N*T*Cfsl,mpc8610-ssiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx51-ssi");
MODULE_ALIAS("of:N*T*Cfsl,imx51-ssiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx35-ssi");
MODULE_ALIAS("of:N*T*Cfsl,imx35-ssiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx21-ssi");
MODULE_ALIAS("of:N*T*Cfsl,imx21-ssiC*");
