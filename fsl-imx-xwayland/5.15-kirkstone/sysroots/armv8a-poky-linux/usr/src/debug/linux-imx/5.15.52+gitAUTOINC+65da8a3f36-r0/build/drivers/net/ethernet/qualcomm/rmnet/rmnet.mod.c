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
	{ 0xa6bf73ea, "register_netdevice" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xfb34cc40, "netdev_rx_handler_register" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xaf80d873, "skb_trim" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xe73423be, "netdev_master_upper_dev_link" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0x2ca474e7, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf8253113, "netif_schedule_queue" },
	{ 0xdcb764ad, "memset" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x2815f617, "netif_tx_wake_queue" },
	{ 0x23c2bd1, "nla_put" },
	{ 0xebfeba16, "netdev_upper_dev_unlink" },
	{ 0x890342b2, "skb_push" },
	{ 0x951b633a, "gro_cells_receive" },
	{ 0x9d127634, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x680f833, "rtnl_link_unregister" },
	{ 0xfb5fa0f8, "__dev_get_by_index" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x645f857, "__alloc_skb" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x65cdabbb, "netdev_rx_handler_unregister" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0xd25bc5d4, "csum_tcpudp_nofold" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x17cd8937, "netdev_upper_dev_link" },
	{ 0x33ff7af4, "pskb_expand_head" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xeb9bd801, "unregister_netdevice_queue" },
	{ 0x7eae6d9b, "gro_cells_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbebc44df, "rtnl_link_register" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x17f43246, "dev_queue_xmit" },
	{ 0x1a7137b5, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "");

