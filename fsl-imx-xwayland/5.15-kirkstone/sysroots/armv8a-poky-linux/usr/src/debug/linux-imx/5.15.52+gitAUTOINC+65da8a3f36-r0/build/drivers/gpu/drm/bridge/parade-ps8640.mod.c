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
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0x9222bda4, "i2c_smbus_write_byte_data" },
	{ 0x156e258c, "i2c_smbus_read_byte_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5508ddd9, "regulator_bulk_enable" },
	{ 0xa92584e5, "i2c_smbus_write_i2c_block_data" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x64575cd5, "regulator_bulk_disable" },
	{ 0xb95bc595, "gpiod_set_value" },
	{ 0xd88a17af, "drm_bridge_remove" },
	{ 0xb3ef710d, "mipi_dsi_device_unregister" },
	{ 0x4f4962c, "drm_bridge_attach" },
	{ 0x1f6725e3, "mipi_dsi_attach" },
	{ 0x310de4c9, "mipi_dsi_device_register_full" },
	{ 0xa80d57d0, "of_find_mipi_dsi_host_by_node" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0x2e5173d3, "of_graph_get_remote_port_parent" },
	{ 0x6919b8b6, "of_graph_get_endpoint_by_regs" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xf4f5f665, "drm_bridge_add" },
	{ 0x627cd94c, "devm_i2c_new_dummy_device" },
	{ 0xc3201a50, "devm_gpiod_get" },
	{ 0x4cbe04ee, "devm_regulator_bulk_get" },
	{ 0x2664c4bd, "devm_drm_panel_bridge_add" },
	{ 0xe2375191, "drm_of_find_panel_or_bridge" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xcf7994fe, "drm_bridge_chain_post_disable" },
	{ 0x3588a33d, "drm_get_edid" },
	{ 0xde66a006, "drm_bridge_chain_pre_enable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cparade,ps8640");
MODULE_ALIAS("of:N*T*Cparade,ps8640C*");
