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
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0xa84ce9e0, "crypto_aes_inv_sbox" },
	{ 0x8946ea72, "fpsimd_context_busy" },
	{ 0x6215a1fd, "crypto_alloc_shash" },
	{ 0xbfc40dba, "crypto_unregister_skciphers" },
	{ 0xefe73979, "simd_skcipher_free" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0x88638552, "simd_skcipher_create_compat" },
	{ 0x8f900685, "skcipher_walk_done" },
	{ 0x6b792dfa, "crypto_register_skciphers" },
	{ 0xfeb12fcd, "crypto_register_shashes" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x2391f725, "irq_stat" },
	{ 0x5d9136c2, "skcipher_walk_virt" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x5c1c3eb4, "cpu_hwcaps" },
	{ 0xe4d41d88, "crypto_destroy_tfm" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0xd9d952d1, "crypto_aes_sbox" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0xc25d6ffa, "crypto_shash_tfm_digest" },
	{ 0x2d4b91db, "crypto_unregister_shashes" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "");

