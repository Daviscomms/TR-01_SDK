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
	{ 0xf75d67ac, "usb_deregister" },
	{ 0x3082df47, "usb_register_driver" },
	{ 0x2fba7775, "of_property_read_variable_u16_array" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xaa9cceb5, "btrtl_shutdown_realtek" },
	{ 0xe63e50cb, "btrtl_setup_realtek" },
	{ 0xc952bcd6, "btbcm_set_bdaddr" },
	{ 0xee56c1a8, "btbcm_setup_patchram" },
	{ 0xfdb48708, "usb_ifnum_to_if" },
	{ 0x17684ef1, "btbcm_setup_apple" },
	{ 0x6917d3, "btintel_configure_setup" },
	{ 0x9d6a23d3, "usb_match_id" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x6a4eed95, "of_irq_get_byname" },
	{ 0x3496114d, "hci_register_dev" },
	{ 0xb89f39b2, "usb_driver_claim_interface" },
	{ 0x19b6a6, "of_match_device" },
	{ 0x63748adf, "gpiod_get_optional" },
	{ 0x9a2a77f8, "hci_alloc_dev_priv" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xf5a30ca1, "usb_get_from_anchor" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xef65ab5e, "usb_set_interface" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x2ed1c431, "usb_enable_autosuspend" },
	{ 0x16e8c4bf, "device_set_wakeup_capable" },
	{ 0x8740a752, "pm_runtime_forbid" },
	{ 0x5dd3aa5a, "__pm_runtime_suspend" },
	{ 0xd3256461, "pm_runtime_allow" },
	{ 0x214e4265, "bt_warn" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe3f4d0d8, "gpiod_set_value_cansleep" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8c0215f2, "pm_system_wakeup" },
	{ 0xd750925e, "pm_wakeup_dev_event" },
	{ 0x667cddd8, "hci_recv_diag" },
	{ 0x645f857, "__alloc_skb" },
	{ 0x1a7137b5, "skb_put" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5045a21, "btintel_bootup" },
	{ 0xec3e4737, "btintel_secure_send_result" },
	{ 0x69c9172, "hci_recv_frame" },
	{ 0xbace84ba, "usb_autopm_put_interface" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x718b8b7, "bt_info" },
	{ 0x8c1743db, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x5c685517, "usb_bulk_msg" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdaf7c20b, "usb_control_msg" },
	{ 0x4829a47e, "memcpy" },
	{ 0x63436a5b, "usb_queue_reset_device" },
	{ 0x24a9bdb3, "usb_autopm_get_interface" },
	{ 0x9b1720b3, "__hci_cmd_sync_ev" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xdf035812, "__hci_cmd_sync" },
	{ 0xe8da5127, "usb_driver_release_interface" },
	{ 0xcdc966f3, "device_init_wakeup" },
	{ 0x8224727f, "hci_free_dev" },
	{ 0xf45fe287, "gpiod_put" },
	{ 0xd2f31401, "hci_unregister_dev" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7fdd07ce, "usb_free_urb" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xbadfe23c, "usb_unanchor_urb" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x1d163a9f, "usb_submit_urb" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xa0300885, "usb_anchor_urb" },
	{ 0x4f2a6696, "usb_alloc_urb" },
};

MODULE_INFO(depends, "btrtl,btintel");

MODULE_ALIAS("of:N*T*Cusb1286,204e");
MODULE_ALIAS("of:N*T*Cusb1286,204eC*");
MODULE_ALIAS("of:N*T*Cusbcf3,e300");
MODULE_ALIAS("of:N*T*Cusbcf3,e300C*");
MODULE_ALIAS("of:N*T*Cusb4ca,301a");
MODULE_ALIAS("of:N*T*Cusb4ca,301aC*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105Bp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0BB4p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "913CC17F08A144A5E77D707");
