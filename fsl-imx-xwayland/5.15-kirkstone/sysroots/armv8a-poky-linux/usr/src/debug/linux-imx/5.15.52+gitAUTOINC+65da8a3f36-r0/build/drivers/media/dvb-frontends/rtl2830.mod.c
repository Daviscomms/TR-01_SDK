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
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x44f81556, "_dev_info" },
	{ 0x1d94a3f3, "i2c_mux_add_adapter" },
	{ 0x251ced53, "i2c_mux_alloc" },
	{ 0xeb9439ca, "__regmap_init" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x719bbe57, "__i2c_transfer" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x8733236, "intlog10" },
	{ 0x86bc8961, "regmap_bulk_read" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x51a7435d, "regmap_bulk_write" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0x37a0cba, "kfree" },
	{ 0x9cf4c41b, "regmap_exit" },
	{ 0xb9f7d5ca, "i2c_mux_del_adapters" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:rtl2830");
