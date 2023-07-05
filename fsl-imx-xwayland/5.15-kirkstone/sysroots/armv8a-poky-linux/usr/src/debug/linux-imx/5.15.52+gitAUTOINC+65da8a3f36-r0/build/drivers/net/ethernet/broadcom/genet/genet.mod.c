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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x567cd796, "of_phy_is_fixed_link" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x2f9c5759, "ethtool_op_get_ts_info" },
	{ 0xeada1463, "phy_disconnect" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x1bc51aa1, "of_phy_deregister_fixed_link" },
	{ 0xd726607, "phy_do_ioctl_running" },
	{ 0x296c787e, "phy_stop" },
	{ 0xd503cd76, "napi_disable" },
	{ 0xb5402db5, "napi_schedule_prep" },
	{ 0x331713c, "__napi_schedule_irqoff" },
	{ 0x112e4e55, "of_parse_phandle" },
	{ 0x3986a223, "phy_resume" },
	{ 0x4d2cc308, "phy_ethtool_ksettings_set" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x799f4159, "dma_set_mask" },
	{ 0xcbeb163e, "phy_init_hw" },
	{ 0x7cb87f53, "phy_ethtool_ksettings_get" },
	{ 0x8ac3334b, "net_dim_get_def_rx_moderation" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xdc3651f8, "of_alias_get_id" },
	{ 0x5ef6c4da, "phy_ethtool_nway_reset" },
	{ 0x2e4d65db, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xf6735ab0, "platform_get_irq_optional" },
	{ 0x4f3a4b72, "device_get_phy_mode" },
	{ 0xf5754987, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x351da8ee, "__genphy_config_aneg" },
	{ 0xca320b7, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x99d472b1, "net_dim_get_rx_moderation" },
	{ 0x779c6fc2, "skb_realloc_headroom" },
	{ 0xb73c7cbf, "devm_clk_get_optional" },
	{ 0x4b86495d, "dma_set_coherent_mask" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xaf80d873, "skb_trim" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x1e78af38, "phy_ethtool_get_eee" },
	{ 0x4ef660c1, "__netdev_alloc_skb" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaf4f787f, "phy_print_status" },
	{ 0xf6ee8731, "of_phy_register_fixed_link" },
	{ 0xf8253113, "netif_schedule_queue" },
	{ 0x19a5a8c, "phy_mac_interrupt" },
	{ 0x87ae3dce, "device_get_match_data" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x450ea23a, "phy_start" },
	{ 0xa4ac6f35, "phy_find_first" },
	{ 0x2815f617, "netif_tx_wake_queue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xba7b4aac, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x8440e0b5, "platform_device_alloc" },
	{ 0xfdd9e64b, "free_netdev" },
	{ 0xbf8e4c5f, "register_netdev" },
	{ 0xc62444f9, "platform_device_add" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xd821c71b, "napi_enable" },
	{ 0x5792f848, "strlcpy" },
	{ 0x890342b2, "skb_push" },
	{ 0xf2634af, "netif_set_real_num_rx_queues" },
	{ 0x2da9c344, "platform_get_resource" },
	{ 0xf3cf0571, "platform_device_unregister" },
	{ 0x9eb41c31, "netif_set_real_num_tx_queues" },
	{ 0xdf453004, "netif_napi_add" },
	{ 0xc1dcd1f4, "fixed_phy_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x90425e1c, "mdio_find_bus" },
	{ 0x1112f19c, "fixed_phy_set_link_update" },
	{ 0x9d127634, "skb_pull" },
	{ 0x620bc6d1, "phy_suspend" },
	{ 0xf11d97f7, "softnet_data" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe7646c3f, "platform_device_add_resources" },
	{ 0xec97b3fe, "phy_init_eee" },
	{ 0xd745e710, "netif_device_attach" },
	{ 0xb85e62b4, "napi_gro_receive" },
	{ 0x44f81556, "_dev_info" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x6f3c2663, "netif_device_detach" },
	{ 0x7f52071a, "net_dim" },
	{ 0xc4b2b8ad, "phy_connect_direct" },
	{ 0x10a44c23, "put_device" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0xd750925e, "pm_wakeup_dev_event" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xc40a0b8, "napi_complete_done" },
	{ 0x6969450e, "dma_map_page_attrs" },
	{ 0xa97fd475, "eth_type_trans" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x6fbb1e42, "dev_driver_string" },
	{ 0x16cffb1a, "platform_device_add_data" },
	{ 0x1d01d210, "of_phy_connect" },
	{ 0x14efd444, "netdev_err" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb003b503, "__netif_napi_del" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc77d8a28, "netdev_warn" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x5bf64fd7, "of_node_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4edbb9bc, "phy_ethtool_set_eee" },
	{ 0x6500352a, "dma_unmap_page_attrs" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x49d4d739, "unregister_netdev" },
	{ 0xbea3e38, "phy_attach" },
	{ 0x8886e595, "device_get_mac_address" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1b20290e, "of_get_compatible_child" },
	{ 0x72072124, "platform_get_irq" },
	{ 0x69e7eb0c, "of_phy_find_device" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x49c23793, "skb_tstamp_tx" },
	{ 0x1a7137b5, "skb_put" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x16e8c4bf, "device_set_wakeup_capable" },
	{ 0xc7cf727b, "is_acpi_device_node" },
	{ 0x24650ce9, "devm_platform_ioremap_resource" },
	{ 0xf0ba9bb8, "device_set_wakeup_enable" },
	{ 0x3aa98a05, "phy_set_max_speed" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x38b64d91, "platform_device_put" },
	{ 0x93892abc, "alloc_etherdev_mqs" },
	{ 0xb54b7420, "netdev_crit" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:BCM6E4E:*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v1");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v1C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v2");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v2C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v3");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v3C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v4");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v4C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v5");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v5C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-genet-v5");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-genet-v5C*");
