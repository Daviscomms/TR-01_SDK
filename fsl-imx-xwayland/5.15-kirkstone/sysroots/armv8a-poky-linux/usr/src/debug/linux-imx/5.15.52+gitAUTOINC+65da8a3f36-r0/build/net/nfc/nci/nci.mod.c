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
	{ 0x2d3385d3, "system_wq" },
	{ 0x32be76a5, "nfc_register_device" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x10f85925, "nfc_send_to_raw_sock" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x98cf60b3, "strlen" },
	{ 0x9de2b4ab, "nfc_dep_link_is_up" },
	{ 0x503a74b3, "nfc_targets_found" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xaf80d873, "skb_trim" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2cb0c220, "skb_queue_purge" },
	{ 0xdcb764ad, "memset" },
	{ 0x57513a33, "nfc_tm_activated" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x890342b2, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9d127634, "skb_pull" },
	{ 0x15a059f9, "devm_kfree" },
	{ 0xcecb3f2a, "nfc_set_remote_general_bytes" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xc43ff100, "nfc_get_local_general_bytes" },
	{ 0x28d0c853, "skb_queue_tail" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x645f857, "__alloc_skb" },
	{ 0x10a44c23, "put_device" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xcccd83c4, "nfc_alloc_recv_skb" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0x92997ed8, "_printk" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x1a7d2d9b, "nfc_tm_deactivated" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x33ff7af4, "pskb_expand_head" },
	{ 0x8007571b, "nfc_tm_data_received" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x16b6872b, "nfc_allocate_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x68f44f23, "nfc_unregister_device" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xafa5f04b, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1a7137b5, "skb_put" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49cd25ed, "alloc_workqueue" },
};

MODULE_INFO(depends, "nfc");

