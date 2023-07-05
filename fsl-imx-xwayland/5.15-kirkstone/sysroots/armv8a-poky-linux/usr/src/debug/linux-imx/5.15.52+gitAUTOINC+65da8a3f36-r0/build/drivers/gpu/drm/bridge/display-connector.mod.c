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
	{ 0x1ba23def, "drm_bridge_hpd_notify" },
	{ 0xe88f8105, "drm_probe_ddc" },
	{ 0x691166c5, "gpiod_get_value_cansleep" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0xae2e0670, "of_get_i2c_adapter_by_node" },
	{ 0x112e4e55, "of_parse_phandle" },
	{ 0x44f81556, "_dev_info" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x250ebd23, "regulator_enable" },
	{ 0xc231191d, "devm_regulator_get_optional" },
	{ 0xbebe8185, "gpiod_to_irq" },
	{ 0xbf5c563f, "devm_gpiod_get_optional" },
	{ 0xf4f5f665, "drm_bridge_add" },
	{ 0x2383879c, "of_property_read_string" },
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x3588a33d, "drm_get_edid" },
	{ 0x864e51b9, "i2c_put_adapter" },
	{ 0xd88a17af, "drm_bridge_remove" },
	{ 0x1857d1a0, "regulator_disable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ccomposite-video-connector");
MODULE_ALIAS("of:N*T*Ccomposite-video-connectorC*");
MODULE_ALIAS("of:N*T*Cdvi-connector");
MODULE_ALIAS("of:N*T*Cdvi-connectorC*");
MODULE_ALIAS("of:N*T*Chdmi-connector");
MODULE_ALIAS("of:N*T*Chdmi-connectorC*");
MODULE_ALIAS("of:N*T*Csvideo-connector");
MODULE_ALIAS("of:N*T*Csvideo-connectorC*");
MODULE_ALIAS("of:N*T*Cvga-connector");
MODULE_ALIAS("of:N*T*Cvga-connectorC*");
MODULE_ALIAS("of:N*T*Cdp-connector");
MODULE_ALIAS("of:N*T*Cdp-connectorC*");
