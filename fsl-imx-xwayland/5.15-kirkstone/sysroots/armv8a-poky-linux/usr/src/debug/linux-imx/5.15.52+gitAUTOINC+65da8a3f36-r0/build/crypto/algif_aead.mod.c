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
	{ 0xea154cdc, "sock_no_mmap" },
	{ 0x2a216e9f, "sock_no_shutdown" },
	{ 0xf5a00cac, "sock_no_listen" },
	{ 0x50b81ca1, "sock_no_ioctl" },
	{ 0xa398941b, "af_alg_poll" },
	{ 0x74410044, "sock_no_getname" },
	{ 0xca8176a, "sock_no_accept" },
	{ 0xeec80b36, "sock_no_socketpair" },
	{ 0xc46f3e52, "sock_no_connect" },
	{ 0x2037a11a, "sock_no_bind" },
	{ 0xa549e3ee, "af_alg_release" },
	{ 0xa43ed8f4, "af_alg_unregister_type" },
	{ 0x552019df, "af_alg_register_type" },
	{ 0x25028c7b, "sk_free" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xef6a7533, "crypto_aead_decrypt" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xa6d897d1, "af_alg_count_tsgl" },
	{ 0xe42836ff, "af_alg_wait_for_data" },
	{ 0x61f77003, "af_alg_wmem_wakeup" },
	{ 0x818e86f7, "af_alg_free_resources" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd078248, "crypto_aead_encrypt" },
	{ 0x3c679960, "af_alg_async_cb" },
	{ 0xe4a63099, "af_alg_get_rsgl" },
	{ 0x78444efc, "af_alg_alloc_areq" },
	{ 0xb04fb8b8, "crypto_req_done" },
	{ 0xccfdbc90, "af_alg_sendpage" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8b7e3187, "release_sock" },
	{ 0x7694639, "lock_sock_nested" },
	{ 0x29495c39, "crypto_get_default_null_skcipher" },
	{ 0xa8a63a2b, "crypto_alloc_aead" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0xe4d41d88, "crypto_destroy_tfm" },
	{ 0x90f10221, "crypto_aead_setkey" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xdcb764ad, "memset" },
	{ 0xf7e7a508, "sock_kmalloc" },
	{ 0xac66d931, "af_alg_release_parent" },
	{ 0xac8f4369, "sock_kfree_s" },
	{ 0x8a13a57c, "sock_kzfree_s" },
	{ 0xf948658a, "af_alg_pull_tsgl" },
	{ 0xf6041217, "crypto_aead_setauthsize" },
	{ 0x269350a9, "af_alg_sendmsg" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xf234f2db, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "af_alg");

