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
	{ 0x977ede3c, "netdev_info" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xc08a36bb, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2f9c5759, "ethtool_op_get_ts_info" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x862258db, "timecounter_init" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0xff7675e7, "pci_enable_sriov" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x36460f18, "pci_write_config_word" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0xbcde32ad, "param_ops_int" },
	{ 0xd503cd76, "napi_disable" },
	{ 0x98cf60b3, "strlen" },
	{ 0x838e5ca, "pci_read_config_byte" },
	{ 0xb5402db5, "napi_schedule_prep" },
	{ 0x331713c, "__napi_schedule_irqoff" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x2c0def82, "pci_vpd_alloc" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x799f4159, "dma_set_mask" },
	{ 0x4820ce12, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x24699d7d, "pci_disable_msix" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x6d9ef0c8, "netdev_set_num_tc" },
	{ 0x2e4d65db, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6e68ae65, "tcp_gro_complete" },
	{ 0xe868eab7, "pci_disable_sriov" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xf5754987, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xdaceb7a6, "mdio_mii_ioctl" },
	{ 0xbc830eb7, "alloc_pages" },
	{ 0xab2db8ec, "pcie_print_link_status" },
	{ 0xca320b7, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x39419fe7, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xaa830fbb, "dma_free_attrs" },
	{ 0x1bbf03a, "netdev_reset_tc" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x274dc2b, "netif_get_num_default_rss_queues" },
	{ 0xb15b4109, "crc32c" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x4b86495d, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4ef660c1, "__netdev_alloc_skb" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0x2ca474e7, "__pskb_pull_tail" },
	{ 0xe8718852, "ptp_clock_unregister" },
	{ 0x3da3979, "netdev_set_tc_queue" },
	{ 0x9b3f919e, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xf8253113, "netif_schedule_queue" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0x57e6389f, "dma_sync_single_for_cpu" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x2815f617, "netif_tx_wake_queue" },
	{ 0xc86d2086, "pci_restore_state" },
	{ 0xd44c5dc6, "dev_addr_del" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0xbbe80fdb, "kmalloc_order" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0xfdd9e64b, "free_netdev" },
	{ 0xbf8e4c5f, "register_netdev" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0xd821c71b, "napi_enable" },
	{ 0xf5f8c069, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc56eb497, "dma_alloc_attrs" },
	{ 0x99f9638f, "__napi_alloc_frag_align" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe2583cc9, "pci_get_domain_bus_and_slot" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe26bf994, "dev_close" },
	{ 0xbf116326, "netdev_printk" },
	{ 0x7d26eabf, "pci_wait_for_pending_transaction" },
	{ 0x6626afca, "down" },
	{ 0xf2634af, "netif_set_real_num_rx_queues" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9eb41c31, "netif_set_real_num_tx_queues" },
	{ 0xdf453004, "netif_napi_add" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x16aa17fa, "ptp_clock_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x149b42e7, "pci_enable_msi" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0xe8e99654, "build_skb" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x7b6926ae, "netdev_pick_tx" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xc6cbbc89, "capable" },
	{ 0xbc3f2cb0, "timecounter_cyc2time" },
	{ 0xd745e710, "netif_device_attach" },
	{ 0xb85e62b4, "napi_gro_receive" },
	{ 0x44f81556, "_dev_info" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0xd942983c, "dev_addr_add" },
	{ 0x6f3c2663, "netif_device_detach" },
	{ 0x718b862, "pci_enable_msix_range" },
	{ 0xdc43bdc6, "pci_vpd_find_ro_info_keyword" },
	{ 0x2de04136, "__napi_schedule" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x6497e978, "pci_intx" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xd25bc5d4, "csum_tcpudp_nofold" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x92997ed8, "_printk" },
	{ 0xc40a0b8, "napi_complete_done" },
	{ 0x6969450e, "dma_map_page_attrs" },
	{ 0x12bd1e78, "pci_read_config_dword" },
	{ 0xa97fd475, "eth_type_trans" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x6fbb1e42, "dev_driver_string" },
	{ 0x14efd444, "netdev_err" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0xc6b35586, "pci_unregister_driver" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x86f87f2, "pci_ioremap_bar" },
	{ 0xb003b503, "__netif_napi_del" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xe5aa448a, "pci_set_power_state" },
	{ 0x62da0c70, "udp_tunnel_nic_ops" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x87c6a96f, "pci_request_regions" },
	{ 0xb2ea2da2, "ptp_clock_index" },
	{ 0xca8d4be2, "pci_disable_msi" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x83c2b083, "pci_num_vf" },
	{ 0xedc03953, "iounmap" },
	{ 0xcf2a6966, "up" },
	{ 0x8103ee83, "__pci_register_driver" },
	{ 0x15af7f4, "system_state" },
	{ 0x96848186, "scnprintf" },
	{ 0x8c1743db, "request_firmware" },
	{ 0x6500352a, "dma_unmap_page_attrs" },
	{ 0x49d4d739, "unregister_netdev" },
	{ 0x52d9ca0e, "skb_gso_validate_mac_len" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa44bf04a, "pci_vfs_assigned" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x72b5ee95, "__napi_alloc_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x49c23793, "skb_tstamp_tx" },
	{ 0x1a7137b5, "skb_put" },
	{ 0x80c2a3d2, "pci_enable_device" },
	{ 0xcde496ce, "pci_wake_from_d3" },
	{ 0xb2f181d6, "skb_copy_bits" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x92e683f5, "down_timeout" },
	{ 0x4c61f39e, "pci_find_ext_capability" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xea919fc2, "__put_page" },
	{ 0x504b851d, "pcie_capability_read_word" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x21784185, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0x93892abc, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "mdio,libcrc32c");

MODULE_ALIAS("pci:v000014E4d0000164Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001650sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001662sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001663sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000166Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000168Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000168Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016AEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000168Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d000016A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016AFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d000016A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016ADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d000016ADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000163Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000163Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000163Fsv*sd*bc*sc*i*");
