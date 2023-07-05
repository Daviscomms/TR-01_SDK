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
	{ 0x18e60984, "__do_once_start" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xa15db7eb, "nf_nat_hook" },
	{ 0x289c3714, "nf_ct_alloc_hashtable" },
	{ 0x59886641, "nf_ct_kill_acct" },
	{ 0x4174a03f, "dst_release" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x2124474, "ip_send_check" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x57cc25f7, "inet_proto_csum_replace4" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdf4214c6, "__skb_checksum" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xb15b4109, "crc32c" },
	{ 0x79e5d01d, "__put_net" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xcf24eb53, "inet_proto_csum_replace16" },
	{ 0xe4262c6, "__siphash_unaligned" },
	{ 0x8f7f9272, "nf_ct_iterate_destroy" },
	{ 0x82428c39, "nf_ip_checksum" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0xdcb764ad, "memset" },
	{ 0x7d97d5de, "skb_checksum" },
	{ 0xb9d226c1, "unregister_pernet_subsys" },
	{ 0xfe731af8, "nf_ct_invert_tuple" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd3e8e6da, "inet_select_addr" },
	{ 0x1045cd56, "nf_unregister_net_hooks" },
	{ 0xa3d14779, "skb_ensure_writable" },
	{ 0x501e4cf0, "nf_hook_entries_delete_raw" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe885819c, "ip_route_me_harder" },
	{ 0xbf9ce1eb, "nf_conntrack_alter_reply" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xfb8e86d0, "ipv6_dev_get_saddr" },
	{ 0x76c16a6d, "module_put" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x99bc33c6, "nf_register_net_hooks" },
	{ 0x5b2edf64, "ipv6_skip_exthdr" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x3e51d924, "nf_ct_iterate_cleanup_net" },
	{ 0xd25bc5d4, "csum_tcpudp_nofold" },
	{ 0x92997ed8, "_printk" },
	{ 0x9fb60bbb, "nf_conntrack_tuple_taken" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x9c95a16e, "register_pernet_subsys" },
	{ 0x33ff7af4, "pskb_expand_head" },
	{ 0xb27f91ed, "ip6_route_me_harder" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x661f3e90, "nf_ct_extend_unregister" },
	{ 0x17da701, "nf_ct_helper_expectfn_register" },
	{ 0x8f8cb4, "nf_ct_extend_register" },
	{ 0xaf92ea1, "nf_ct_helper_expectfn_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x1a7137b5, "skb_put" },
	{ 0xc08aa53a, "nf_ct_seqadj_set" },
	{ 0xd87044e8, "nf_hook_entries_insert_raw" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x3b17dac1, "nf_ip6_checksum" },
	{ 0x58157cca, "try_module_get" },
	{ 0xa80cb2d4, "__do_once_done" },
	{ 0x621ad445, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack,libcrc32c");

