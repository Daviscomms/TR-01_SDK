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
	{ 0xa6bf73ea, "register_netdevice" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x1301e08c, "dev_forward_skb" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x66d6bc15, "dev_mc_unsync" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x734c8f0d, "dev_uc_add" },
	{ 0xe39457c7, "__dev_forward_skb" },
	{ 0x7b4e08ca, "dev_mc_add_excl" },
	{ 0xfb34cc40, "netdev_rx_handler_register" },
	{ 0xd80272c9, "dev_uc_add_excl" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xa777c81e, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x65efee10, "dev_set_allmulti" },
	{ 0x6f929dda, "vlan_vid_del" },
	{ 0xa84fbb09, "call_netdevice_notifiers" },
	{ 0xc03f886d, "linkwatch_fire_event" },
	{ 0xc6a0d9f6, "vlan_vid_add" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xdd64e639, "strscpy" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x4d7183ea, "netif_rx" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xdcb764ad, "memset" },
	{ 0xc6f310fe, "netif_rx_ni" },
	{ 0x975f23d0, "dev_set_mac_address" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0xef2d6d89, "ip_check_defrag" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x8d3bc954, "__ethtool_get_link_ksettings" },
	{ 0xba7b4aac, "ethtool_op_get_link" },
	{ 0x373a7d1d, "dev_mc_del" },
	{ 0x23c2bd1, "nla_put" },
	{ 0xebfeba16, "netdev_upper_dev_unlink" },
	{ 0x9b8c223a, "ndo_dflt_fdb_dump" },
	{ 0x5792f848, "strlcpy" },
	{ 0xeb9eb0ec, "netif_stacked_transfer_operstate" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x482e3152, "init_net" },
	{ 0x680f833, "rtnl_link_unregister" },
	{ 0xfb5fa0f8, "__dev_get_by_index" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0xf8f68da6, "eth_header_cache_update" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x65cdabbb, "netdev_rx_handler_unregister" },
	{ 0xc6ebe36, "eth_header_parse" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0x16682035, "passthru_features_check" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x17cd8937, "netdev_upper_dev_link" },
	{ 0xd9683214, "ether_setup" },
	{ 0x5d358788, "dev_uc_unsync" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xeb9bd801, "unregister_netdevice_queue" },
	{ 0x1aff05fc, "eth_validate_addr" },
	{ 0xff22076b, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x995c7f40, "dev_change_proto_down_generic" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc4b38a8b, "eth_header_cache" },
	{ 0xbebc44df, "rtnl_link_register" },
	{ 0xba21283d, "dev_uc_del" },
	{ 0xf2c6cd4e, "dev_uc_sync" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3ed4abce, "netdev_update_features" },
	{ 0x9b13c4de, "dev_queue_xmit_accel" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xeeac432, "netdev_is_rx_handler_busy" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe19e1851, "dev_mc_sync" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x5710282c, "dev_set_mtu" },
};

MODULE_INFO(depends, "");

