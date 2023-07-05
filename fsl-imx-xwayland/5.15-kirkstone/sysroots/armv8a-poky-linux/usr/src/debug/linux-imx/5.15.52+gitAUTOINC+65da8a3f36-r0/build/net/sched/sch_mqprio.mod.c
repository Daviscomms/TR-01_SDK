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
	{ 0xc0bcdbb7, "register_qdisc" },
	{ 0xaf80d873, "skb_trim" },
	{ 0x23c2bd1, "nla_put" },
	{ 0x56470118, "__warn_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x57e8f32a, "gnet_stats_copy_queue" },
	{ 0x21756404, "gnet_stats_copy_basic" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x683a9560, "__gnet_stats_copy_basic" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x3da3979, "netdev_set_tc_queue" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x4829a47e, "memcpy" },
	{ 0x318ed455, "qdisc_create_dflt" },
	{ 0xdc952baf, "default_qdisc_ops" },
	{ 0xe94d0694, "pfifo_fast_ops" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x177199c9, "dev_activate" },
	{ 0x9100b9da, "dev_deactivate" },
	{ 0x879f4ac2, "netdev_txq_to_tc" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x6d9ef0c8, "netdev_set_num_tc" },
	{ 0xdcb764ad, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0xed6f3374, "qdisc_put" },
	{ 0x700cea04, "dev_graft_qdisc" },
	{ 0x52f8d7b6, "qdisc_hash_add" },
	{ 0x7bc9fdf5, "qdisc_hash_del" },
	{ 0xdc89316e, "noop_qdisc" },
};

MODULE_INFO(depends, "");

