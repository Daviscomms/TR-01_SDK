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
	{ 0xbb719676, "compat_ptr_ioctl" },
	{ 0x5d2a551, "unregister_rpmsg_driver" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x92997ed8, "_printk" },
	{ 0xc2d15cdb, "__register_rpmsg_driver" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xd73a11ef, "rpmsg_release_channel" },
	{ 0xbd77f77e, "rpmsg_chrdev_eptdev_create" },
	{ 0x33c2a760, "rpmsg_create_channel" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xbc73bb15, "device_add" },
	{ 0x874b69cf, "cdev_add" },
	{ 0xcf6d43ae, "dev_set_name" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x35cf2cdc, "cdev_init" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf40283ee, "device_initialize" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x337930c9, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x24529793, "cdev_del" },
	{ 0xffb7c514, "ida_free" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x10a44c23, "put_device" },
	{ 0x9d2703a, "device_del" },
	{ 0x599c5806, "device_for_each_child" },
	{ 0xb19aed4f, "rpmsg_chrdev_eptdev_destroy" },
};

MODULE_INFO(depends, "rpmsg_char");

