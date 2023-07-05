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
	{ 0xeff75e55, "rpmsg_trysendto" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x35cf2cdc, "cdev_init" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xec97dcb6, "iov_iter_revert" },
	{ 0x599d2b4b, "_copy_from_iter" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6046e663, "rpmsg_poll" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2cb0c220, "skb_queue_purge" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x91556bf5, "rpmsg_create_ept" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xffb7c514, "ida_free" },
	{ 0x5d2a551, "unregister_rpmsg_driver" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4243153b, "rpmsg_destroy_ept" },
	{ 0xc2d15cdb, "__register_rpmsg_driver" },
	{ 0xb152964, "rpmsg_sendto" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xbb719676, "compat_ptr_ioctl" },
	{ 0x28d0c853, "skb_queue_tail" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x645f857, "__alloc_skb" },
	{ 0x10a44c23, "put_device" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0xdc7173e9, "cdev_device_add" },
	{ 0x1104370d, "rpmsg_create_default_ept" },
	{ 0x92997ed8, "_printk" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x337930c9, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x599c5806, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf40283ee, "device_initialize" },
	{ 0xbbcd58d3, "class_destroy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xafa5f04b, "skb_dequeue" },
	{ 0x6af1cd78, "cdev_device_del" },
	{ 0xcf6d43ae, "dev_set_name" },
	{ 0x1a7137b5, "skb_put" },
	{ 0xecf5c754, "__class_create" },
	{ 0xeff87298, "_copy_to_iter" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");

