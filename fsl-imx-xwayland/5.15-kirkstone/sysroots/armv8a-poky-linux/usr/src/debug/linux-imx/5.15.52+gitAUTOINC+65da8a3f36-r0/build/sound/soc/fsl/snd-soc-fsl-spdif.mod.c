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
	{ 0xa21db26d, "__pm_runtime_idle" },
	{ 0x7f3e258, "pm_runtime_force_suspend" },
	{ 0x815588a6, "clk_enable" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0xc2fe41ae, "snd_soc_dai_active" },
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0x19604b69, "dev_err_probe" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0x91ec338d, "regcache_cache_bypass" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x434f470d, "pm_runtime_force_resume" },
	{ 0xd30755fb, "__pm_runtime_resume" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xa9360d85, "__devm_regmap_init_mmio_clk" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xc6094e21, "imx_pcm_dma_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x7f6d659d, "snd_ctl_boolean_mono_info" },
	{ 0xddbad75f, "snd_soc_get_pcm_runtime" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x8b149c36, "clk_is_match" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0x13bec41d, "release_bus_freq" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xec3da1d2, "regcache_mark_dirty" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3f59d6dd, "request_bus_freq" },
	{ 0x72072124, "platform_get_irq" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xc4e20f3a, "devm_platform_get_and_ioremap_resource" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x2fe318ac, "snd_soc_add_dai_controls" },
	{ 0x984afbc5, "regmap_write" },
	{ 0x1e036ed0, "regcache_sync" },
	{ 0x1a2c5da8, "regcache_cache_only" },
	{ 0xc569d8ce, "__clk_get_name" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,imx35-spdif");
MODULE_ALIAS("of:N*T*Cfsl,imx35-spdifC*");
MODULE_ALIAS("of:N*T*Cfsl,vf610-spdif");
MODULE_ALIAS("of:N*T*Cfsl,vf610-spdifC*");
MODULE_ALIAS("of:N*T*Cfsl,imx6sx-spdif");
MODULE_ALIAS("of:N*T*Cfsl,imx6sx-spdifC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8qm-spdif");
MODULE_ALIAS("of:N*T*Cfsl,imx8qm-spdifC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8mm-spdif");
MODULE_ALIAS("of:N*T*Cfsl,imx8mm-spdifC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8ulp-spdif");
MODULE_ALIAS("of:N*T*Cfsl,imx8ulp-spdifC*");
