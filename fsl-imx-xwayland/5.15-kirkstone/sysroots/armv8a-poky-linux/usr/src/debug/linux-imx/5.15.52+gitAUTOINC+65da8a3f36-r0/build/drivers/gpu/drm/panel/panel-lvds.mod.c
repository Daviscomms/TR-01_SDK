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
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xe5b733da, "drm_panel_add" },
	{ 0xb6b8be23, "drm_panel_of_backlight" },
	{ 0xf11bfead, "drm_panel_init" },
	{ 0xbf5c563f, "devm_gpiod_get_optional" },
	{ 0xc231191d, "devm_regulator_get_optional" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2383879c, "of_property_read_string" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0xa1d8004a, "videomode_from_timing" },
	{ 0xe99b8508, "of_get_display_timing" },
	{ 0xf4e7a52c, "of_drm_get_panel_orientation" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x250ebd23, "regulator_enable" },
	{ 0x1857d1a0, "regulator_disable" },
	{ 0xe3f4d0d8, "gpiod_set_value_cansleep" },
	{ 0x19deacd0, "drm_connector_set_panel_orientation" },
	{ 0x31118ae8, "drm_display_info_set_bus_formats" },
	{ 0x7fb52449, "drm_mode_probed_add" },
	{ 0x66cf2f64, "drm_display_mode_from_videomode" },
	{ 0xd9efdaaa, "drm_mode_create" },
	{ 0x3a2078d2, "drm_panel_disable" },
	{ 0xe9603732, "drm_panel_remove" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cpanel-lvds");
MODULE_ALIAS("of:N*T*Cpanel-lvdsC*");
