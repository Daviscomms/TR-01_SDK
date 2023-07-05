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
	{ 0x434f470d, "pm_runtime_force_resume" },
	{ 0x7f3e258, "pm_runtime_force_suspend" },
	{ 0xdbb0b953, "single_release" },
	{ 0x926155f3, "seq_read" },
	{ 0xd4423e61, "seq_lseek" },
	{ 0x9cbea302, "drm_atomic_helper_connector_destroy_state" },
	{ 0x5abf3118, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xa35ee84b, "drm_helper_probe_single_connector_modes" },
	{ 0xfe31f7bf, "drm_atomic_helper_connector_reset" },
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0x8ca63a59, "auxiliary_driver_unregister" },
	{ 0xb3339e40, "__auxiliary_driver_register" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb5de9672, "drm_dev_printk" },
	{ 0x8c1bbf7d, "drm_dp_dpcd_write" },
	{ 0xa438cee9, "drm_dp_dpcd_read" },
	{ 0x5508ddd9, "regulator_bulk_enable" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xa21db26d, "__pm_runtime_idle" },
	{ 0x3ffacd94, "devm_of_dp_aux_populate_ep_devices" },
	{ 0xa2925448, "drm_dp_aux_init" },
	{ 0x3b235e89, "debugfs_create_file" },
	{ 0x911e4d96, "debugfs_create_dir" },
	{ 0x8ddd463a, "pm_runtime_set_autosuspend_delay" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0xb73c7cbf, "devm_clk_get_optional" },
	{ 0x4cbe04ee, "devm_regulator_bulk_get" },
	{ 0xbf5c563f, "devm_gpiod_get_optional" },
	{ 0x201129d4, "__devm_regmap_init_i2c" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x562215ab, "__auxiliary_device_add" },
	{ 0x6c0dca5a, "devm_add_action" },
	{ 0xdf6062c0, "auxiliary_device_init" },
	{ 0x936b2479, "device_set_of_node_from_dev" },
	{ 0x64575cd5, "regulator_bulk_disable" },
	{ 0xb95bc595, "gpiod_set_value" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x19604b69, "dev_err_probe" },
	{ 0xf4f5f665, "drm_bridge_add" },
	{ 0x4def48c3, "of_graph_get_remote_node" },
	{ 0x167275f1, "of_property_count_elems_of_size" },
	{ 0x6919b8b6, "of_graph_get_endpoint_by_regs" },
	{ 0x2664c4bd, "devm_drm_panel_bridge_add" },
	{ 0xe2375191, "drm_of_find_panel_or_bridge" },
	{ 0xea3f7211, "devm_gpiochip_add_data_with_key" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0x638c2907, "gpiochip_get_data" },
	{ 0x694f5df8, "debugfs_remove" },
	{ 0x6d7399bf, "seq_printf" },
	{ 0xc4e46e21, "seq_puts" },
	{ 0xf6cb582e, "single_open" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0x95879b36, "__pm_runtime_use_autosuspend" },
	{ 0x10a44c23, "put_device" },
	{ 0x9d2703a, "device_del" },
	{ 0x86bc8961, "regmap_bulk_read" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x51a7435d, "regmap_bulk_write" },
	{ 0x984afbc5, "regmap_write" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x4af8e3aa, "drm_connector_cleanup" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x4f4962c, "drm_bridge_attach" },
	{ 0x1f6725e3, "mipi_dsi_attach" },
	{ 0x5dd3aa5a, "__pm_runtime_suspend" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0xd30755fb, "__pm_runtime_resume" },
	{ 0x310de4c9, "mipi_dsi_device_register_full" },
	{ 0xa80d57d0, "of_find_mipi_dsi_host_by_node" },
	{ 0xd2e43987, "drm_connector_attach_encoder" },
	{ 0x88d47600, "drm_connector_init" },
	{ 0xaa0512fd, "drm_dp_aux_register" },
	{ 0x1dfc9904, "drm_bridge_get_modes" },
	{ 0xe0fe39dc, "drm_dp_aux_unregister" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0xd88a17af, "drm_bridge_remove" },
	{ 0xb3ef710d, "mipi_dsi_device_unregister" },
	{ 0xad1d54eb, "mipi_dsi_detach" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,sn65dsi86");
MODULE_ALIAS("of:N*T*Cti,sn65dsi86C*");
MODULE_ALIAS("i2c:ti,sn65dsi86");
MODULE_ALIAS("auxiliary:ti_sn65dsi86.gpio");
