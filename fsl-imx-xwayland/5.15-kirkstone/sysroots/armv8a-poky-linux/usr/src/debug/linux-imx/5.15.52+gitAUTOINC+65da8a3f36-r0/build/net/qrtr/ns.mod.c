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
	{ 0x145d61be, "kernel_sendmsg" },
	{ 0x86b83d82, "sock_release" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xea1557d8, "sock_create_kern" },
	{ 0xdcb764ad, "memset" },
	{ 0x4967e79f, "radix_tree_iter_resume" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf4643361, "kernel_getsockname" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2c541e7b, "radix_tree_next_chunk" },
	{ 0x482e3152, "init_net" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x59e7efe8, "kernel_recvmsg" },
	{ 0x37a0cba, "kfree" },
	{ 0xab19194f, "kernel_bind" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0x49cd25ed, "alloc_workqueue" },
};

MODULE_INFO(depends, "");

