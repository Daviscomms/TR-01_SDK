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
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x38d3dce5, "g_make_token_header" },
	{ 0xef18c8d5, "write_bytes_to_xdr_buf" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf54bd49b, "lcm" },
	{ 0x6cc923cc, "gss_mech_register" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x583f06b5, "crypto_ahash_final" },
	{ 0xc9cd7a22, "crypto_alloc_sync_skcipher" },
	{ 0xd7673035, "g_verify_token_header" },
	{ 0x6cbe7ae0, "xdr_buf_subsegment" },
	{ 0xdcb764ad, "memset" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0xfcf15497, "crypto_skcipher_decrypt" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xe4d41d88, "crypto_destroy_tfm" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x25ba5d7c, "gss_mech_unregister" },
	{ 0x80d432ce, "crypto_skcipher_setkey" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9cea13e0, "crypto_ahash_setkey" },
	{ 0xaeb63e0e, "read_bytes_from_xdr_buf" },
	{ 0x51600a82, "xdr_process_buf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x482ac5a4, "g_token_size" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x742de00f, "xdr_buf_trim" },
	{ 0x95b49d69, "crypto_alloc_ahash" },
	{ 0xf234f2db, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "");

