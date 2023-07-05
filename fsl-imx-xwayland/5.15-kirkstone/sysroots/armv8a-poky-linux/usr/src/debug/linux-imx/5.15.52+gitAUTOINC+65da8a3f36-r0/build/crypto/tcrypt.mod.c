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
	{ 0xa0d2ef8e, "param_ops_charp" },
	{ 0xbcde32ad, "param_ops_int" },
	{ 0xb61632ee, "param_ops_uint" },
	{ 0x951a2773, "crypto_has_alg" },
	{ 0x3bdb5d28, "alg_test" },
	{ 0x90f10221, "crypto_aead_setkey" },
	{ 0xf6041217, "crypto_aead_setauthsize" },
	{ 0xa8a63a2b, "crypto_alloc_aead" },
	{ 0x583f06b5, "crypto_ahash_final" },
	{ 0x9cea13e0, "crypto_ahash_setkey" },
	{ 0x37a0cba, "kfree" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x95b49d69, "crypto_alloc_ahash" },
	{ 0x75fb9062, "arch_timer_read_counter" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x80d432ce, "crypto_skcipher_setkey" },
	{ 0xdcb764ad, "memset" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xb04fb8b8, "crypto_req_done" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xe4d41d88, "crypto_destroy_tfm" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa8b3f5b7, "crypto_alloc_skcipher" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xe8c65a8f, "crypto_ahash_digest" },
	{ 0xef6a7533, "crypto_aead_decrypt" },
	{ 0xd078248, "crypto_aead_encrypt" },
	{ 0x92997ed8, "_printk" },
	{ 0xfcf15497, "crypto_skcipher_decrypt" },
	{ 0xf234f2db, "crypto_skcipher_encrypt" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x6a5cb5ee, "__get_free_pages" },
};

MODULE_INFO(depends, "");

