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
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x19604b69, "dev_err_probe" },
	{ 0x6a21e2b5, "fwnode_handle_put" },
	{ 0x865cd48a, "devm_led_classdev_register_ext" },
	{ 0xfaf93826, "fwnode_property_read_u32_array" },
	{ 0xcb014bbb, "device_get_next_child_node" },
	{ 0x62b91460, "device_property_read_u32_array" },
	{ 0xc231191d, "devm_regulator_get_optional" },
	{ 0xbf5c563f, "devm_gpiod_get_optional" },
	{ 0x201129d4, "__devm_regmap_init_i2c" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x984afbc5, "regmap_write" },
	{ 0x250ebd23, "regulator_enable" },
	{ 0x1857d1a0, "regulator_disable" },
	{ 0x97b95915, "gpiod_direction_output" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xab6dcbf2, "regmap_read" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,lm36922");
MODULE_ALIAS("of:N*T*Cti,lm36922C*");
MODULE_ALIAS("of:N*T*Cti,lm36923");
MODULE_ALIAS("of:N*T*Cti,lm36923C*");
MODULE_ALIAS("i2c:lm36922");
MODULE_ALIAS("i2c:lm36923");
