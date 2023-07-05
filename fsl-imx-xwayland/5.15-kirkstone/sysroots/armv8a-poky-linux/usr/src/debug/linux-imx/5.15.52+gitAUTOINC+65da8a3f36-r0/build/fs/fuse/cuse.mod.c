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
	{ 0x53f5f7c1, "fuse_file_poll" },
	{ 0x8e1a37f7, "noop_llseek" },
	{ 0xf5b170ab, "misc_deregister" },
	{ 0xbbcd58d3, "class_destroy" },
	{ 0x45cfee4c, "misc_register" },
	{ 0xecf5c754, "__class_create" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf445ca26, "fuse_dev_operations" },
	{ 0x70193e71, "fuse_dev_free" },
	{ 0x6b256213, "fuse_simple_background" },
	{ 0xbc830eb7, "alloc_pages" },
	{ 0xd327070e, "fuse_dev_alloc_install" },
	{ 0x27696709, "fuse_conn_init" },
	{ 0x590a5d7f, "fuse_dev_fiq_ops" },
	{ 0x92997ed8, "_printk" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x83d65e99, "kobject_uevent" },
	{ 0x874b69cf, "cdev_add" },
	{ 0x48f9c54a, "cdev_alloc" },
	{ 0xbc73bb15, "device_add" },
	{ 0x10a44c23, "put_device" },
	{ 0xcf6d43ae, "dev_set_name" },
	{ 0xf40283ee, "device_initialize" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x77bc13a0, "strim" },
	{ 0x85df9b6c, "strsep" },
	{ 0x98cf60b3, "strlen" },
	{ 0x15095868, "__free_pages" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x6aa2c358, "fuse_direct_io" },
	{ 0xdcb764ad, "memset" },
	{ 0xd861a38a, "fuse_do_ioctl" },
	{ 0x81f87fa9, "fuse_do_open" },
	{ 0xde128b06, "fuse_conn_get" },
	{ 0xd8d91672, "fuse_conn_put" },
	{ 0xc05c1f2a, "fuse_sync_release" },
	{ 0x37a0cba, "kfree" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x4387e072, "fuse_dev_release" },
	{ 0x24529793, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xba21afa4, "device_unregister" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x10b23e94, "fuse_abort_conn" },
};

MODULE_INFO(depends, "fuse");

