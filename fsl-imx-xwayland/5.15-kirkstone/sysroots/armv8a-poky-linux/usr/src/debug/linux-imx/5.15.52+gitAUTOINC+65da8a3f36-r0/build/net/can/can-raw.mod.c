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
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x1a813094, "can_rx_register" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0xec97dcb6, "iov_iter_revert" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x5c5ade1f, "sock_gettstamp" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb2aee94f, "can_proto_unregister" },
	{ 0x599d2b4b, "_copy_from_iter" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xa777c81e, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x4663a4fe, "sock_queue_rcv_skb" },
	{ 0xf11de017, "skb_recv_datagram" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x6acd275d, "sock_no_sendpage" },
	{ 0xea154cdc, "sock_no_mmap" },
	{ 0xdcb764ad, "memset" },
	{ 0xeec80b36, "sock_no_socketpair" },
	{ 0x7694639, "lock_sock_nested" },
	{ 0x69b06473, "sock_recv_errqueue" },
	{ 0xd2c99738, "__kmalloc_track_caller" },
	{ 0xf5a00cac, "sock_no_listen" },
	{ 0xca8176a, "sock_no_accept" },
	{ 0x25028c7b, "sk_free" },
	{ 0x437a0d6d, "__sock_tx_timestamp" },
	{ 0x1eeaedae, "dev_get_by_index" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x2a216e9f, "sock_no_shutdown" },
	{ 0xbec46893, "can_send" },
	{ 0x89073de5, "__sock_recv_ts_and_drops" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xb04929d, "datagram_poll" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0x92997ed8, "_printk" },
	{ 0xbd12915b, "can_proto_register" },
	{ 0xbf5a51ed, "sock_alloc_send_skb" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xdbf3886d, "sk_error_report" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc46f3e52, "sock_no_connect" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xba4eb811, "can_rx_unregister" },
	{ 0x1a7137b5, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xeff87298, "_copy_to_iter" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xb4871881, "skb_free_datagram" },
};

MODULE_INFO(depends, "can");

