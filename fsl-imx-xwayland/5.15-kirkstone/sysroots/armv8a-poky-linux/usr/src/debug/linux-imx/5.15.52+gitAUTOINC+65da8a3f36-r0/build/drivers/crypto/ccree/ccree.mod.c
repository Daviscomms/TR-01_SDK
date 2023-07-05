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
	{ 0xa8b3f5b7, "crypto_alloc_skcipher" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xf0f16526, "dma_map_sg_attrs" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa21db26d, "__pm_runtime_idle" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x911e4d96, "debugfs_create_dir" },
	{ 0x6215a1fd, "crypto_alloc_shash" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0x95879b36, "__pm_runtime_use_autosuspend" },
	{ 0x5dd3aa5a, "__pm_runtime_suspend" },
	{ 0xc2312a8e, "dma_unmap_sg_attrs" },
	{ 0x19604b69, "dev_err_probe" },
	{ 0x461d16ca, "sg_nents" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x87b8798d, "sg_next" },
	{ 0x78a0680d, "devm_ioremap_resource" },
	{ 0xc264d4ce, "param_ops_bool" },
	{ 0xd30755fb, "__pm_runtime_resume" },
	{ 0xaa830fbb, "dma_free_attrs" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0xb73c7cbf, "devm_clk_get_optional" },
	{ 0xa8fb743d, "des_expand_key" },
	{ 0x4b86495d, "dma_set_coherent_mask" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x57e6389f, "dma_sync_single_for_cpu" },
	{ 0x8ac743de, "sg_copy_buffer" },
	{ 0xbbe80fdb, "kmalloc_order" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x5fca5a8f, "crypto_unregister_skcipher" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0x4086e133, "crypto_register_ahash" },
	{ 0x694f5df8, "debugfs_remove" },
	{ 0xc56eb497, "dma_alloc_attrs" },
	{ 0x2da9c344, "platform_get_resource" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xae170f1f, "debugfs_create_bool" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x682bbbda, "crypto_register_skcipher" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x44f81556, "_dev_info" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x36095f8f, "debugfs_create_regset32" },
	{ 0xcb31ada1, "of_dma_is_coherent" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0xfcf15497, "crypto_skcipher_decrypt" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x6969450e, "dma_map_page_attrs" },
	{ 0x2b1ba535, "__pm_runtime_set_status" },
	{ 0x2d192c70, "sg_zero_buffer" },
	{ 0xe4d41d88, "crypto_destroy_tfm" },
	{ 0x690cedcc, "crypto_unregister_ahash" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x6fbb1e42, "dev_driver_string" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x80d432ce, "crypto_skcipher_setkey" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x6f5afbc6, "crypto_unregister_aead" },
	{ 0xcc550a06, "crypto_register_aead" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9c24ea60, "dma_supported" },
	{ 0x7312ac51, "dma_sync_single_for_device" },
	{ 0x6500352a, "dma_unmap_page_attrs" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x8ddd463a, "pm_runtime_set_autosuspend_delay" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc25d6ffa, "crypto_shash_tfm_digest" },
	{ 0x72072124, "platform_get_irq" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x364d397a, "dma_pool_create" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xf234f2db, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "libdes,authenc");

MODULE_ALIAS("of:N*T*Carm,cryptocell-703-ree");
MODULE_ALIAS("of:N*T*Carm,cryptocell-703-reeC*");
MODULE_ALIAS("of:N*T*Carm,cryptocell-713-ree");
MODULE_ALIAS("of:N*T*Carm,cryptocell-713-reeC*");
MODULE_ALIAS("of:N*T*Carm,cryptocell-712-ree");
MODULE_ALIAS("of:N*T*Carm,cryptocell-712-reeC*");
MODULE_ALIAS("of:N*T*Carm,cryptocell-710-ree");
MODULE_ALIAS("of:N*T*Carm,cryptocell-710-reeC*");
MODULE_ALIAS("of:N*T*Carm,cryptocell-630p-ree");
MODULE_ALIAS("of:N*T*Carm,cryptocell-630p-reeC*");

MODULE_INFO(srcversion, "31B7ACB2E7C65CD9A7FFF7C");
