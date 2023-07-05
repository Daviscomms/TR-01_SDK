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
	{ 0xfe44bb2a, "usbnet_disconnect" },
	{ 0xded225a5, "usbnet_probe" },
	{ 0x9118057f, "usbnet_set_link_ksettings_mii" },
	{ 0x3ba1486, "usbnet_get_link_ksettings_mii" },
	{ 0x8ea32b33, "usbnet_get_link" },
	{ 0xe47cc74c, "usbnet_nway_reset" },
	{ 0x58aa0b7a, "usbnet_set_msglevel" },
	{ 0x6a7cea0e, "usbnet_get_msglevel" },
	{ 0xffafbb87, "usbnet_get_drvinfo" },
	{ 0x9b769c85, "dev_get_tstats64" },
	{ 0x5990c655, "usbnet_tx_timeout" },
	{ 0x1aff05fc, "eth_validate_addr" },
	{ 0x3adbd83e, "eth_mac_addr" },
	{ 0x4f52ad2f, "usbnet_start_xmit" },
	{ 0x72c880db, "usbnet_stop" },
	{ 0x43c40c9d, "usbnet_open" },
	{ 0xf75d67ac, "usb_deregister" },
	{ 0x3082df47, "usb_register_driver" },
	{ 0x55e7daad, "usbnet_suspend" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xa5098ea2, "eth_platform_get_mac_address" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xfbd05a1a, "usbnet_get_endpoints" },
	{ 0x92997ed8, "_printk" },
	{ 0xb883381b, "usbnet_skb_return" },
	{ 0xaf80d873, "skb_trim" },
	{ 0xa777c81e, "skb_clone" },
	{ 0x9d127634, "skb_pull" },
	{ 0x65344c0c, "mii_nway_restart" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xca320b7, "__dev_kfree_skb_any" },
	{ 0x33ff7af4, "pskb_expand_head" },
	{ 0x890342b2, "skb_push" },
	{ 0xbd6841d4, "crc16" },
	{ 0x977ede3c, "netdev_info" },
	{ 0xaba12d7f, "usbnet_resume" },
	{ 0x28119a37, "generic_mii_ioctl" },
	{ 0x9d553b3d, "usbnet_change_mtu" },
	{ 0xf0ba9bb8, "device_set_wakeup_enable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbce4aad0, "usbnet_defer_kevent" },
	{ 0x2c07fd61, "mii_ethtool_gset" },
	{ 0xad8969f5, "mii_check_media" },
	{ 0xdcb764ad, "memset" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa3738a77, "usbnet_read_cmd_nopm" },
	{ 0x402e666e, "usbnet_read_cmd" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc77d8a28, "netdev_warn" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x31016fe9, "usbnet_write_cmd_nopm" },
	{ 0x23fb529f, "usbnet_write_cmd" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0424p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p7505d*dc*dsc*dp*ic*isc*ip*in*");
