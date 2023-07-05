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
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x1a813094, "can_rx_register" },
	{ 0xec97dcb6, "iov_iter_revert" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xef34bf3e, "hrtimer_active" },
	{ 0x828e22f4, "hrtimer_forward" },
	{ 0xd8748272, "_proc_mkdir" },
	{ 0x5c5ade1f, "sock_gettstamp" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xb2aee94f, "can_proto_unregister" },
	{ 0x599d2b4b, "_copy_from_iter" },
	{ 0xce1f9079, "proc_create_net_single" },
	{ 0x6d7399bf, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x74410044, "sock_no_getname" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x359ec4ca, "remove_proc_entry" },
	{ 0x4663a4fe, "sock_queue_rcv_skb" },
	{ 0xf11de017, "skb_recv_datagram" },
	{ 0x8e69b714, "sock_i_ino" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x6acd275d, "sock_no_sendpage" },
	{ 0xea154cdc, "sock_no_mmap" },
	{ 0x4c738ad5, "PDE_DATA" },
	{ 0x3f2c4257, "sock_efree" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0xdcb764ad, "memset" },
	{ 0xeec80b36, "sock_no_socketpair" },
	{ 0xb9d226c1, "unregister_pernet_subsys" },
	{ 0x2037a11a, "sock_no_bind" },
	{ 0x7694639, "lock_sock_nested" },
	{ 0x9aa50464, "seq_putc" },
	{ 0xf5a00cac, "sock_no_listen" },
	{ 0xca8176a, "sock_no_accept" },
	{ 0xc47f5a8, "dev_get_by_index_rcu" },
	{ 0x25028c7b, "sk_free" },
	{ 0x1eeaedae, "dev_get_by_index" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x2a216e9f, "sock_no_shutdown" },
	{ 0xbec46893, "can_send" },
	{ 0x89073de5, "__sock_recv_ts_and_drops" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x645f857, "__alloc_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xb04929d, "datagram_poll" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0x92997ed8, "_printk" },
	{ 0xbd12915b, "can_proto_register" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x9c95a16e, "register_pernet_subsys" },
	{ 0xdbf3886d, "sk_error_report" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xba4eb811, "can_rx_unregister" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x1a7137b5, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xeff87298, "_copy_to_iter" },
	{ 0xe914e41e, "strcpy" },
	{ 0xb4871881, "skb_free_datagram" },
};

MODULE_INFO(depends, "can");

