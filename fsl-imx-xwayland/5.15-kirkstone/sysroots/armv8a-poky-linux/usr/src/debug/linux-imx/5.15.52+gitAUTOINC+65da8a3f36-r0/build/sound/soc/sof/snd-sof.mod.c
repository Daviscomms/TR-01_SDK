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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xc08a36bb, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x911e4d96, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0xbcde32ad, "param_ops_int" },
	{ 0x98cf60b3, "strlen" },
	{ 0xf50e3b9b, "snd_soc_tplg_widget_bind_event" },
	{ 0xa67fc6db, "snd_pcm_hw_constraint_step" },
	{ 0x5dd3aa5a, "__pm_runtime_suspend" },
	{ 0xaad2bfca, "snd_pcm_period_elapsed" },
	{ 0xe777283, "snd_soc_find_dai" },
	{ 0x3686e637, "snd_dma_alloc_pages" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xd30755fb, "__pm_runtime_resume" },
	{ 0x2f4e43f, "platform_device_register_full" },
	{ 0x3b235e89, "debugfs_create_file" },
	{ 0xc8268547, "snd_pcm_hw_constraint_integer" },
	{ 0xf5ca1375, "devm_kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x3856a2e6, "snd_soc_tplg_component_remove" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x50e661c, "default_llseek" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xbb96c8c1, "snd_pcm_set_managed_buffer" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf77555cd, "__memcpy_toio" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x1c21d9ee, "snd_soc_tplg_component_load" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0x694f5df8, "debugfs_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xf3cf0571, "platform_device_unregister" },
	{ 0xdd95980, "simple_open" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xbf08bd0b, "devm_kmemdup" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9cf37c44, "__iowrite32_copy" },
	{ 0x321eb703, "snd_soc_rtdcom_lookup" },
	{ 0x44f81556, "_dev_info" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0xd951beb7, "snd_dma_free_pages" },
	{ 0x12bd1e78, "pci_read_config_dword" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x651409e1, "snd_sgbuf_get_addr" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8c1743db, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x896b1516, "snd_compr_malloc_pages" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc6d09aa9, "release_firmware" },
};

MODULE_INFO(depends, "");

