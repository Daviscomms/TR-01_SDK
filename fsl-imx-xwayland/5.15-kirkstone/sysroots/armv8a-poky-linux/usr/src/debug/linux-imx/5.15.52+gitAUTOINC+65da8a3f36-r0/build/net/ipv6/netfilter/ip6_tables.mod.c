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
	{ 0xa24f23d8, "__request_module" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfbfa5cd0, "xt_unregister_table" },
	{ 0xa7c94f1d, "xt_compat_lock" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x243cbd1e, "xt_check_target" },
	{ 0x72f4aeb, "xt_register_matches" },
	{ 0x96e11989, "xt_compat_match_offset" },
	{ 0x9c995c69, "xt_percpu_counter_alloc" },
	{ 0x9428305c, "xt_compat_target_to_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xd87ae60d, "xt_check_entry_offsets" },
	{ 0x767e0d17, "xt_proto_fini" },
	{ 0xfbed1f25, "xt_table_unlock" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xba7fa36b, "xt_compat_target_offset" },
	{ 0xcb3e91cc, "xt_counters_alloc" },
	{ 0x999e8297, "vfree" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3d7c63eb, "xt_find_table_lock" },
	{ 0x2800551f, "ipv6_find_hdr" },
	{ 0xd80d4df3, "xt_replace_table" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x6316df1d, "xt_proto_init" },
	{ 0xd61eea6f, "xt_register_table" },
	{ 0xd9bb821b, "xt_copy_counters" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa369ed1e, "xt_target_to_user" },
	{ 0xd7f5fcd, "xt_alloc_entry_offsets" },
	{ 0xb73be642, "xt_compat_match_to_user" },
	{ 0xdcb764ad, "memset" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0xb9d226c1, "unregister_pernet_subsys" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa25fc115, "xt_compat_check_entry_offsets" },
	{ 0x1045cd56, "nf_unregister_net_hooks" },
	{ 0x638c7455, "ns_capable" },
	{ 0x467bc214, "xt_register_targets" },
	{ 0x8185b268, "xt_compat_target_from_user" },
	{ 0x9166fada, "strncpy" },
	{ 0x4e27719, "xt_compat_flush_offsets" },
	{ 0xc7fae024, "xt_compat_calc_jump" },
	{ 0x807d2b2c, "xt_recseq" },
	{ 0x4c81e8e4, "xt_unregister_targets" },
	{ 0x50873741, "xt_compat_init_offsets" },
	{ 0x76c16a6d, "module_put" },
	{ 0x823edea5, "xt_compat_add_offset" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x99bc33c6, "nf_register_net_hooks" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x531a7d6b, "nf_unregister_sockopt" },
	{ 0x92997ed8, "_printk" },
	{ 0xd3fcc511, "xt_tee_enabled" },
	{ 0x2cf73408, "xt_request_find_match" },
	{ 0x2c9714bb, "xt_request_find_table_lock" },
	{ 0x9c95a16e, "register_pernet_subsys" },
	{ 0x8a8f2542, "xt_find_table" },
	{ 0xfdab9d65, "xt_unregister_matches" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x1a250027, "xt_request_find_target" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x9772a1e0, "xt_compat_match_from_user" },
	{ 0x70c52dc5, "nf_skb_duplicated" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf972c59c, "xt_check_match" },
	{ 0xfef779fa, "xt_find_jump_offset" },
	{ 0x3bf9d084, "xt_check_table_hooks" },
	{ 0xbfacb837, "xt_percpu_counter_free" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xd2e6e7e9, "nf_register_sockopt" },
	{ 0x977fd4bf, "xt_alloc_table_info" },
	{ 0x7ea93e26, "xt_match_to_user" },
	{ 0xb2f181d6, "skb_copy_bits" },
	{ 0xe204e042, "xt_free_table_info" },
	{ 0xd1e246a2, "xt_compat_unlock" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "x_tables");

