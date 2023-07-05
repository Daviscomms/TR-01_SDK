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
	{ 0x1af03745, "crypto_unregister_template" },
	{ 0x1f57ba83, "crypto_register_template" },
	{ 0xb5224af8, "crypto_cipher_setkey" },
	{ 0xdcb764ad, "memset" },
	{ 0xd7e4f9a8, "crypto_cipher_encrypt_one" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x995d56e2, "shash_register_instance" },
	{ 0x69c0068b, "crypto_inst_setname" },
	{ 0x310d1f2c, "shash_free_singlespawn_instance" },
	{ 0x9746edd6, "crypto_grab_spawn" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x76d11e03, "crypto_spawn_tfm" },
	{ 0xe4d41d88, "crypto_destroy_tfm" },
	{ 0x4829a47e, "memcpy" },
};

MODULE_INFO(depends, "");

