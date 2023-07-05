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
	{ 0x2d3385d3, "system_wq" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x349cba85, "strchr" },
	{ 0xbcde32ad, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x98cf60b3, "strlen" },
	{ 0x5e7f4920, "snd_pcm_format_set_silence" },
	{ 0xaad2bfca, "snd_pcm_period_elapsed" },
	{ 0x3de5518c, "snd_pcm_stop_xrun" },
	{ 0x6d7399bf, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc0f4850, "snd_devm_card_new" },
	{ 0xc264d4ce, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2f4e43f, "platform_device_register_full" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc8268547, "snd_pcm_hw_constraint_integer" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x332c48b8, "snd_timer_instance_free" },
	{ 0xa0d2ef8e, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0x4b223bc5, "snd_pcm_set_managed_buffer_all" },
	{ 0xcd38fae8, "snd_timer_instance_new" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6f892889, "snd_pcm_set_ops" },
	{ 0x457f1c1, "snd_ctl_notify" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf3cf0571, "platform_device_unregister" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x15a059f9, "devm_kfree" },
	{ 0x7f6d659d, "snd_ctl_boolean_mono_info" },
	{ 0x35bc7d6, "snd_timer_start" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x82fcc1cc, "snd_pcm_hw_rule_add" },
	{ 0x10a44c23, "put_device" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xea76dc4d, "snd_card_ref" },
	{ 0xff811200, "devm_kstrdup" },
	{ 0xc9dd8847, "snd_timer_open" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xd164173b, "snd_ctl_new1" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x447c157f, "snd_card_rw_proc_new" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x715c0139, "snd_timer_close" },
	{ 0xdd219cdf, "param_array_ops" },
	{ 0xbf8aa372, "snd_pcm_stop" },
	{ 0x19fcbfde, "snd_card_register" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4f22e773, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2554d7bc, "snd_ctl_add" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x77bc13a0, "strim" },
	{ 0x5ebd5cfc, "snd_timer_stop" },
};

MODULE_INFO(depends, "");

