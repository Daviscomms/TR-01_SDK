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
	{ 0x48f9c54a, "cdev_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x745a981, "xa_erase" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb9277da9, "iommu_sva_get_pasid" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4d5d9768, "iommu_sva_unbind_device" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x80e9f164, "iommu_dev_enable_feature" },
	{ 0x10a44c23, "put_device" },
	{ 0xdc7173e9, "cdev_device_add" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x8e993ebc, "iommu_sva_bind_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x30716d73, "unmap_mapping_range" },
	{ 0xc32331d8, "iommu_dev_disable_feature" },
	{ 0xf40283ee, "device_initialize" },
	{ 0xbbcd58d3, "class_destroy" },
	{ 0x6af1cd78, "cdev_device_del" },
	{ 0xcf6d43ae, "dev_set_name" },
	{ 0xecf5c754, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

MODULE_INFO(depends, "");

