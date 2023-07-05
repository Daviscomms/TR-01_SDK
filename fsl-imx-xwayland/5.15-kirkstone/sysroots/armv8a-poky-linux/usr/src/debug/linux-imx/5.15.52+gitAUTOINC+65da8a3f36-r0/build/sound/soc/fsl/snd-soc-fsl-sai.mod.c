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
	{ 0xa21db26d, "__pm_runtime_idle" },
	{ 0x7f3e258, "pm_runtime_force_suspend" },
	{ 0x815588a6, "clk_enable" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0xdc9a6fc6, "of_property_read_u32_index" },
	{ 0xa67fc6db, "snd_pcm_hw_constraint_step" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0x37cc11a0, "devm_snd_dmaengine_pcm_register" },
	{ 0x8ae5b8a7, "pinctrl_select_state" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xdc3651f8, "of_alias_get_id" },
	{ 0x281e064b, "devm_pinctrl_get" },
	{ 0x434f470d, "pm_runtime_force_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd30755fb, "__pm_runtime_resume" },
	{ 0x9fd0b672, "of_device_is_compatible" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xd3d4edc2, "pinctrl_lookup_state" },
	{ 0x7f8ed9b2, "sysfs_remove_group" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xa9360d85, "__devm_regmap_init_mmio_clk" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xc6094e21, "imx_pcm_dma_init" },
	{ 0x3ab7ce39, "snd_pcm_hw_constraint_list" },
	{ 0x91b8044e, "sysfs_create_group" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0x167275f1, "of_property_count_elems_of_size" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x8b149c36, "clk_is_match" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0xee6b71c4, "syscon_regmap_lookup_by_compatible" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0x13bec41d, "release_bus_freq" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xec3da1d2, "regcache_mark_dirty" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x28afbb08, "cpu_latency_qos_add_request" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3f59d6dd, "request_bus_freq" },
	{ 0x72072124, "platform_get_irq" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xc4e20f3a, "devm_platform_get_and_ioremap_resource" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x984afbc5, "regmap_write" },
	{ 0x1e036ed0, "regcache_sync" },
	{ 0x1a2c5da8, "regcache_cache_only" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0x22ec5205, "cpu_latency_qos_remove_request" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,vf610-sai");
MODULE_ALIAS("of:N*T*Cfsl,vf610-saiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx6sx-sai");
MODULE_ALIAS("of:N*T*Cfsl,imx6sx-saiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx6ul-sai");
MODULE_ALIAS("of:N*T*Cfsl,imx6ul-saiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx7ulp-sai");
MODULE_ALIAS("of:N*T*Cfsl,imx7ulp-saiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8mq-sai");
MODULE_ALIAS("of:N*T*Cfsl,imx8mq-saiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8mm-sai");
MODULE_ALIAS("of:N*T*Cfsl,imx8mm-saiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8mp-sai");
MODULE_ALIAS("of:N*T*Cfsl,imx8mp-saiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8qm-sai");
MODULE_ALIAS("of:N*T*Cfsl,imx8qm-saiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8ulp-sai");
MODULE_ALIAS("of:N*T*Cfsl,imx8ulp-saiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8mn-sai");
MODULE_ALIAS("of:N*T*Cfsl,imx8mn-saiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx93-sai");
MODULE_ALIAS("of:N*T*Cfsl,imx93-saiC*");
