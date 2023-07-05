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
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x35f7f3e8, "__i2c_smbus_xfer" },
	{ 0x29e1e204, "hdmi_audio_infoframe_pack" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x19604b69, "dev_err_probe" },
	{ 0x1d94a3f3, "i2c_mux_add_adapter" },
	{ 0x251ced53, "i2c_mux_alloc" },
	{ 0xb73c7cbf, "devm_clk_get_optional" },
	{ 0x2772b215, "of_property_read_variable_u8_array" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0xf4f5f665, "drm_bridge_add" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x86bc8961, "regmap_bulk_read" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb95bc595, "gpiod_set_value" },
	{ 0x5508ddd9, "regulator_bulk_enable" },
	{ 0x4cbe04ee, "devm_regulator_bulk_get" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbf5c563f, "devm_gpiod_get_optional" },
	{ 0x201129d4, "__devm_regmap_init_i2c" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x2f4e43f, "platform_device_register_full" },
	{ 0xdcb764ad, "memset" },
	{ 0x9719e181, "drm_helper_hpd_irq_event" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x984afbc5, "regmap_write" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3a9a8db5, "of_graph_parse_endpoint" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0x31118ae8, "drm_display_info_set_bus_formats" },
	{ 0x37a0cba, "kfree" },
	{ 0x50930fbc, "drm_add_edid_modes" },
	{ 0xdd671fc8, "drm_detect_hdmi_monitor" },
	{ 0xef04b7ae, "drm_connector_update_edid_property" },
	{ 0x3588a33d, "drm_get_edid" },
	{ 0xd2e43987, "drm_connector_attach_encoder" },
	{ 0x88d47600, "drm_connector_init" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x809712ff, "hdmi_avi_infoframe_pack" },
	{ 0xeb6ac7e7, "drm_hdmi_avi_infoframe_from_display_mode" },
	{ 0x51a7435d, "regmap_bulk_write" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x64575cd5, "regulator_bulk_disable" },
	{ 0xd88a17af, "drm_bridge_remove" },
	{ 0xb9f7d5ca, "i2c_mux_del_adapters" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:sii9022");
MODULE_ALIAS("of:N*T*Csil,sii9022");
MODULE_ALIAS("of:N*T*Csil,sii9022C*");
