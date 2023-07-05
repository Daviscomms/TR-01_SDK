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
	{ 0x9cbea302, "drm_atomic_helper_connector_destroy_state" },
	{ 0x5abf3118, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x4af8e3aa, "drm_connector_cleanup" },
	{ 0xa35ee84b, "drm_helper_probe_single_connector_modes" },
	{ 0xfe31f7bf, "drm_atomic_helper_connector_reset" },
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0xf4f5f665, "drm_bridge_add" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1857d1a0, "regulator_disable" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x250ebd23, "regulator_enable" },
	{ 0xdff9828d, "regulator_set_load" },
	{ 0x4cbe04ee, "devm_regulator_bulk_get" },
	{ 0xbf5c563f, "devm_gpiod_get_optional" },
	{ 0xc3201a50, "devm_gpiod_get" },
	{ 0x4def48c3, "of_graph_get_remote_node" },
	{ 0x201129d4, "__devm_regmap_init_i2c" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xde140b46, "regmap_noinc_read" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x44f81556, "_dev_info" },
	{ 0x8c1743db, "request_firmware" },
	{ 0x2f4e43f, "platform_device_register_full" },
	{ 0xdcb764ad, "memset" },
	{ 0x1ba23def, "drm_bridge_hpd_notify" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x846d79a5, "drm_kms_helper_hotplug_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc7e87c84, "drm_do_get_edid" },
	{ 0x3a9a8db5, "of_graph_parse_endpoint" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0xd2e43987, "drm_connector_attach_encoder" },
	{ 0x88d47600, "drm_connector_init" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x1f6725e3, "mipi_dsi_attach" },
	{ 0x310de4c9, "mipi_dsi_device_register_full" },
	{ 0xa80d57d0, "of_find_mipi_dsi_host_by_node" },
	{ 0x37a0cba, "kfree" },
	{ 0x50930fbc, "drm_add_edid_modes" },
	{ 0xef04b7ae, "drm_connector_update_edid_property" },
	{ 0xb3ef710d, "mipi_dsi_device_unregister" },
	{ 0xad1d54eb, "mipi_dsi_detach" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0x64575cd5, "regulator_bulk_disable" },
	{ 0xd88a17af, "drm_bridge_remove" },
	{ 0xf3cf0571, "platform_device_unregister" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xe3f4d0d8, "gpiod_set_value_cansleep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x462b0286, "regmap_noinc_write" },
	{ 0xcecca01, "regmap_multi_reg_write" },
	{ 0xf9a482f9, "msleep" },
	{ 0x984afbc5, "regmap_write" },
	{ 0x4829a47e, "memcpy" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Clontium,lt9611uxc");
MODULE_ALIAS("of:N*T*Clontium,lt9611uxcC*");
