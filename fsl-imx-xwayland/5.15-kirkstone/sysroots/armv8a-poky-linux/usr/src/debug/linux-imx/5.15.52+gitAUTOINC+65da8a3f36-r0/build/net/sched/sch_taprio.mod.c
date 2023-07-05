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
	{ 0x71a4a4ca, "__skb_gso_segment" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x177199c9, "dev_activate" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x2aed7fc, "qdisc_reset" },
	{ 0xef34bf3e, "hrtimer_active" },
	{ 0x3ccc9ca9, "__qdisc_calculate_pkt_len" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x6d9ef0c8, "netdev_set_num_tc" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc0bcdbb7, "register_qdisc" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa4228587, "qdisc_tree_reduce_backlog" },
	{ 0x6d6fec1f, "ktime_mono_to_any" },
	{ 0x1bbf03a, "netdev_reset_tc" },
	{ 0x21756404, "gnet_stats_copy_basic" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xaf80d873, "skb_trim" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x5c07a468, "pfifo_qdisc_ops" },
	{ 0x3da3979, "netdev_set_tc_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x52f8d7b6, "qdisc_hash_add" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0xdcb764ad, "memset" },
	{ 0xed6f3374, "qdisc_put" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8d3bc954, "__ethtool_get_link_ksettings" },
	{ 0x23c2bd1, "nla_put" },
	{ 0x700cea04, "dev_graft_qdisc" },
	{ 0x318ed455, "qdisc_create_dflt" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf23af51d, "unregister_qdisc" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x7a36cc6a, "netif_skb_features" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9100b9da, "dev_deactivate" },
	{ 0x37a0cba, "kfree" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0xb0152938, "nla_put_64bit" },
	{ 0xf031d206, "__netif_schedule" },
	{ 0x57e8f32a, "gnet_stats_copy_queue" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb2f181d6, "skb_copy_bits" },
};

MODULE_INFO(depends, "");

