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
	{ 0xbcde32ad, "param_ops_int" },
	{ 0xb61632ee, "param_ops_uint" },
	{ 0xfce3492c, "param_ops_ushort" },
	{ 0xf75d67ac, "usb_deregister" },
	{ 0x3082df47, "usb_register_driver" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x3e1aaa62, "usb_get_descriptor" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xef65ab5e, "usb_set_interface" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x39548913, "usb_clear_halt" },
	{ 0x1ea7d35, "usb_get_status" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x44f81556, "_dev_info" },
	{ 0x692ddc79, "usb_kill_urb" },
	{ 0xddf6ad7a, "completion_done" },
	{ 0xf9a482f9, "msleep" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xdd9fb6ed, "usb_free_coherent" },
	{ 0x7fdd07ce, "usb_free_urb" },
	{ 0x5ec6ebdb, "usb_alloc_coherent" },
	{ 0x4f2a6696, "usb_alloc_urb" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xea610d1, "usb_unlink_urb" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x1d163a9f, "usb_submit_urb" },
	{ 0xa6257a2f, "complete" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xdcb764ad, "memset" },
	{ 0xdaf7c20b, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x87ed6346, "usb_sg_wait" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3eafa479, "usb_sg_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf31b52aa, "usb_sg_cancel" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe04c476a, "_dev_err" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0547p2235d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0547p0080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p8613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vFFF0pFFF0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A3d*dc*dsc*dp*ic*isc*ip*in*");
