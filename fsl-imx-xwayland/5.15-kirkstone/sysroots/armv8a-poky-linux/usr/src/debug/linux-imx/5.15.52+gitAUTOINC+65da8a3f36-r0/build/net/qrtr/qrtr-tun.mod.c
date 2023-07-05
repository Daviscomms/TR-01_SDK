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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xec97dcb6, "iov_iter_revert" },
	{ 0x599d2b4b, "_copy_from_iter" },
	{ 0x6ae15c30, "qrtr_endpoint_register" },
	{ 0x43d311c2, "qrtr_endpoint_post" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x45cfee4c, "misc_register" },
	{ 0x2cb0c220, "skb_queue_purge" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x28d0c853, "skb_queue_tail" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0x92997ed8, "_printk" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd4c17082, "qrtr_endpoint_unregister" },
	{ 0xafa5f04b, "skb_dequeue" },
	{ 0xf5b170ab, "misc_deregister" },
	{ 0xeff87298, "_copy_to_iter" },
};

MODULE_INFO(depends, "qrtr");

