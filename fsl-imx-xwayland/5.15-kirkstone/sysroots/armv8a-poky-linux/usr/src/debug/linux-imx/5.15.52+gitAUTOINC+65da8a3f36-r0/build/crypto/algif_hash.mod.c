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
	{ 0x74410044, "sock_no_getname" },
	{ 0xeec80b36, "sock_no_socketpair" },
	{ 0xc46f3e52, "sock_no_connect" },
	{ 0x2037a11a, "sock_no_bind" },
	{ 0xa549e3ee, "af_alg_release" },
	{ 0xa43ed8f4, "af_alg_unregister_type" },
	{ 0x552019df, "af_alg_register_type" },
	{ 0xe8c65a8f, "crypto_ahash_digest" },
	{ 0xf49514da, "crypto_ahash_finup" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xeff87298, "_copy_to_iter" },
	{ 0xdcb764ad, "memset" },
	{ 0x583f06b5, "crypto_ahash_final" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xa82baffe, "af_alg_make_sg" },
	{ 0x18386eef, "iov_iter_advance" },
	{ 0xd5003096, "af_alg_free_sg" },
	{ 0xac66d931, "af_alg_release_parent" },
	{ 0xac8f4369, "sock_kfree_s" },
	{ 0x8a13a57c, "sock_kzfree_s" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x25028c7b, "sk_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xa38e28d0, "af_alg_accept" },
	{ 0x8b7e3187, "release_sock" },
	{ 0x7694639, "lock_sock_nested" },
	{ 0x95b49d69, "crypto_alloc_ahash" },
	{ 0xe4d41d88, "crypto_destroy_tfm" },
	{ 0x9cea13e0, "crypto_ahash_setkey" },
	{ 0xb04fb8b8, "crypto_req_done" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xf7e7a508, "sock_kmalloc" },
};

MODULE_INFO(depends, "af_alg");

