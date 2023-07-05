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
	{ 0x44f81556, "_dev_info" },
	{ 0x706f121f, "dma_async_device_register" },
	{ 0x696f0832, "debugfs_create_devm_seqfile" },
	{ 0x911e4d96, "debugfs_create_dir" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0xc56eb497, "dma_alloc_attrs" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0x65755402, "of_find_device_by_node" },
	{ 0x1491f466, "of_parse_phandle_with_args" },
	{ 0x4f13cfc4, "mbox_request_channel" },
	{ 0x9fd0b672, "of_device_is_compatible" },
	{ 0x7e4212d9, "of_count_phandle_with_args" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xb14eff20, "dmaengine_unmap_put" },
	{ 0xfb0a645b, "dma_run_dependencies" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6091c17c, "mbox_free_channel" },
	{ 0x694f5df8, "debugfs_remove" },
	{ 0xd2ae06e3, "dma_async_device_unregister" },
	{ 0xaa830fbb, "dma_free_attrs" },
	{ 0xc8e3332b, "raid6_gflog" },
	{ 0x206a8995, "mbox_client_peek_data" },
	{ 0x365eb2a0, "dma_async_tx_descriptor_init" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xb967a38d, "mbox_client_txdone" },
	{ 0x563e1189, "mbox_send_message" },
	{ 0x6d7399bf, "seq_printf" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "raid6_pq");

MODULE_ALIAS("of:N*T*Cbrcm,iproc-sba");
MODULE_ALIAS("of:N*T*Cbrcm,iproc-sbaC*");
MODULE_ALIAS("of:N*T*Cbrcm,iproc-sba-v2");
MODULE_ALIAS("of:N*T*Cbrcm,iproc-sba-v2C*");
