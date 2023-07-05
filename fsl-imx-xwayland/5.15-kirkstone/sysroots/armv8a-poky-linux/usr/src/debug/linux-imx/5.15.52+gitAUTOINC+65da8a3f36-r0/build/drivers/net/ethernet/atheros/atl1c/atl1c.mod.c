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
	{ 0x2d3385d3, "system_wq" },
	{ 0x977ede3c, "netdev_info" },
	{ 0xc08a36bb, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd503cd76, "napi_disable" },
	{ 0xb5402db5, "napi_schedule_prep" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x799f4159, "dma_set_mask" },
	{ 0xb6c84270, "pcie_set_readrq" },
	{ 0x4820ce12, "pci_disable_device" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x2e4d65db, "netif_carrier_on" },
	{ 0xf5754987, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xbc830eb7, "alloc_pages" },
	{ 0xca320b7, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x39419fe7, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe3b5a5b2, "pci_enable_wake" },
	{ 0x9fffcf83, "pcie_get_readrq" },
	{ 0xaa830fbb, "dma_free_attrs" },
	{ 0x4b86495d, "dma_set_coherent_mask" },
	{ 0x4ef660c1, "__netdev_alloc_skb" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0x9b3f919e, "pci_set_master" },
	{ 0xf8253113, "netif_schedule_queue" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x2815f617, "netif_tx_wake_queue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xba7b4aac, "ethtool_op_get_link" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0xfdd9e64b, "free_netdev" },
	{ 0xbf8e4c5f, "register_netdev" },
	{ 0xd821c71b, "napi_enable" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc56eb497, "dma_alloc_attrs" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xdf453004, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf11d97f7, "softnet_data" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x149b42e7, "pci_enable_msi" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xe8e99654, "build_skb" },
	{ 0xd1588deb, "dev_set_threaded" },
	{ 0xd745e710, "netif_device_attach" },
	{ 0xb85e62b4, "napi_gro_receive" },
	{ 0x44f81556, "_dev_info" },
	{ 0x6f3c2663, "netif_device_detach" },
	{ 0x2de04136, "__napi_schedule" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0xd25bc5d4, "csum_tcpudp_nofold" },
	{ 0xc40a0b8, "napi_complete_done" },
	{ 0x6969450e, "dma_map_page_attrs" },
	{ 0x12bd1e78, "pci_read_config_dword" },
	{ 0xa97fd475, "eth_type_trans" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x6fbb1e42, "dev_driver_string" },
	{ 0x33ff7af4, "pskb_expand_head" },
	{ 0xc6b35586, "pci_unregister_driver" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x86f87f2, "pci_ioremap_bar" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe5aa448a, "pci_set_power_state" },
	{ 0xc77d8a28, "netdev_warn" },
	{ 0x1aff05fc, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x83ba3b46, "___pskb_trim" },
	{ 0x87c6a96f, "pci_request_regions" },
	{ 0xca8d4be2, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x8103ee83, "__pci_register_driver" },
	{ 0x6500352a, "dma_unmap_page_attrs" },
	{ 0x49d4d739, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3ed4abce, "netdev_update_features" },
	{ 0xbdc6c7e7, "pci_enable_device_mem" },
	{ 0x72b5ee95, "__napi_alloc_skb" },
	{ 0x1a7137b5, "skb_put" },
	{ 0x80c2a3d2, "pci_enable_device" },
	{ 0xcde496ce, "pci_wake_from_d3" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4c61f39e, "pci_find_ext_capability" },
	{ 0xa1983dd4, "pcie_capability_write_word" },
	{ 0xea919fc2, "__put_page" },
	{ 0xf0ba9bb8, "device_set_wakeup_enable" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x93892abc, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001969d00001063sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d00001062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d00002060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d00002062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d00001073sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d00001083sv*sd*bc*sc*i*");
