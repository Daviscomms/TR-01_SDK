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
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xf75d67ac, "usb_deregister" },
	{ 0x92997ed8, "_printk" },
	{ 0x93170190, "tty_driver_kref_put" },
	{ 0x4a686303, "tty_unregister_driver" },
	{ 0x3082df47, "usb_register_driver" },
	{ 0x3cb6fed, "tty_register_driver" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xce5f324, "__tty_alloc_driver" },
	{ 0x2e597779, "tty_insert_flip_string_fixed_flag" },
	{ 0x4f5aac2a, "tty_port_tty_wakeup" },
	{ 0x692ddc79, "usb_kill_urb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x98130b2e, "tty_standard_install" },
	{ 0x20978fb9, "idr_find" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x31c43d57, "usb_unpoison_urb" },
	{ 0xf5a30ca1, "usb_get_from_anchor" },
	{ 0x236bf545, "usb_autopm_get_interface_no_resume" },
	{ 0xfc00ecfc, "tty_unregister_device" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x10ff3bf1, "tty_kref_put" },
	{ 0xe6d2feeb, "tty_vhangup" },
	{ 0x7761434e, "tty_port_tty_get" },
	{ 0x69257e56, "usb_poison_urb" },
	{ 0xc86a08e0, "tty_port_tty_hangup" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4d2d45df, "__tty_insert_flip_char" },
	{ 0x9a418284, "tty_flip_buffer_push" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x4ce6272, "device_remove_file" },
	{ 0xe8da5127, "usb_driver_release_interface" },
	{ 0x44f81556, "_dev_info" },
	{ 0x39548913, "usb_clear_halt" },
	{ 0xb4fc07de, "tty_port_register_device" },
	{ 0xb89f39b2, "usb_driver_claim_interface" },
	{ 0xeb233a45, "__kmalloc" },
	{  0x93f4d, "device_create_file" },
	{ 0x7fdd07ce, "usb_free_urb" },
	{ 0xdd9fb6ed, "usb_free_coherent" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x4f2a6696, "usb_alloc_urb" },
	{ 0x5ec6ebdb, "usb_alloc_coherent" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x5e39716, "usb_get_intf" },
	{ 0x4298c574, "tty_port_init" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xfdb48708, "usb_ifnum_to_if" },
	{ 0xb93b3cc2, "cdc_parse_cdc_header" },
	{ 0xdcb764ad, "memset" },
	{ 0xf72a65ea, "tty_get_char_size" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xdaf7c20b, "usb_control_msg" },
	{ 0x90b9d40e, "tty_port_open" },
	{ 0x9683dd1f, "tty_port_close" },
	{ 0xa0300885, "usb_anchor_urb" },
	{ 0x642c5769, "usb_autopm_get_interface_async" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xbace84ba, "usb_autopm_put_interface" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x24a9bdb3, "usb_autopm_get_interface" },
	{ 0xc63e641c, "tty_port_hangup" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc6cbbc89, "capable" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x7187bea0, "usb_put_intf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x90924ffa, "tty_port_put" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xbe6e8616, "usb_autopm_put_interface_async" },
	{ 0x1d163a9f, "usb_submit_urb" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0424p274Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v076Dp0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0870p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Bp023Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Bp0248d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Bp024Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp3329d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0482p0203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp000Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1608d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1611d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11CAp0201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1965p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p7000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0803p3095d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p1321d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p1324d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p1328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p1349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20DFp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2184p001Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2184p0036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p6425d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D91d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D92d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D93d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D95d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D96d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D97d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D99d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D9Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p1329d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p1340d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05F9p4002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1BBBp0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1576p03B1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vFFF0p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v09D8p0320d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CA6pA050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2912p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p042Dd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p04D8d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p04C9d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0419d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p044Dd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0001d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0475d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0508d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0418d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0425d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0486d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p04DFd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p000Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0445d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p042Fd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p048Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0420d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p04E6d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p04B2d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0134d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p046Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p002Fd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0088d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p00FCd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0042d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p00B0d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p00ABd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0481d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0007d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0071d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p04F0d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0070d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p00E9d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0099d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0128d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p008Fd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p00A0d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p007Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0094d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p003Ad*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p00E9d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0108d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p01F5d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p02E3d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0178d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p010Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p02D9d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p01D0d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0223d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0275d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p026Cd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0154d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p04CEd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p01D4d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0302d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0335d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p03CDd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v04E7p6651d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v03EBp0030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p685Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v058Bp0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v108Cp0159d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v108Cp0168d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v108Cp0169d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1BC7p0021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1BC7p0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v27C6p5395d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v32A7p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip02in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip03in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip04in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip05in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip06in*");
MODULE_ALIAS("usb:v1519p0452d*dc*dsc*dp*ic*isc*ip*in*");
