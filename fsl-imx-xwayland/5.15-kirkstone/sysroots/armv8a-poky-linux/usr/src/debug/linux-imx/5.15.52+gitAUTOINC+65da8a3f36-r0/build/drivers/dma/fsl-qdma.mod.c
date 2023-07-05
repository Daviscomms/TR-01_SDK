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
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x706f121f, "dma_async_device_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x28f26684, "irq_set_affinity_hint" },
	{ 0xa38c1436, "cpu_bit_bitmap" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x799f4159, "dma_set_mask" },
	{ 0x61e8d29b, "vchan_init" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0xf56ebd38, "platform_get_irq_byname" },
	{ 0x15a059f9, "devm_kfree" },
	{ 0x62b91460, "device_property_read_u32_array" },
	{ 0x78a0680d, "devm_ioremap_resource" },
	{ 0x2da9c344, "platform_get_resource" },
	{ 0xc56eb497, "dma_alloc_attrs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x364d397a, "dma_pool_create" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xdbcabcf7, "vchan_tx_submit" },
	{ 0x54fa8527, "vchan_tx_desc_free" },
	{ 0x365eb2a0, "dma_async_tx_descriptor_init" },
	{ 0xdcb764ad, "memset" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x43c5af50, "vchan_dma_desc_free_list" },
	{ 0xaa830fbb, "dma_free_attrs" },
	{ 0xd2ae06e3, "dma_async_device_unregister" },
	{ 0x8b330a76, "of_dma_controller_free" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xde635df0, "devm_free_irq" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,ls1021a-qdma");
MODULE_ALIAS("of:N*T*Cfsl,ls1021a-qdmaC*");
