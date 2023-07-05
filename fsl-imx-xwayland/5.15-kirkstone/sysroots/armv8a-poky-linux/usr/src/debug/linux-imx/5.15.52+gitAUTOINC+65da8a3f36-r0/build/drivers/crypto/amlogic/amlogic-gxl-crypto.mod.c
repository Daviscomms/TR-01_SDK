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
	{ 0x815588a6, "clk_enable" },
	{ 0xc2312a8e, "dma_unmap_sg_attrs" },
	{ 0x461d16ca, "sg_nents" },
	{ 0x3900797a, "crypto_transfer_skcipher_request_to_engine" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc232b207, "crypto_engine_alloc_init" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x87b8798d, "sg_next" },
	{ 0xaa830fbb, "dma_free_attrs" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xdcb764ad, "memset" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x5fca5a8f, "crypto_unregister_skcipher" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x588025c2, "crypto_engine_start" },
	{ 0xc56eb497, "dma_alloc_attrs" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x682bbbda, "crypto_register_skcipher" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0xfcf15497, "crypto_skcipher_decrypt" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x6969450e, "dma_map_page_attrs" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xe4d41d88, "crypto_destroy_tfm" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x6fbb1e42, "dev_driver_string" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0x80d432ce, "crypto_skcipher_setkey" },
	{ 0x38dfdcd, "crypto_engine_exit" },
	{ 0xec43a075, "crypto_finalize_skcipher_request" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6500352a, "dma_unmap_page_attrs" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa6257a2f, "complete" },
	{ 0x72072124, "platform_get_irq" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x24650ce9, "devm_platform_ioremap_resource" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xf234f2db, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "crypto_engine");

MODULE_ALIAS("of:N*T*Camlogic,gxl-crypto");
MODULE_ALIAS("of:N*T*Camlogic,gxl-cryptoC*");
