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
	{ 0xf0f16526, "dma_map_sg_attrs" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xa21db26d, "__pm_runtime_idle" },
	{ 0x7f3e258, "pm_runtime_force_suspend" },
	{ 0x815588a6, "clk_enable" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0xa67fc6db, "snd_pcm_hw_constraint_step" },
	{ 0xaad2bfca, "snd_pcm_period_elapsed" },
	{ 0xc2312a8e, "dma_unmap_sg_attrs" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0x799f4159, "dma_set_mask" },
	{ 0x6821300c, "snd_soc_lookup_component_nolocked" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x746b57e3, "snd_soc_set_runtime_hwparams" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x434f470d, "pm_runtime_force_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd30755fb, "__pm_runtime_resume" },
	{ 0x9fd0b672, "of_device_is_compatible" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xc8268547, "snd_pcm_hw_constraint_integer" },
	{ 0x50bee259, "dma_request_chan" },
	{ 0x4b86495d, "dma_set_coherent_mask" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x45cfee4c, "misc_register" },
	{ 0xa9360d85, "__devm_regmap_init_mmio_clk" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x4b223bc5, "snd_pcm_set_managed_buffer_all" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3ab7ce39, "snd_pcm_hw_constraint_list" },
	{ 0x2c8002f1, "snd_dmaengine_pcm_prepare_slave_config" },
	{ 0xf307bec7, "snd_soc_dpcm_get_substream" },
	{ 0x9166fada, "strncpy" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xefbc07be, "snd_dmaengine_pcm_refine_runtime_hwparams" },
	{ 0xe2df21d5, "__dma_request_channel" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xec3da1d2, "regcache_mark_dirty" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x2845ecbf, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa6257a2f, "complete" },
	{ 0x72072124, "platform_get_irq" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xc4e20f3a, "devm_platform_get_and_ioremap_resource" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x984afbc5, "regmap_write" },
	{ 0x1e036ed0, "regcache_sync" },
	{ 0xf5b170ab, "misc_deregister" },
	{ 0x1a2c5da8, "regcache_cache_only" },
	{ 0xddf6ad7a, "completion_done" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,imx35-asrc");
MODULE_ALIAS("of:N*T*Cfsl,imx35-asrcC*");
MODULE_ALIAS("of:N*T*Cfsl,imx53-asrc");
MODULE_ALIAS("of:N*T*Cfsl,imx53-asrcC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8qm-asrc");
MODULE_ALIAS("of:N*T*Cfsl,imx8qm-asrcC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8qxp-asrc");
MODULE_ALIAS("of:N*T*Cfsl,imx8qxp-asrcC*");
