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
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xec64b4cf, "read_common_fuse" },
	{ 0x26ab82b2, "devm_nvmem_register" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x24650ce9, "devm_platform_ioremap_resource" },
};

MODULE_INFO(depends, "el_enclave");

MODULE_ALIAS("of:N*T*Cfsl,imx8ulp-ocotp");
MODULE_ALIAS("of:N*T*Cfsl,imx8ulp-ocotpC*");
MODULE_ALIAS("of:N*T*Cfsl,imx93-ocotp");
MODULE_ALIAS("of:N*T*Cfsl,imx93-ocotpC*");
