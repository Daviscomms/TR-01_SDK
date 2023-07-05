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
	{ 0xc76e8f53, "wl12xx_cmd_build_probe_req" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x6d3b27e, "wl12xx_debug_level" },
	{ 0xf42a30ec, "wlcore_set_key" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x6e476e9e, "generic_file_llseek" },
	{ 0x911e4d96, "debugfs_create_dir" },
	{ 0xf30f4172, "wlcore_event_beacon_loss" },
	{ 0xbcde32ad, "param_ops_int" },
	{ 0x5dd3aa5a, "__pm_runtime_suspend" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x40161e9c, "wlcore_event_dummy_packet" },
	{ 0xf99f996a, "wlcore_event_inactive_sta" },
	{ 0xe7319c24, "wlcore_event_ba_rx_constraint" },
	{ 0xedda9aaa, "ieee80211_radar_detected" },
	{ 0x913e836b, "wlcore_event_fw_logger" },
	{ 0xc1b99792, "ieee80211_channel_to_freq_khz" },
	{ 0x5e7f5999, "wlcore_event_rssi_trigger" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x6e3fa093, "wlcore_cmd_wait_for_event_or_timeout" },
	{ 0x707f86d3, "wlcore_probe" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc264d4ce, "param_ops_bool" },
	{ 0xd6df93eb, "wlcore_alloc_hw" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd30755fb, "__pm_runtime_resume" },
	{ 0x3b235e89, "debugfs_create_file" },
	{ 0x20351125, "wlcore_get_native_channel_type" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x42a5fdd1, "wl1271_cmd_configure" },
	{ 0xa0d2ef8e, "param_ops_charp" },
	{ 0xdcb764ad, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x50e661c, "default_llseek" },
	{ 0xb44da201, "wlcore_event_sched_scan_completed" },
	{ 0x91e5a71b, "wlcore_boot_upload_firmware" },
	{ 0x411f754e, "wlcore_set_partition" },
	{ 0x9166fada, "strncpy" },
	{ 0x2d91b67f, "wlcore_enable_interrupts" },
	{ 0x23c2bd1, "nla_put" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xcbfc96c9, "irq_get_irq_data" },
	{ 0x9d127634, "skb_pull" },
	{ 0xdd95980, "simple_open" },
	{ 0x40f33585, "ieee80211_queue_delayed_work" },
	{ 0x8fdd5404, "__cfg80211_send_event_skb" },
	{ 0x28d0c853, "skb_queue_tail" },
	{ 0xf7d31de9, "kstrtoul_from_user" },
	{ 0x62b67223, "wlcore_event_channel_switch" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x278c0021, "__cfg80211_alloc_event_skb" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xc419766e, "wlcore_disable_interrupts" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0xd6d9d4b2, "wlcore_remove" },
	{ 0x92997ed8, "_printk" },
	{ 0x31f94d90, "ieee80211_find_sta" },
	{ 0xdf256037, "kstrtou8_from_user" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xe9452eee, "wlcore_event_max_tx_failure" },
	{ 0x52d6b3fd, "wl1271_free_tx_id" },
	{ 0x436bedb4, "ieee80211_stop_rx_ba_session" },
	{ 0x103169c0, "wlcore_scan_sched_scan_results" },
	{ 0xca8b56d6, "ieee80211_get_hdrlen_from_skb" },
	{ 0xc5f319b7, "wlcore_free_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x85498cd1, "wl1271_format_buffer" },
	{ 0x4829a47e, "memcpy" },
	{ 0x12bd34b2, "wl1271_debugfs_update_stats" },
	{ 0xbb00a864, "wlcore_set_scan_chan_params" },
	{ 0x8c1743db, "request_firmware" },
	{ 0x10df3584, "wlcore_boot_run_firmware" },
	{ 0x9e6f3210, "wlcore_translate_addr" },
	{ 0xc4bca498, "wlcore_scan_sched_scan_ssid_list" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x87aa4bc1, "wlcore_event_roc_complete" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xe3e6cf82, "wl12xx_is_dummy_packet" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xdd32b71f, "wl1271_cmd_send" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x5e1c179b, "ieee80211_connection_loss" },
};

MODULE_INFO(depends, "wlcore");

MODULE_ALIAS("platform:wl18xx");
