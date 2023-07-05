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

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc30f8a7c, "module_layout" },
	{ 0xa8b3f5b7, "crypto_alloc_skcipher" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x53b954a2, "up_read" },
	{ 0x6a449c4f, "register_sysctl_table" },
	{ 0xbcde32ad, "param_ops_int" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x87b8798d, "sg_next" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x668b19a1, "down_read" },
	{ 0x583f06b5, "crypto_ahash_final" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x45cfee4c, "misc_register" },
	{ 0xdcb764ad, "memset" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd078248, "crypto_aead_encrypt" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xb6fde909, "close_fd" },
	{ 0x90f10221, "crypto_aead_setkey" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0xfcf15497, "crypto_skcipher_decrypt" },
	{ 0xd691c6a9, "unregister_sysctl_table" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xe4d41d88, "crypto_destroy_tfm" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x119940c2, "get_user_pages_remote" },
	{ 0xc5f7e801, "sg_last" },
	{ 0x80d432ce, "crypto_skcipher_setkey" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xef6a7533, "crypto_aead_decrypt" },
	{ 0xf6041217, "crypto_aead_setauthsize" },
	{ 0xa8a63a2b, "crypto_alloc_aead" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9cea13e0, "crypto_ahash_setkey" },
	{ 0x78f248a4, "fd_install" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xf5b170ab, "misc_deregister" },
	{ 0x1e807d99, "flush_dcache_page" },
	{ 0xea919fc2, "__put_page" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x95b49d69, "crypto_alloc_ahash" },
	{ 0xf234f2db, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "");

