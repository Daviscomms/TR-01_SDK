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
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xf384481, "_dev_notice" },
	{ 0x8c1743db, "request_firmware" },
	{ 0x44f81556, "_dev_info" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x1d94a3f3, "i2c_mux_add_adapter" },
	{ 0x251ced53, "i2c_mux_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x11a02234, "i2c_transfer_buffer_flags" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xb9f7d5ca, "i2c_mux_del_adapters" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:si2168");
