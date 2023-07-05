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
	{ 0x2f9c5759, "ethtool_op_get_ts_info" },
	{ 0xba7b4aac, "ethtool_op_get_link" },
	{ 0x3adbd83e, "eth_mac_addr" },
	{ 0x16682035, "passthru_features_check" },
	{ 0x680f833, "rtnl_link_unregister" },
	{ 0xbebc44df, "rtnl_link_register" },
	{ 0xb9681621, "xdp_do_flush" },
	{ 0xc40a0b8, "napi_complete_done" },
	{ 0xc9528419, "bpf_redirect_info" },
	{ 0xdcb764ad, "memset" },
	{ 0x33ff7af4, "pskb_expand_head" },
	{ 0xa1bb21e4, "netif_receive_skb" },
	{ 0xa97fd475, "eth_type_trans" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0xf2c166a6, "skb_headers_offset_update" },
	{ 0x6711ebbc, "skb_copy_header" },
	{ 0x1a7137b5, "skb_put" },
	{ 0xe8e99654, "build_skb" },
	{ 0xb2f181d6, "skb_copy_bits" },
	{ 0xbc830eb7, "alloc_pages" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xfdd9e64b, "free_netdev" },
	{ 0x79e5d01d, "__put_net" },
	{ 0xad5a4386, "rtnl_configure_link" },
	{ 0xa6bf73ea, "register_netdevice" },
	{ 0x2f959988, "rtnl_create_link" },
	{ 0xb40da544, "rtnl_link_get_net" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0x84c03e9a, "rtnl_nla_parse_ifla" },
	{ 0x5c2bcd37, "bpf_warn_invalid_xdp_action" },
	{ 0x4c599ebc, "xdp_do_redirect" },
	{ 0xd653b126, "sched_clock" },
	{ 0xb9a12755, "xdp_master_redirect" },
	{ 0x146cc88f, "bpf_master_redirect_enabled_key" },
	{ 0x6f8f674a, "bpf_dispatcher_xdp_func" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0xca320b7, "__dev_kfree_skb_any" },
	{ 0x49c23793, "skb_tstamp_tx" },
	{ 0x4d7183ea, "netif_rx" },
	{ 0x2ca474e7, "__pskb_pull_tail" },
	{ 0x745ba0b, "sock_wfree" },
	{ 0xe39457c7, "__dev_forward_skb" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xbb7195a5, "xdp_warn" },
	{ 0x710cf80c, "xdp_convert_zc_to_xdp_frame" },
	{ 0x2de04136, "__napi_schedule" },
	{ 0xb5402db5, "napi_schedule_prep" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x3ed4abce, "netdev_update_features" },
	{ 0x3141fab5, "xdp_rxq_info_is_reg" },
	{ 0x2e4d65db, "netif_carrier_on" },
	{ 0x92997ed8, "_printk" },
	{ 0xf5754987, "netif_carrier_off" },
	{ 0xa021403e, "netdev_features_change" },
	{ 0xd821c71b, "napi_enable" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd503cd76, "napi_disable" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x37e1c104, "__xdp_build_skb_from_frame" },
	{ 0xb85e62b4, "napi_gro_receive" },
	{ 0xd91dbd1f, "xdp_alloc_skb_bulk" },
	{ 0xf2634af, "netif_set_real_num_rx_queues" },
	{ 0x9eb41c31, "netif_set_real_num_tx_queues" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x365ec70c, "dev_lstats_read" },
	{ 0x5792f848, "strlcpy" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xb003b503, "__netif_napi_del" },
	{ 0x58a3955f, "xdp_rxq_info_unreg" },
	{ 0xdf453004, "netif_napi_add" },
	{ 0x99d2c6fe, "xdp_rxq_info_reg_mem_model" },
	{ 0xfb635cf6, "xdp_rxq_info_reg" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0x469112a, "xdp_return_frame" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x37a0cba, "kfree" },
	{ 0xd9683214, "ether_setup" },
	{ 0xeb9bd801, "unregister_netdevice_queue" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
};

MODULE_INFO(depends, "");

