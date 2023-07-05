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
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x8733236, "intlog10" },
	{ 0xb678366f, "int_sqrt" },
	{ 0xdcb764ad, "memset" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xc3c116d9, "i2c_transfer" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x44f81556, "_dev_info" },
	{ 0x3a54d248, "i2c_add_adapter" },
	{ 0xdd64e639, "strscpy" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xe473e1a8, "i2c_del_adapter" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:tc90522sat");
MODULE_ALIAS("i2c:tc90522ter");
