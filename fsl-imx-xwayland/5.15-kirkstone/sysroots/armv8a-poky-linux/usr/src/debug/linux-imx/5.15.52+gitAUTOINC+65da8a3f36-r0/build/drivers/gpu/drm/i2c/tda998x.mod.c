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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xaee236c6, "cec_notifier_conn_unregister" },
	{ 0xf9a482f9, "msleep" },
	{ 0x97b95915, "gpiod_direction_output" },
	{ 0xc9e35787, "drm_hdmi_vendor_infoframe_from_display_mode" },
	{ 0xfce4bdcf, "component_add" },
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0xfe31f7bf, "drm_atomic_helper_connector_reset" },
	{ 0x4f4962c, "drm_bridge_attach" },
	{ 0xc3c116d9, "i2c_transfer" },
	{ 0x6db121ad, "drm_hdmi_avi_infoframe_quant_range" },
	{ 0x65702bd6, "drm_default_rgb_quant_range" },
	{ 0xa35ee84b, "drm_helper_probe_single_connector_modes" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x595d8002, "hdmi_infoframe_pack" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x846d79a5, "drm_kms_helper_hotplug_event" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xba6db478, "drm_simple_encoder_init" },
	{ 0x2f4e43f, "platform_device_register_full" },
	{ 0xc16f2887, "cec_notifier_set_phys_addr_from_edid" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0x9ebba417, "drm_detect_monitor_audio" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4af8e3aa, "drm_connector_cleanup" },
	{ 0xc7e87c84, "drm_do_get_edid" },
	{ 0x5abf3118, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xef04b7ae, "drm_connector_update_edid_property" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xd5ef2262, "cec_notifier_conn_register" },
	{ 0x5851c0a0, "i2c_new_client_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8447263a, "gpiod_direction_input" },
	{ 0xcbfc96c9, "irq_get_irq_data" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x50930fbc, "drm_add_edid_modes" },
	{ 0xf3cf0571, "platform_device_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd42ffac4, "i2c_unregister_device" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x88d47600, "drm_connector_init" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0x44f81556, "_dev_info" },
	{ 0x9cbea302, "drm_atomic_helper_connector_destroy_state" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xd2e43987, "drm_connector_attach_encoder" },
	{ 0xd88a17af, "drm_bridge_remove" },
	{ 0x629cfb2a, "of_get_property" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x35c12cee, "drm_encoder_cleanup" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x11a02234, "i2c_transfer_buffer_flags" },
	{ 0x5ccea14f, "drm_of_find_possible_crtcs" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb6ac7e7, "drm_hdmi_avi_infoframe_from_display_mode" },
	{ 0x9ea4406d, "component_del" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa01fbb6b, "cec_notifier_set_phys_addr" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0xb95bc595, "gpiod_set_value" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0xf4f5f665, "drm_bridge_add" },
	{ 0xf45fe287, "gpiod_put" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa67c319, "gpiod_get" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,tda998x");
MODULE_ALIAS("of:N*T*Cnxp,tda998xC*");
MODULE_ALIAS("i2c:tda998x");
