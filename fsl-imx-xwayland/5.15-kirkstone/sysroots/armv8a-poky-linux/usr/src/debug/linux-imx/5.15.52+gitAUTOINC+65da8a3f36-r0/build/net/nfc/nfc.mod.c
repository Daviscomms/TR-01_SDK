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
	{ 0x2d3385d3, "system_wq" },
	{ 0x1f55823a, "skb_queue_head" },
	{ 0x8b7e3187, "release_sock" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaf8e54be, "sock_init_data" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x76f80d58, "genl_register_family" },
	{ 0xec97dcb6, "iov_iter_revert" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x98cf60b3, "strlen" },
	{ 0x4c42a59c, "genl_unregister_family" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x50b81ca1, "sock_no_ioctl" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x599d2b4b, "_copy_from_iter" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xa777c81e, "skb_clone" },
	{ 0xb0bf788e, "skb_copy" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x74410044, "sock_no_getname" },
	{ 0x4663a4fe, "sock_queue_rcv_skb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf11de017, "skb_recv_datagram" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdbbd15a4, "skb_unlink" },
	{ 0xaf80d873, "skb_trim" },
	{ 0xea154cdc, "sock_no_mmap" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2cb0c220, "skb_queue_purge" },
	{ 0xdcb764ad, "memset" },
	{ 0xeec80b36, "sock_no_socketpair" },
	{ 0x24ec81fd, "__sock_recv_wifi_status" },
	{ 0x9d2703a, "device_del" },
	{ 0x8e854797, "sk_alloc" },
	{ 0x910a9106, "class_dev_iter_init" },
	{ 0xbb6e02cc, "skb_copy_datagram_iter" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x2037a11a, "sock_no_bind" },
	{ 0x7694639, "lock_sock_nested" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x638c7455, "ns_capable" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x7766ba6f, "class_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0x23c2bd1, "nla_put" },
	{ 0x5a921311, "strncmp" },
	{ 0xf5a00cac, "sock_no_listen" },
	{ 0x890342b2, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0xca8176a, "sock_no_accept" },
	{ 0x25028c7b, "sk_free" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xed73cb7e, "netlink_unicast" },
	{ 0xbc73bb15, "device_add" },
	{ 0x9d127634, "skb_pull" },
	{ 0x482e3152, "init_net" },
	{ 0x2a7d4960, "__class_register" },
	{ 0x15a059f9, "devm_kfree" },
	{ 0x2a216e9f, "sock_no_shutdown" },
	{ 0x7eec85c, "__sock_recv_timestamp" },
	{ 0x76c16a6d, "module_put" },
	{ 0x28d0c853, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x7e542f70, "proto_register" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x645f857, "__alloc_skb" },
	{ 0x619a8b3, "netlink_broadcast" },
	{ 0x10a44c23, "put_device" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xb04929d, "datagram_poll" },
	{ 0x767dd121, "sock_register" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0x7fc4f5c7, "proto_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0xa95bca89, "class_dev_iter_exit" },
	{ 0xbf5a51ed, "sock_alloc_send_skb" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xdbf3886d, "sk_error_report" },
	{ 0xd1d45842, "__pskb_copy_fclone" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc46f3e52, "sock_no_connect" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4c027f05, "genlmsg_put" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x45c112ae, "sock_no_sendmsg" },
	{ 0xf40283ee, "device_initialize" },
	{ 0xde293f9e, "add_wait_queue_exclusive" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xafa5f04b, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xcf6d43ae, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1a7137b5, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x58157cca, "try_module_get" },
	{ 0x8f84febb, "class_dev_iter_next" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xb4871881, "skb_free_datagram" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8527443BE3DF872A20EA59B");
