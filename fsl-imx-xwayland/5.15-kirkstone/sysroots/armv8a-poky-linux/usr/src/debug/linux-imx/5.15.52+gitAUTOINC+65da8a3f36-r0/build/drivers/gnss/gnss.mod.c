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
	{ 0x35cf2cdc, "cdev_init" },
	{ 0x53b954a2, "up_read" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x6a342704, "stream_open" },
	{ 0x785fa78d, "no_llseek" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x668b19a1, "down_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdcb764ad, "memset" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xffb7c514, "ida_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xce807a25, "up_write" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x10a44c23, "put_device" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xdc7173e9, "cdev_device_add" },
	{ 0x92997ed8, "_printk" },
	{ 0x6fbb1e42, "dev_driver_string" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x337930c9, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xf40283ee, "device_initialize" },
	{ 0xbbcd58d3, "class_destroy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6af1cd78, "cdev_device_del" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xcf6d43ae, "dev_set_name" },
	{ 0xecf5c754, "__class_create" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "");

