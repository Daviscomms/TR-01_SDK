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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa21db26d, "__pm_runtime_idle" },
	{ 0x7f3e258, "pm_runtime_force_suspend" },
	{ 0x815588a6, "clk_enable" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0xc2fe41ae, "snd_soc_dai_active" },
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0xaad2bfca, "snd_pcm_period_elapsed" },
	{ 0x846e20a4, "snd_dmaengine_pcm_set_config_from_dai_data" },
	{ 0x3686e637, "snd_dma_alloc_pages" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0x799f4159, "dma_set_mask" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x434f470d, "pm_runtime_force_resume" },
	{ 0xd30755fb, "__pm_runtime_resume" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0x9acf253c, "snd_hwparams_to_dma_slave_config" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x50bee259, "dma_request_chan" },
	{ 0x4b86495d, "dma_set_coherent_mask" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xa9360d85, "__devm_regmap_init_mmio_clk" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xc6094e21, "imx_pcm_dma_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0xf307bec7, "snd_soc_dpcm_get_substream" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0xd951beb7, "snd_dma_free_pages" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x629cfb2a, "of_get_property" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xec3da1d2, "regcache_mark_dirty" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x2845ecbf, "dma_release_channel" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x72072124, "platform_get_irq" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xc4e20f3a, "devm_platform_get_and_ioremap_resource" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x984afbc5, "regmap_write" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x1e036ed0, "regcache_sync" },
	{ 0x1a2c5da8, "regcache_cache_only" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,imx35-esai");
MODULE_ALIAS("of:N*T*Cfsl,imx35-esaiC*");
MODULE_ALIAS("of:N*T*Cfsl,vf610-esai");
MODULE_ALIAS("of:N*T*Cfsl,vf610-esaiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx6ull-esai");
MODULE_ALIAS("of:N*T*Cfsl,imx6ull-esaiC*");
