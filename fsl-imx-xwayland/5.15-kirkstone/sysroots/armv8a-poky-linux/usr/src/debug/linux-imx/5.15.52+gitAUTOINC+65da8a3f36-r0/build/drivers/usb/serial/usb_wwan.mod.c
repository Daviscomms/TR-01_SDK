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
	{ 0xf5a30ca1, "usb_get_from_anchor" },
	{ 0x692ddc79, "usb_kill_urb" },
	{ 0x24a9bdb3, "usb_autopm_get_interface" },
	{ 0xea610d1, "usb_unlink_urb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdcb764ad, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xbe6e8616, "usb_autopm_put_interface_async" },
	{ 0xdaf7c20b, "usb_control_msg" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x2e597779, "tty_insert_flip_string_fixed_flag" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x1d163a9f, "usb_submit_urb" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x642c5769, "usb_autopm_get_interface_async" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x236bf545, "usb_autopm_get_interface_no_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9a418284, "tty_flip_buffer_push" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x4f34d4db, "usb_serial_port_softint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x7fdd07ce, "usb_free_urb" },
	{ 0xbace84ba, "usb_autopm_put_interface" },
	{ 0xa0300885, "usb_anchor_urb" },
	{ 0x4f2a6696, "usb_alloc_urb" },
};

MODULE_INFO(depends, "");

