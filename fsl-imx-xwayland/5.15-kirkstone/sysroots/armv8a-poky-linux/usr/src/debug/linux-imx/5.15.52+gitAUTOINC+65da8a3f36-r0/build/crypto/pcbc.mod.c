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
	{ 0xd7e4f9a8, "crypto_cipher_encrypt_one" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8f900685, "skcipher_walk_done" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xf2cedcec, "crypto_cipher_decrypt_one" },
	{ 0x5d9136c2, "skcipher_walk_virt" },
	{ 0x3180af03, "skcipher_register_instance" },
	{ 0xc142b78e, "skcipher_alloc_instance_simple" },
};

MODULE_INFO(depends, "");

