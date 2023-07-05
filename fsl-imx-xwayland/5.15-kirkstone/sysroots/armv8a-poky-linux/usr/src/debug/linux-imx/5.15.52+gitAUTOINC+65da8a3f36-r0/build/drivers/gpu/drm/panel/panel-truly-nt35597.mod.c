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
	{ 0x48549ea1, "mipi_dsi_driver_unregister" },
	{ 0xb2d21ff4, "mipi_dsi_driver_register_full" },
	{ 0xa26780c2, "mipi_dsi_dcs_write_buffer" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x5508ddd9, "regulator_bulk_enable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x48ebd3f6, "mipi_dsi_dcs_write" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7fb52449, "drm_mode_probed_add" },
	{ 0x9ce050be, "drm_mode_copy" },
	{ 0xd9efdaaa, "drm_mode_create" },
	{ 0x64575cd5, "regulator_bulk_disable" },
	{ 0xdff9828d, "regulator_set_load" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x1f6725e3, "mipi_dsi_attach" },
	{ 0xe5b733da, "drm_panel_add" },
	{ 0xf11bfead, "drm_panel_init" },
	{ 0xb95bc595, "gpiod_set_value" },
	{ 0xc3201a50, "devm_gpiod_get" },
	{ 0x4cbe04ee, "devm_regulator_bulk_get" },
	{ 0x310de4c9, "mipi_dsi_device_register_full" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0xa80d57d0, "of_find_mipi_dsi_host_by_node" },
	{ 0x4def48c3, "of_graph_get_remote_node" },
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xe9603732, "drm_panel_remove" },
	{ 0xb3ef710d, "mipi_dsi_device_unregister" },
	{ 0xad1d54eb, "mipi_dsi_detach" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ctruly,nt35597-2K-display");
MODULE_ALIAS("of:N*T*Ctruly,nt35597-2K-displayC*");
