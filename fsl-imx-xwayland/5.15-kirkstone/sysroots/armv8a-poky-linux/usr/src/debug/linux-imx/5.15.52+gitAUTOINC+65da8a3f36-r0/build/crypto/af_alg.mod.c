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
	{ 0x8b7e3187, "release_sock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xaf8e54be, "sock_init_data" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x53b954a2, "up_read" },
	{ 0xec97dcb6, "iov_iter_revert" },
	{ 0x50b81ca1, "sock_no_ioctl" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x599d2b4b, "_copy_from_iter" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x74410044, "sock_no_getname" },
	{ 0x87b8798d, "sg_next" },
	{ 0xbc830eb7, "alloc_pages" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x6acd275d, "sock_no_sendpage" },
	{ 0xea154cdc, "sock_no_mmap" },
	{ 0x9113d294, "sock_no_recvmsg" },
	{ 0xdcb764ad, "memset" },
	{ 0xeec80b36, "sock_no_socketpair" },
	{ 0x8e854797, "sk_alloc" },
	{ 0x7694639, "lock_sock_nested" },
	{ 0x85f8a7fc, "iov_iter_get_pages" },
	{ 0xf5a00cac, "sock_no_listen" },
	{ 0x45e36f35, "sock_wake_async" },
	{ 0x25028c7b, "sk_free" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xac8f4369, "sock_kfree_s" },
	{ 0x2a216e9f, "sock_no_shutdown" },
	{ 0x76c16a6d, "module_put" },
	{ 0xba220db7, "__wake_up_sync_key" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x7e542f70, "proto_register" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x15095868, "__free_pages" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x767dd121, "sock_register" },
	{ 0x7fc4f5c7, "proto_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0xf7e7a508, "sock_kmalloc" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xc46f3e52, "sock_no_connect" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x45c112ae, "sock_no_sendmsg" },
	{ 0x8a13a57c, "sock_kzfree_s" },
	{ 0x18386eef, "iov_iter_advance" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xea919fc2, "__put_page" },
	{ 0x58157cca, "try_module_get" },
};

MODULE_INFO(depends, "");

