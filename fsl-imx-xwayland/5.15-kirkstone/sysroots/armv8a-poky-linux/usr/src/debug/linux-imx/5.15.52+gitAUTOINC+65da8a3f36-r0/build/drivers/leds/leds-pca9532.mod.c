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
	{ 0xc88d6d75, "led_classdev_unregister" },
	{ 0x7a01e352, "input_register_device" },
	{ 0x7c58f0f2, "devm_input_allocate_device" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xf3162278, "led_classdev_register_ext" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x44f81556, "_dev_info" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x2383879c, "of_property_read_string" },
	{ 0x1e8c483e, "of_get_next_available_child" },
	{ 0x2772b215, "of_property_read_variable_u8_array" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x156e258c, "i2c_smbus_read_byte_data" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9222bda4, "i2c_smbus_write_byte_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,pca9530");
MODULE_ALIAS("of:N*T*Cnxp,pca9530C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9531");
MODULE_ALIAS("of:N*T*Cnxp,pca9531C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9532");
MODULE_ALIAS("of:N*T*Cnxp,pca9532C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9533");
MODULE_ALIAS("of:N*T*Cnxp,pca9533C*");
MODULE_ALIAS("i2c:pca9530");
MODULE_ALIAS("i2c:pca9531");
MODULE_ALIAS("i2c:pca9532");
MODULE_ALIAS("i2c:pca9533");
