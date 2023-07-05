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
	{ 0x977ede3c, "netdev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeada1463, "phy_disconnect" },
	{ 0x815588a6, "clk_enable" },
	{ 0xa072a74, "of_mdiobus_register" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd726607, "phy_do_ioctl_running" },
	{ 0x296c787e, "phy_stop" },
	{ 0xd503cd76, "napi_disable" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xb5402db5, "napi_schedule_prep" },
	{ 0x112e4e55, "of_parse_phandle" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x799f4159, "dma_set_mask" },
	{ 0x6d3c0ff4, "__mdiobus_register" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xfc4d914a, "mdiobus_get_phy" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xca320b7, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xaa830fbb, "dma_free_attrs" },
	{ 0xdd64e639, "strscpy" },
	{ 0x35d632f1, "mdiobus_unregister" },
	{ 0x4b86495d, "dma_set_coherent_mask" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xeb54163d, "devm_mdiobus_alloc_size" },
	{ 0x4ef660c1, "__netdev_alloc_skb" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0xaf4f787f, "phy_print_status" },
	{ 0x6f2bde91, "acpi_match_device" },
	{ 0xf8253113, "netif_schedule_queue" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x450ea23a, "phy_start" },
	{ 0xa4ac6f35, "phy_find_first" },
	{ 0x2815f617, "netif_tx_wake_queue" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x726ec239, "device_find_child" },
	{ 0xba7b4aac, "ethtool_op_get_link" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0xfdd9e64b, "free_netdev" },
	{ 0xbf8e4c5f, "register_netdev" },
	{ 0xd821c71b, "napi_enable" },
	{ 0xc56eb497, "dma_alloc_attrs" },
	{ 0x4373266, "phy_attached_print" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xd63ee14b, "__dev_kfree_skb_irq" },
	{ 0x2da9c344, "platform_get_resource" },
	{ 0xdf453004, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x19b6a6, "of_match_device" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xfa71e0ce, "phy_ethtool_get_link_ksettings" },
	{ 0xb85e62b4, "napi_gro_receive" },
	{ 0x62b91460, "device_property_read_u32_array" },
	{ 0x2de04136, "__napi_schedule" },
	{ 0xc4b2b8ad, "phy_connect_direct" },
	{ 0x10a44c23, "put_device" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0xd25bc5d4, "csum_tcpudp_nofold" },
	{ 0x92997ed8, "_printk" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xc40a0b8, "napi_complete_done" },
	{ 0x6969450e, "dma_map_page_attrs" },
	{ 0xa97fd475, "eth_type_trans" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x6fbb1e42, "dev_driver_string" },
	{ 0x33ff7af4, "pskb_expand_head" },
	{ 0x14efd444, "netdev_err" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x337930c9, "get_device" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xb003b503, "__netif_napi_del" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc77d8a28, "netdev_warn" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x1aff05fc, "eth_validate_addr" },
	{ 0xc431cf47, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x83ba3b46, "___pskb_trim" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xedc03953, "iounmap" },
	{ 0x6500352a, "dma_unmap_page_attrs" },
	{ 0x49d4d739, "unregister_netdev" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0x8886e595, "device_get_mac_address" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x72072124, "platform_get_irq" },
	{ 0x65755402, "of_find_device_by_node" },
	{ 0x69e7eb0c, "of_phy_find_device" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x1a7137b5, "skb_put" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0x3adbd83e, "eth_mac_addr" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc7cf727b, "is_acpi_device_node" },
	{ 0x24650ce9, "devm_platform_ioremap_resource" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x93892abc, "alloc_etherdev_mqs" },
	{ 0x9bd03de4, "genphy_restart_aneg" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cqcom,fsm9900-emac");
MODULE_ALIAS("of:N*T*Cqcom,fsm9900-emacC*");
MODULE_ALIAS("acpi*:QCOM8070:*");
