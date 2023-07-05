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
	{ 0x2d3f2085, "snd_rawmidi_proceed" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x53b954a2, "up_read" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x692ddc79, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd553f55, "snd_rawmidi_set_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x78362c8b, "snd_rawmidi_new" },
	{ 0x668b19a1, "down_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x95f3b57d, "usb_string" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xef65ab5e, "usb_set_interface" },
	{ 0x457f1c1, "snd_ctl_notify" },
	{ 0xdaf7c20b, "usb_control_msg" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf4f9e2e7, "snd_rawmidi_transmit_peek" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xdd9fb6ed, "usb_free_coherent" },
	{ 0xce807a25, "up_write" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa91d48d5, "usb_urb_ep_type_check" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0x1d163a9f, "usb_submit_urb" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x8b776554, "snd_rawmidi_transmit_ack" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x5c685517, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xd164173b, "snd_ctl_new1" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x236bf545, "usb_autopm_get_interface_no_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5ec6ebdb, "usb_alloc_coherent" },
	{ 0x2554d7bc, "snd_ctl_add" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x57caf078, "snd_rawmidi_transmit" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x7fdd07ce, "usb_free_urb" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xcc9ed794, "snd_rawmidi_receive" },
	{ 0x4f2a6696, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");

