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
	{ 0xc264d4ce, "param_ops_bool" },
	{ 0xc1a996e4, "ip_tunnel_get_link_net" },
	{ 0xbe87e9fd, "ip_tunnel_get_iflink" },
	{ 0x9b769c85, "dev_get_tstats64" },
	{ 0xbebc44df, "rtnl_link_register" },
	{ 0x5e1b99a0, "xfrm4_tunnel_register" },
	{ 0xa734c313, "register_pernet_device" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x827344bc, "unregister_pernet_device" },
	{ 0x8836eeef, "xfrm4_tunnel_deregister" },
	{ 0x680f833, "rtnl_link_unregister" },
	{ 0xb2f181d6, "skb_copy_bits" },
	{ 0x35c067b1, "ipv6_chk_custom_prefix" },
	{ 0x92997ed8, "_printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8509f084, "ipv6_chk_prefix" },
	{ 0x4d7183ea, "netif_rx" },
	{ 0xae5f342b, "icmpv6_ndo_send" },
	{ 0xd232e8b0, "dst_cache_set_ip4" },
	{ 0x9d8ced5d, "neigh_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x702d8fd2, "iptunnel_xmit" },
	{ 0xe7801cac, "iptun_encaps" },
	{ 0x621b1b0, "skb_set_owner_w" },
	{ 0x779c6fc2, "skb_realloc_headroom" },
	{ 0xd660f671, "dst_cache_get_ip4" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xf9040c92, "ip_tunnel_xmit" },
	{ 0x6871454f, "iptunnel_handle_offloads" },
	{ 0x2ca474e7, "__pskb_pull_tail" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xa523d66e, "ip_tunnel_siocdevprivate" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xefcff3e8, "ip_tunnel_encap_setup" },
	{ 0x5792f848, "strlcpy" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x7e87d822, "netdev_state_change" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xa6bf73ea, "register_netdevice" },
	{ 0xfb5fa0f8, "__dev_get_by_index" },
	{ 0x4174a03f, "dst_release" },
	{ 0x1fa998f3, "ip_route_output_flow" },
	{ 0x1d9e57ac, "make_kuid" },
	{ 0x638c7455, "ns_capable" },
	{ 0xea657c6a, "ip_tunnel_rcv" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0x649ecf0d, "__iptunnel_pull_header" },
	{ 0xfdd9e64b, "free_netdev" },
	{ 0xe914e41e, "strcpy" },
	{ 0xbf8e4c5f, "register_netdev" },
	{ 0x3a9b68b8, "alloc_netdev_mqs" },
	{ 0x482e3152, "init_net" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x82dd01bb, "ipv4_redirect" },
	{ 0x10053d02, "ipv4_update_pmtu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x701be03d, "ip6_err_gen_icmpv6_unreach" },
	{ 0x56470118, "__warn_printk" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xdcb764ad, "memset" },
	{ 0xeb9bd801, "unregister_netdevice_queue" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x23c2bd1, "nla_put" },
	{ 0x65a883ce, "ip_tunnel_header_ops" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4");

