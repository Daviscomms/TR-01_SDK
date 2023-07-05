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
	{ 0x55e7daad, "usbnet_suspend" },
	{ 0xfe44bb2a, "usbnet_disconnect" },
	{ 0xded225a5, "usbnet_probe" },
	{ 0x9b769c85, "dev_get_tstats64" },
	{ 0x5990c655, "usbnet_tx_timeout" },
	{ 0x9d553b3d, "usbnet_change_mtu" },
	{ 0x1aff05fc, "eth_validate_addr" },
	{ 0x4f52ad2f, "usbnet_start_xmit" },
	{ 0x72c880db, "usbnet_stop" },
	{ 0x43c40c9d, "usbnet_open" },
	{ 0x9118057f, "usbnet_set_link_ksettings_mii" },
	{ 0x3ba1486, "usbnet_get_link_ksettings_mii" },
	{ 0x8ea32b33, "usbnet_get_link" },
	{ 0xe47cc74c, "usbnet_nway_reset" },
	{ 0x58aa0b7a, "usbnet_set_msglevel" },
	{ 0x6a7cea0e, "usbnet_get_msglevel" },
	{ 0xf75d67ac, "usb_deregister" },
	{ 0x3082df47, "usb_register_driver" },
	{ 0xaba12d7f, "usbnet_resume" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xfbd05a1a, "usbnet_get_endpoints" },
	{ 0x44f81556, "_dev_info" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x402e666e, "usbnet_read_cmd" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa3ce7100, "usbnet_write_cmd_async" },
	{ 0x4829a47e, "memcpy" },
	{ 0x23fb529f, "usbnet_write_cmd" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xffafbb87, "usbnet_get_drvinfo" },
	{ 0x28119a37, "generic_mii_ioctl" },
	{ 0x60b1618f, "usbnet_link_change" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xaf80d873, "skb_trim" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v9710p7832d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7730d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0021d*dc*dsc*dp*ic*isc*ip*in*");
