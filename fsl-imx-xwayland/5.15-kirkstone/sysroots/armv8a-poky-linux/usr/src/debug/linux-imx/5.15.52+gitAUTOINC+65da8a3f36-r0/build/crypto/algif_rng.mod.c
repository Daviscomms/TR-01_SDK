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
	{ 0x6acd275d, "sock_no_sendpage" },
	{ 0xea154cdc, "sock_no_mmap" },
	{ 0x45c112ae, "sock_no_sendmsg" },
	{ 0x2a216e9f, "sock_no_shutdown" },
	{ 0xf5a00cac, "sock_no_listen" },
	{ 0x50b81ca1, "sock_no_ioctl" },
	{ 0x74410044, "sock_no_getname" },
	{ 0xca8176a, "sock_no_accept" },
	{ 0xeec80b36, "sock_no_socketpair" },
	{ 0xc46f3e52, "sock_no_connect" },
	{ 0x2037a11a, "sock_no_bind" },
	{ 0xa549e3ee, "af_alg_release" },
	{ 0xa43ed8f4, "af_alg_unregister_type" },
	{ 0x552019df, "af_alg_register_type" },
	{ 0x37a0cba, "kfree" },
	{ 0x5f7b586e, "crypto_alloc_rng" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xeff87298, "_copy_to_iter" },
	{ 0xdcb764ad, "memset" },
	{ 0xe4d41d88, "crypto_destroy_tfm" },
	{ 0xd27c044b, "crypto_rng_reset" },
	{ 0xac66d931, "af_alg_release_parent" },
	{ 0xac8f4369, "sock_kfree_s" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xf7e7a508, "sock_kmalloc" },
};

MODULE_INFO(depends, "af_alg");

