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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8b7e3187, "release_sock" },
	{ 0x328c4d32, "kmem_cache_destroy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xe1a8d7c9, "net_rwsem" },
	{ 0x53b954a2, "up_read" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x77c02c5, "nf_queue_nf_hook_drop" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x98cf60b3, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf44a904a, "net_ns_barrier" },
	{ 0xa15db7eb, "nf_nat_hook" },
	{ 0x9030298b, "ip_ct_attach" },
	{ 0xc4e46e21, "seq_puts" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xca4615f0, "nf_defrag_ipv6_enable" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6d7399bf, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x359ec4ca, "remove_proc_entry" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x57cc25f7, "inet_proto_csum_replace4" },
	{ 0xc264d4ce, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x1b8d26d2, "proc_set_user" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdf4214c6, "__skb_checksum" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xe17678a, "siphash_4u64" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xb15b4109, "crc32c" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe4262c6, "__siphash_unaligned" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x82428c39, "nf_ip_checksum" },
	{ 0xadf0de32, "make_kgid" },
	{ 0x4ab8c02d, "nf_log_packet" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xdcb764ad, "memset" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0xb9d226c1, "unregister_pernet_subsys" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x7694639, "lock_sock_nested" },
	{ 0x1045cd56, "nf_unregister_net_hooks" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xa3d14779, "skb_ensure_writable" },
	{ 0xc8c36a13, "nf_checksum_partial" },
	{ 0x9aa50464, "seq_putc" },
	{ 0xf820c399, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x24d273d1, "add_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x482e3152, "init_net" },
	{ 0xbac0683a, "nf_checksum" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x76c16a6d, "module_put" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x99bc33c6, "nf_register_net_hooks" },
	{ 0x5b2edf64, "ipv6_skip_exthdr" },
	{ 0x2fab98a8, "nf_defrag_ipv6_disable" },
	{ 0x1d9e57ac, "make_kuid" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0x61730358, "param_get_uint" },
	{ 0x531a7d6b, "nf_unregister_sockopt" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x9c95a16e, "register_pernet_subsys" },
	{ 0xa9ebd835, "proc_create_net_data" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xddba38b6, "nf_ct_hook" },
	{ 0x141626e0, "kmem_cache_create" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb570c696, "nf_defrag_ipv4_enable" },
	{ 0xf3d7ea55, "param_set_uint" },
	{ 0xd2e6e7e9, "nf_register_sockopt" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x280d819c, "register_net_sysctl" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0xb61632ee, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb2f181d6, "skb_copy_bits" },
	{ 0xfc03a4ca, "proc_dou8vec_minmax" },
	{ 0x3b17dac1, "nf_ip6_checksum" },
	{ 0x194957ac, "nf_defrag_ipv4_disable" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x58157cca, "try_module_get" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xa80cb2d4, "__do_once_done" },
};

MODULE_INFO(depends, "nf_defrag_ipv6,libcrc32c,nf_defrag_ipv4");

