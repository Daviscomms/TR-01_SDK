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
	{ 0x6a21e2b5, "fwnode_handle_put" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x74b411f4, "input_set_poll_interval" },
	{ 0x7a01e352, "input_register_device" },
	{ 0x6fe355ca, "input_setup_polling" },
	{ 0x9b72ce26, "device_property_present" },
	{ 0x7c58f0f2, "devm_input_allocate_device" },
	{ 0xfaf93826, "fwnode_property_read_u32_array" },
	{ 0xcb014bbb, "device_get_next_child_node" },
	{ 0x2d7cf2, "device_get_child_node_count" },
	{ 0x62b91460, "device_property_read_u32_array" },
	{ 0x528cfe5, "iio_get_channel_type" },
	{ 0x660196ac, "devm_iio_channel_get" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xb2dc47b0, "input_event" },
	{ 0xca477c59, "iio_read_channel_processed" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cadc-keys");
MODULE_ALIAS("of:N*T*Cadc-keysC*");
