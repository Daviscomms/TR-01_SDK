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
	{ 0x8056edc1, "inet_frag_kill" },
	{ 0x95491fc5, "pskb_trim_rcsum_slow" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0xa8f6c843, "ip_frag_ecn_table" },
	{ 0x4174a03f, "dst_release" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x397fce74, "fqdir_exit" },
	{ 0x4377e1d3, "inet_frag_find" },
	{ 0x62bb71a0, "inet_frag_reasm_prepare" },
	{ 0x2ca474e7, "__pskb_pull_tail" },
	{ 0xb9d226c1, "unregister_pernet_subsys" },
	{ 0x1045cd56, "nf_unregister_net_hooks" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0xec2e1c8f, "proc_doulongvec_minmax" },
	{ 0x1a75c565, "inet_frags_fini" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc47f5a8, "dev_get_by_index_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x482e3152, "init_net" },
	{ 0x43b96514, "fqdir_init" },
	{ 0x99bc33c6, "nf_register_net_hooks" },
	{ 0xd768302d, "inet_frag_reasm_finish" },
	{ 0x5b2edf64, "ipv6_skip_exthdr" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0x8f9bd8e7, "inet_frag_destroy" },
	{ 0x92997ed8, "_printk" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x9c95a16e, "register_pernet_subsys" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xf567a6b5, "inet_frag_pull_head" },
	{ 0xd1bdde4d, "inet_frags_init" },
	{ 0xd035b7be, "inet_frag_queue_insert" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x280d819c, "register_net_sysctl" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb2f181d6, "skb_copy_bits" },
	{ 0x8a13a408, "icmp6_send" },
};

MODULE_INFO(depends, "");

