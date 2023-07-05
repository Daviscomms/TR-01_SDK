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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc30f8a7c, "module_layout" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xd30f3030, "media_entity_remote_pad" },
	{ 0x3f8daaf2, "v4l2_async_notifier_register" },
	{ 0x2221e90f, "__v4l2_async_notifier_add_fwnode_subdev" },
	{ 0xfaad83bc, "of_find_i2c_device_by_node" },
	{ 0x2e5173d3, "of_graph_get_remote_port_parent" },
	{ 0xd1ed0e8c, "v4l2_fwnode_endpoint_parse" },
	{ 0x1810fe3a, "of_get_next_child" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x884e8490, "v4l2_device_register_subdev" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0x2af0731c, "of_get_child_by_name" },
	{ 0xdc3651f8, "of_alias_get_id" },
	{ 0xa81cbb27, "of_device_is_available" },
	{ 0x1e8c483e, "of_get_next_available_child" },
	{ 0xdc478c5, "v4l2_async_notifier_init" },
	{ 0xcb5a9f4, "v4l2_device_register" },
	{ 0xd6bb7d88, "media_device_init" },
	{ 0x5792f848, "strlcpy" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xbf9dc044, "__media_device_register" },
	{ 0x44f81556, "_dev_info" },
	{ 0xebe21d12, "__v4l2_device_register_subdev_nodes" },
	{ 0xb5716dfc, "media_create_pad_link" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x76c16a6d, "module_put" },
	{ 0x58157cca, "try_module_get" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x65755402, "of_find_device_by_node" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaf5e09e7, "media_device_cleanup" },
	{ 0x4771aba4, "media_device_unregister" },
	{ 0x61f34b2, "v4l2_device_unregister" },
	{ 0x7c628270, "v4l2_async_notifier_unregister" },
	{ 0xac5c6d7e, "v4l2_async_notifier_cleanup" },
	{ 0x92997ed8, "_printk" },
	{ 0xdcb764ad, "memset" },
	{ 0x5836a496, "v4l2_device_unregister_subdev" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,mxc-md");
MODULE_ALIAS("of:N*T*Cfsl,mxc-mdC*");
