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
	{ 0x1124aefb, "tcf_block_get" },
	{ 0x52f8d7b6, "qdisc_hash_add" },
	{ 0x318ed455, "qdisc_create_dflt" },
	{ 0x5c07a468, "pfifo_qdisc_ops" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xa4228587, "qdisc_tree_reduce_backlog" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xdc89316e, "noop_qdisc" },
	{ 0x56470118, "__warn_printk" },
	{ 0x57e8f32a, "gnet_stats_copy_queue" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x21756404, "gnet_stats_copy_basic" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x3ccc9ca9, "__qdisc_calculate_pkt_len" },
	{ 0x8507ffeb, "tcf_classify" },
	{ 0x37a0cba, "kfree" },
	{ 0xed6f3374, "qdisc_put" },
	{ 0x68dcbd86, "tcf_block_put" },
	{ 0x2aed7fc, "qdisc_reset" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xaf80d873, "skb_trim" },
	{ 0x23c2bd1, "nla_put" },
};

MODULE_INFO(depends, "");

