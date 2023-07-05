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
	{ 0x5cbf5b8b, "v4l2_event_subdev_unsubscribe" },
	{ 0xd6edc297, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9f075d45, "__v4l2_ctrl_handler_setup" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd30755fb, "__pm_runtime_resume" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0xe4ed6cb, "v4l2_async_register_subdev_sensor" },
	{ 0xad815c91, "media_entity_pads_init" },
	{ 0xb162c865, "v4l2_ctrl_new_fwnode_properties" },
	{ 0xbf4206db, "v4l2_fwnode_device_parse" },
	{ 0xcfc08465, "v4l2_ctrl_new_std_menu_items" },
	{ 0x703cbeb8, "v4l2_ctrl_new_int_menu" },
	{ 0xc25a7d52, "v4l2_ctrl_new_std" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x61d3a67b, "v4l2_ctrl_handler_init_class" },
	{ 0xc3c116d9, "i2c_transfer" },
	{ 0xbf5c563f, "devm_gpiod_get_optional" },
	{ 0x4cbe04ee, "devm_regulator_bulk_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0x6a21e2b5, "fwnode_handle_put" },
	{ 0x21f332a4, "v4l2_fwnode_endpoint_free" },
	{ 0x21d7e168, "v4l2_fwnode_endpoint_alloc_parse" },
	{ 0xac91fc33, "fwnode_graph_get_next_endpoint" },
	{ 0xc3d256ea, "dev_fwnode" },
	{ 0xdcb764ad, "memset" },
	{ 0x976a49d2, "v4l2_i2c_subdev_init" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x2b1ba535, "__pm_runtime_set_status" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0x8aa6a1a9, "v4l2_ctrl_handler_free" },
	{ 0x11fbeff4, "v4l2_async_unregister_subdev" },
	{ 0x8671fc17, "__v4l2_ctrl_s_ctrl" },
	{ 0xe2822320, "__v4l2_find_nearest_size" },
	{ 0x44f81556, "_dev_info" },
	{ 0xa71248b, "__v4l2_ctrl_modify_range" },
	{ 0x4e092cd9, "pm_runtime_get_if_active" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa21db26d, "__pm_runtime_idle" },
	{ 0xbdb818bd, "__v4l2_ctrl_grab" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x11a02234, "i2c_transfer_buffer_flags" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe3f4d0d8, "gpiod_set_value_cansleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0x64575cd5, "regulator_bulk_disable" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x5508ddd9, "regulator_bulk_enable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csony,imx219");
MODULE_ALIAS("of:N*T*Csony,imx219C*");
