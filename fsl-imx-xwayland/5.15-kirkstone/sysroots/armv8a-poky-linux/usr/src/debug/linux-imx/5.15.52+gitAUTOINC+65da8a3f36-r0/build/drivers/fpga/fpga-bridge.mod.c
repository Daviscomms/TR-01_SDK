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
	{ 0x4e72c112, "class_find_device" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xc00a71d8, "of_platform_populate" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xffb7c514, "ida_free" },
	{ 0xb4c46f9a, "__devres_alloc_node" },
	{ 0xbc73bb15, "device_add" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x76c16a6d, "module_put" },
	{ 0x44f81556, "_dev_info" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x10a44c23, "put_device" },
	{ 0x2fa9503d, "devres_add" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xf40283ee, "device_initialize" },
	{ 0xbbcd58d3, "class_destroy" },
	{ 0xba21afa4, "device_unregister" },
	{ 0x61f1aa36, "device_match_of_node" },
	{ 0xcf6d43ae, "dev_set_name" },
	{ 0xecf5c754, "__class_create" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x58157cca, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");

