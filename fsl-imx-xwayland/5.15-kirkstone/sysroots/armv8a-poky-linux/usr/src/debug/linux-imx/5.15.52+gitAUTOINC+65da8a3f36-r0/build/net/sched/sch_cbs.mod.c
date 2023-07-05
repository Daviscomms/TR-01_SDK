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
	{ 0xf23af51d, "unregister_qdisc" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc0bcdbb7, "register_qdisc" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xdc89316e, "noop_qdisc" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xa4228587, "qdisc_tree_reduce_backlog" },
	{ 0x2aed7fc, "qdisc_reset" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x7782aa38, "qdisc_watchdog_init" },
	{ 0x52f8d7b6, "qdisc_hash_add" },
	{ 0x318ed455, "qdisc_create_dflt" },
	{ 0x5c07a468, "pfifo_qdisc_ops" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xaf80d873, "skb_trim" },
	{ 0x23c2bd1, "nla_put" },
	{ 0x97344ecf, "rtnl_kfree_skbs" },
	{ 0x56470118, "__warn_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xed6f3374, "qdisc_put" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x7ddf3c46, "qdisc_watchdog_cancel" },
	{ 0xa4e9d2fd, "qdisc_watchdog_schedule_range_ns" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x92997ed8, "_printk" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8d3bc954, "__ethtool_get_link_ksettings" },
};

MODULE_INFO(depends, "");

