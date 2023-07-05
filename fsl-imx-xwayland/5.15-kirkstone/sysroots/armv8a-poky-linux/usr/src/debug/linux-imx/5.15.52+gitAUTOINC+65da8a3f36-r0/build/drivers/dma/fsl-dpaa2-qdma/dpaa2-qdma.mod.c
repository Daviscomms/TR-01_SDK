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
	{ 0x8b4639e7, "fsl_mc_driver_unregister" },
	{ 0x51fd26a3, "__fsl_mc_driver_register" },
	{ 0x1b7c4023, "dpaa2_io_service_rearm" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x261cd01, "dpaa2_io_store_next" },
	{ 0x3d01f417, "dpaa2_io_service_pull_fq" },
	{ 0xd2ae06e3, "dma_async_device_unregister" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x54fa8527, "vchan_tx_desc_free" },
	{ 0xdbcabcf7, "vchan_tx_submit" },
	{ 0x365eb2a0, "dma_async_tx_descriptor_init" },
	{ 0x706f121f, "dma_async_device_register" },
	{ 0xc575722d, "soc_device_match" },
	{ 0x61e8d29b, "vchan_init" },
	{ 0x2e9816e, "dpdmai_enable" },
	{ 0x3616e00c, "dpaa2_io_store_create" },
	{ 0xf9f6007b, "dpdmai_set_rx_queue" },
	{ 0x76c52f77, "dpdmai_get_tx_queue" },
	{ 0x4994345c, "dpaa2_io_store_destroy" },
	{ 0xb71dbd0a, "dpaa2_io_service_deregister" },
	{ 0x13d535f, "dpaa2_io_service_register" },
	{ 0x6432f8b8, "dpdmai_get_rx_queue" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x70bc1bf, "dpdmai_get_attributes" },
	{ 0x4d0a05f6, "fsl_mc_portal_free" },
	{ 0xb296d61c, "dpdmai_open" },
	{ 0xbeeb1416, "fsl_mc_portal_allocate" },
	{ 0xb7a41123, "iommu_get_domain_for_dev" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x9652279e, "dpdmai_destroy" },
	{ 0x7ad1ea97, "dpdmai_close" },
	{ 0xc98b02b5, "dpdmai_disable" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x905f6cbe, "dpdmai_reset" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x364d397a, "dma_pool_create" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x43c5af50, "vchan_dma_desc_free_list" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x30f2d6c, "dpaa2_io_service_enqueue_fq" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "dpdmai");

