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
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2f9c5759, "ethtool_op_get_ts_info" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9425ff9a, "usb_altnum_to_altsetting" },
	{ 0xaba12d7f, "usbnet_resume" },
	{ 0xef34bf3e, "hrtimer_active" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xded225a5, "usbnet_probe" },
	{ 0x60b1618f, "usbnet_link_change" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xfe44bb2a, "usbnet_disconnect" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x29e5fab1, "usbnet_get_link_ksettings_internal" },
	{ 0xca320b7, "__dev_kfree_skb_any" },
	{ 0x72c880db, "usbnet_stop" },
	{ 0xd4fd9348, "usbnet_update_max_qlen" },
	{ 0xc264d4ce, "param_ops_bool" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4ef660c1, "__netdev_alloc_skb" },
	{ 0x9b769c85, "dev_get_tstats64" },
	{ 0xf8253113, "netif_schedule_queue" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xe47cc74c, "usbnet_nway_reset" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xf75d67ac, "usb_deregister" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xef65ab5e, "usb_set_interface" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xb89f39b2, "usb_driver_claim_interface" },
	{ 0xffafbb87, "usbnet_get_drvinfo" },
	{ 0x4f52ad2f, "usbnet_start_xmit" },
	{ 0x55e7daad, "usbnet_suspend" },
	{ 0x8ea32b33, "usbnet_get_link" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x402e666e, "usbnet_read_cmd" },
	{ 0x44f81556, "_dev_info" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x645f857, "__alloc_skb" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x5990c655, "usbnet_tx_timeout" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xb93b3cc2, "cdc_parse_cdc_header" },
	{ 0x479543fc, "usbnet_get_ethernet_addr" },
	{ 0xb883381b, "usbnet_skb_return" },
	{ 0xe8da5127, "usb_driver_release_interface" },
	{ 0x43c40c9d, "usbnet_open" },
	{ 0x6a7cea0e, "usbnet_get_msglevel" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x3213bd8e, "usbnet_unlink_rx_urbs" },
	{ 0x1aff05fc, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x3082df47, "usb_register_driver" },
	{ 0xfdb48708, "usb_ifnum_to_if" },
	{ 0x49a102f8, "usbnet_cdc_update_filter" },
	{ 0x1a7137b5, "skb_put" },
	{ 0x3adbd83e, "eth_mac_addr" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x30d61cdb, "usbnet_manage_power" },
	{ 0x23fb529f, "usbnet_write_cmd" },
	{ 0x58aa0b7a, "usbnet_set_msglevel" },
	{ 0x9720f04c, "usbnet_set_rx_mode" },
};

MODULE_INFO(depends, "cdc_ether");

MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1BC7p0036d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BBd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BCd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1546p1010d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
