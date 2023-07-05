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
	{ 0xaba12d7f, "usbnet_resume" },
	{ 0x55e7daad, "usbnet_suspend" },
	{ 0xfe44bb2a, "usbnet_disconnect" },
	{ 0xded225a5, "usbnet_probe" },
	{ 0xf75d67ac, "usb_deregister" },
	{ 0x3082df47, "usb_register_driver" },
	{ 0x402e666e, "usbnet_read_cmd" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v067Bp0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp25A1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp258Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3923p7825d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp27A1d*dc*dsc*dp*ic*isc*ip*in*");
