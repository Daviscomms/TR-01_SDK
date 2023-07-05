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
	{ 0xf9a482f9, "msleep" },
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0x9cf4c41b, "regmap_exit" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0x86bc8961, "regmap_bulk_read" },
	{ 0x51a7435d, "regmap_bulk_write" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0xdd64e639, "strscpy" },
	{ 0xca87efa2, "gpiochip_remove" },
	{ 0x679fc59, "gpiochip_add_data_with_key" },
	{ 0x5f2b1d95, "intlog2" },
	{ 0xdcb764ad, "memset" },
	{ 0x5851c0a0, "i2c_new_client_device" },
	{ 0x74a995a6, "__regmap_init_i2c" },
	{ 0xd42ffac4, "i2c_unregister_device" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x638c2907, "gpiochip_get_data" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0x44f81556, "_dev_info" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x29f1e139, "i2c_new_dummy_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8733236, "intlog10" },
	{ 0x984afbc5, "regmap_write" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:cxd2820r");
