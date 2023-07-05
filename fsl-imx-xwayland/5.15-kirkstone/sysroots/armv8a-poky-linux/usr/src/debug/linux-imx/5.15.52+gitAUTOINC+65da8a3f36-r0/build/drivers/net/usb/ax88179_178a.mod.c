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
	{ 0xfe44bb2a, "usbnet_disconnect" },
	{ 0xded225a5, "usbnet_probe" },
	{ 0x2f9c5759, "ethtool_op_get_ts_info" },
	{ 0xba7b4aac, "ethtool_op_get_link" },
	{ 0xe47cc74c, "usbnet_nway_reset" },
	{ 0x58aa0b7a, "usbnet_set_msglevel" },
	{ 0x6a7cea0e, "usbnet_get_msglevel" },
	{ 0x9b769c85, "dev_get_tstats64" },
	{ 0x5990c655, "usbnet_tx_timeout" },
	{ 0x1aff05fc, "eth_validate_addr" },
	{ 0x4f52ad2f, "usbnet_start_xmit" },
	{ 0x72c880db, "usbnet_stop" },
	{ 0x43c40c9d, "usbnet_open" },
	{ 0xf75d67ac, "usb_deregister" },
	{ 0x3082df47, "usb_register_driver" },
	{ 0x2e4d65db, "netif_carrier_on" },
	{ 0x2c07fd61, "mii_ethtool_gset" },
	{ 0xdcb764ad, "memset" },
	{ 0x65344c0c, "mii_nway_restart" },
	{ 0xfbd05a1a, "usbnet_get_endpoints" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd4fd9348, "usbnet_update_max_qlen" },
	{ 0x14efd444, "netdev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xa5098ea2, "eth_platform_get_mac_address" },
	{ 0x55e7daad, "usbnet_suspend" },
	{ 0xaba12d7f, "usbnet_resume" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xa3ce7100, "usbnet_write_cmd_async" },
	{ 0x977ede3c, "netdev_info" },
	{ 0x60b1618f, "usbnet_link_change" },
	{ 0x28119a37, "generic_mii_ioctl" },
	{ 0x9851b735, "mii_ethtool_get_link_ksettings" },
	{ 0x58b37aae, "mii_ethtool_set_link_ksettings" },
	{ 0x23fb529f, "usbnet_write_cmd" },
	{ 0x31016fe9, "usbnet_write_cmd_nopm" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xc77d8a28, "netdev_warn" },
	{ 0x402e666e, "usbnet_read_cmd" },
	{ 0xa3738a77, "usbnet_read_cmd_nopm" },
	{ 0xb883381b, "usbnet_skb_return" },
	{ 0x9d127634, "skb_pull" },
	{ 0xa777c81e, "skb_clone" },
	{ 0xaf80d873, "skb_trim" },
	{ 0xca320b7, "__dev_kfree_skb_any" },
	{ 0x890342b2, "skb_push" },
	{ 0x33ff7af4, "pskb_expand_head" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p3610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0128d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0A13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p0179d*dc*dsc*dp*ic*isc*ip*in*");
