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
	{ 0x31ca7031, "unregister_tcf_proto_ops" },
	{ 0x58d5f34a, "register_tcf_proto_ops" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x8dae33f0, "tcf_exts_validate" },
	{ 0x431ec3a9, "__nla_validate" },
	{ 0xc48af80d, "__dev_get_by_name" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xc80b99a2, "tcf_exts_dump_stats" },
	{ 0xa4ec5495, "tcf_exts_dump" },
	{ 0x98cf60b3, "strlen" },
	{ 0xfb5fa0f8, "__dev_get_by_index" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0xaf80d873, "skb_trim" },
	{ 0x82d55deb, "tcf_exts_terse_dump" },
	{ 0xde774571, "__module_get" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xcc1b882a, "idr_get_next_ul" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6fb01003, "tc_setup_cb_reoffload" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x79e5d01d, "__put_net" },
	{ 0xab4feadd, "tcf_exts_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x20978fb9, "idr_find" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x73726af1, "tcf_action_exec" },
	{ 0x1729c69, "skb_flow_dissect_meta" },
	{ 0x39ac92aa, "__skb_flow_dissect" },
	{ 0xd7e4043c, "skb_flow_dissect_hash" },
	{ 0xc5e72ed1, "skb_flow_dissect_ct" },
	{ 0xd1835f2e, "skb_flow_dissect_tunnel_info" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe577b8cc, "tc_cleanup_offload_action" },
	{ 0x68670409, "tc_setup_cb_add" },
	{ 0x57d75a76, "tc_setup_offload_action" },
	{ 0xf87bac61, "flow_rule_alloc" },
	{ 0xeac2fc8d, "tcf_exts_num_actions" },
	{ 0x91b5a97f, "tc_setup_cb_destroy" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4b5acf74, "rhashtable_init" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x167d1949, "tc_setup_cb_call" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x76c16a6d, "module_put" },
	{ 0x2a5ea9ef, "rhashtable_destroy" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0xabeb9438, "skb_flow_dissector_init" },
	{ 0xdcb764ad, "memset" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x23c2bd1, "nla_put" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
};

MODULE_INFO(depends, "");

