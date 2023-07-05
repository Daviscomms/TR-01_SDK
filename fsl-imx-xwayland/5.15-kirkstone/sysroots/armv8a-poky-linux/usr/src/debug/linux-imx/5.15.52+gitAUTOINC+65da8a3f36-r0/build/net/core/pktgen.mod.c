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
	{ 0xbcde32ad, "param_ops_int" },
	{ 0xdbb0b953, "single_release" },
	{ 0xd4423e61, "seq_lseek" },
	{ 0x926155f3, "seq_read" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xb9d226c1, "unregister_pernet_subsys" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x9c95a16e, "register_pernet_subsys" },
	{ 0xd82cdc9c, "dev_get_by_name" },
	{ 0x9e0c711d, "vzalloc_node" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x652032cb, "mac_pton" },
	{ 0xe914e41e, "strcpy" },
	{ 0x31671877, "node_states" },
	{ 0x41482d8b, "strndup_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x58157cca, "try_module_get" },
	{ 0xc6cbbc89, "capable" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1b6314fd, "in_aton" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xe012a831, "freezing_slow_path" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xa6257a2f, "complete" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd25bc5d4, "csum_tcpudp_nofold" },
	{ 0x7d97d5de, "skb_checksum" },
	{ 0x17f43246, "dev_queue_xmit" },
	{ 0xa1bb21e4, "netif_receive_skb" },
	{ 0xa97fd475, "eth_type_trans" },
	{ 0xaf2988ac, "udp4_hwcsum" },
	{ 0x2124474, "ip_send_check" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0x890342b2, "skb_push" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x1000e51, "schedule" },
	{ 0xcbd5a7d9, "hrtimer_sleeper_start_expires" },
	{ 0xf1a681e3, "hrtimer_init_sleeper" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xf11d97f7, "softnet_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x1fda99f4, "__alloc_pages" },
	{ 0x1a7137b5, "skb_put" },
	{ 0x4ef660c1, "__netdev_alloc_skb" },
	{ 0x645f857, "__alloc_skb" },
	{ 0xea919fc2, "__put_page" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x999e8297, "vfree" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xa3c0905c, "wake_up_process" },
	{ 0x81e49a9b, "kthread_bind" },
	{ 0xa6867bd5, "kthread_create_on_node" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdd6bf170, "kmem_cache_alloc_node" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x618911fc, "numa_node" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x1ab659d2, "proc_create" },
	{ 0x977308f6, "proc_mkdir" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x359ec4ca, "remove_proc_entry" },
	{ 0x15afb5e3, "__put_task_struct" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x7e1a236, "kthread_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0xb346dbbe, "proc_create_data" },
	{ 0x2b214e85, "proc_remove" },
	{ 0x92997ed8, "_printk" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x76c16a6d, "module_put" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6d7399bf, "seq_printf" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x5a921311, "strncmp" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc4e46e21, "seq_puts" },
	{ 0xf6cb582e, "single_open" },
	{ 0x4c738ad5, "PDE_DATA" },
	{ 0xdcb764ad, "memset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x56470118, "__warn_printk" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2C6AAAFE89CD97B3FC41936");
