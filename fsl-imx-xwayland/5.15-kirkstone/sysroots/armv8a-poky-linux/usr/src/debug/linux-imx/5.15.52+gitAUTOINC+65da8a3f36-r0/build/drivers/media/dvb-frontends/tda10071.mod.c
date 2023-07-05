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
	{ 0x201129d4, "__devm_regmap_init_i2c" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x44f81556, "_dev_info" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x8c1743db, "request_firmware" },
	{ 0x86bc8961, "regmap_bulk_read" },
	{ 0x4829a47e, "memcpy" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0x984afbc5, "regmap_write" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x51a7435d, "regmap_bulk_write" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:tda10071_cx24118");
