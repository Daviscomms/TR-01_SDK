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
	{ 0xbfc40dba, "crypto_unregister_skciphers" },
	{ 0x6b792dfa, "crypto_register_skciphers" },
	{ 0xaaa4b9bc, "hchacha_block_generic" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f900685, "skcipher_walk_done" },
	{ 0xcec122d7, "chacha_crypt_generic" },
	{ 0x5d9136c2, "skcipher_walk_virt" },
};

MODULE_INFO(depends, "libchacha");

