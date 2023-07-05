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
	{ 0x7129e5f8, "hex_asc" },
	{ 0xea6fe7c3, "caam_blob_gen_exit" },
	{ 0x742578a5, "wait_for_random_bytes" },
	{ 0x98cf60b3, "strlen" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x3803dfab, "caam_process_blob" },
	{ 0xfc157785, "caam_blob_gen_init" },
	{ 0x9c2a59ee, "key_payload_reserve" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa0d2ef8e, "param_ops_charp" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x5a921311, "strncmp" },
	{ 0x6e980508, "user_describe" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x50cf7585, "hex2bin" },
	{ 0xc6c6214d, "register_key_type" },
	{ 0x4829a47e, "memcpy" },
	{ 0x38ac36ab, "unregister_key_type" },
};

MODULE_INFO(depends, "caam_jr");

