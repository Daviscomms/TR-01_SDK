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
	{ 0x9dbdab82, "driver_unregister" },
	{ 0xa9d7752b, "__spi_register_driver" },
	{ 0xea124bd1, "gcd" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xb2e9d45, "v4l2_ctrl_auto_cluster" },
	{ 0xc25a7d52, "v4l2_ctrl_new_std" },
	{ 0x61d3a67b, "v4l2_ctrl_handler_init_class" },
	{ 0x3d315ffe, "v4l2_spi_subdev_init" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x568b421, "spi_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0xdd64e639, "strscpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x8aa6a1a9, "v4l2_ctrl_handler_free" },
	{ 0x5836a496, "v4l2_device_unregister_subdev" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:msi001");
