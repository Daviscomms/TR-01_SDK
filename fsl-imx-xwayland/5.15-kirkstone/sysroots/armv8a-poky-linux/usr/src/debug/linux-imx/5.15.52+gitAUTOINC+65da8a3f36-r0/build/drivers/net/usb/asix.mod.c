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
	{ 0x977ede3c, "netdev_info" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x2c07fd61, "mii_ethtool_gset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeada1463, "phy_disconnect" },
	{ 0xaba12d7f, "usbnet_resume" },
	{ 0xd726607, "phy_do_ioctl_running" },
	{ 0x8e6b1a9e, "net_selftest_get_count" },
	{ 0x296c787e, "phy_stop" },
	{ 0xded225a5, "usbnet_probe" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x3db5058d, "__devm_mdiobus_register" },
	{ 0x60b1618f, "usbnet_link_change" },
	{ 0x6d3c0ff4, "__mdiobus_register" },
	{ 0x5ef6c4da, "phy_ethtool_nway_reset" },
	{ 0xfe44bb2a, "usbnet_disconnect" },
	{ 0x28119a37, "generic_mii_ioctl" },
	{ 0xca320b7, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x72c880db, "usbnet_stop" },
	{ 0xd4fd9348, "usbnet_update_max_qlen" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x35d632f1, "mdiobus_unregister" },
	{ 0x95e7c9f3, "net_selftest" },
	{ 0xeb54163d, "devm_mdiobus_alloc_size" },
	{ 0x4ef660c1, "__netdev_alloc_skb" },
	{ 0x9b769c85, "dev_get_tstats64" },
	{ 0xaf4f787f, "phy_print_status" },
	{ 0xe47cc74c, "usbnet_nway_reset" },
	{ 0xdcb764ad, "memset" },
	{ 0x450ea23a, "phy_start" },
	{ 0x65344c0c, "mii_nway_restart" },
	{ 0xf75d67ac, "usb_deregister" },
	{ 0xa5098ea2, "eth_platform_get_mac_address" },
	{ 0xeece192d, "mdiobus_free" },
	{ 0xfbd05a1a, "usbnet_get_endpoints" },
	{ 0x5792f848, "strlcpy" },
	{ 0xffafbb87, "usbnet_get_drvinfo" },
	{ 0x890342b2, "skb_push" },
	{ 0xa3738a77, "usbnet_read_cmd_nopm" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4f52ad2f, "usbnet_start_xmit" },
	{ 0x55e7daad, "usbnet_suspend" },
	{ 0x620bc6d1, "phy_suspend" },
	{ 0x8ea32b33, "usbnet_get_link" },
	{ 0x31016fe9, "usbnet_write_cmd_nopm" },
	{ 0xfa71e0ce, "phy_ethtool_get_link_ksettings" },
	{ 0x9746b3f0, "skb_copy_expand" },
	{ 0x402e666e, "usbnet_read_cmd" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x3ba1486, "usbnet_get_link_ksettings_mii" },
	{ 0x5990c655, "usbnet_tx_timeout" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0xab97e477, "genphy_resume" },
	{ 0xb883381b, "usbnet_skb_return" },
	{ 0x43c40c9d, "usbnet_open" },
	{ 0xad8969f5, "mii_check_media" },
	{ 0x6a7cea0e, "usbnet_get_msglevel" },
	{ 0x14efd444, "netdev_err" },
	{ 0x9118057f, "usbnet_set_link_ksettings_mii" },
	{ 0xc77d8a28, "netdev_warn" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x3213bd8e, "usbnet_unlink_rx_urbs" },
	{ 0x1aff05fc, "eth_validate_addr" },
	{ 0xc431cf47, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x761f697d, "phy_attached_info" },
	{ 0xc090c376, "net_selftest_get_strings" },
	{ 0xa3ce7100, "usbnet_write_cmd_async" },
	{ 0x9d553b3d, "usbnet_change_mtu" },
	{ 0xa384de9b, "phy_connect" },
	{ 0x3082df47, "usb_register_driver" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8358a4db, "mii_link_ok" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x1a7137b5, "skb_put" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x3adbd83e, "eth_mac_addr" },
	{ 0x23fb529f, "usbnet_write_cmd" },
	{ 0x58aa0b7a, "usbnet_set_msglevel" },
	{ 0x5e3694b8, "mdiobus_alloc_size" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p061Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p172Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp20F9d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "73CB67B6F52F067CCA99BD4");
