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
	{ 0xc3d485c1, "v4l2_ctrl_handler_setup" },
	{ 0xc94918e7, "v4l2_async_register_subdev" },
	{ 0x44f81556, "_dev_info" },
	{ 0xad815c91, "media_entity_pads_init" },
	{ 0x976a49d2, "v4l2_i2c_subdev_init" },
	{ 0x703cbeb8, "v4l2_ctrl_new_int_menu" },
	{ 0xcfc08465, "v4l2_ctrl_new_std_menu_items" },
	{ 0x75a627f7, "v4l2_ctrl_new_std_menu" },
	{ 0xc25a7d52, "v4l2_ctrl_new_std" },
	{ 0x61d3a67b, "v4l2_ctrl_handler_init_class" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc3201a50, "devm_gpiod_get" },
	{ 0x4cbe04ee, "devm_regulator_bulk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0xd1ed0e8c, "v4l2_fwnode_endpoint_parse" },
	{ 0x79eeb790, "of_graph_get_next_endpoint" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x815588a6, "clk_enable" },
	{ 0x64575cd5, "regulator_bulk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe3f4d0d8, "gpiod_set_value_cansleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x5508ddd9, "regulator_bulk_enable" },
	{ 0xdcb764ad, "memset" },
	{ 0x8671fc17, "__v4l2_ctrl_s_ctrl" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x89c91bf7, "__v4l2_ctrl_s_ctrl_int64" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe2822320, "__v4l2_find_nearest_size" },
	{ 0x8aa6a1a9, "v4l2_ctrl_handler_free" },
	{ 0x11fbeff4, "v4l2_async_unregister_subdev" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x11a02234, "i2c_transfer_buffer_flags" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Covti,ov5645");
MODULE_ALIAS("of:N*T*Covti,ov5645C*");
MODULE_ALIAS("i2c:ov5645");
