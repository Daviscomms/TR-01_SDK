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
	{ 0xf30a3d79, "transport_class_register" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xc3ccaad3, "attribute_container_classdev_to_container" },
	{ 0xb237bacd, "_dev_printk" },
	{ 0x20af2eca, "attribute_container_unregister" },
	{ 0xce326528, "attribute_container_register" },
	{ 0xbc73bb15, "device_add" },
	{ 0xc4df1146, "transport_class_unregister" },
	{ 0x6f5c9ce9, "attribute_container_find_class_device" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x10a44c23, "put_device" },
	{ 0x337930c9, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xf40283ee, "device_initialize" },
	{ 0xba21afa4, "device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcf6d43ae, "dev_set_name" },
	{ 0x1a2e2fce, "scsi_is_sdev_device" },
};

MODULE_INFO(depends, "");

