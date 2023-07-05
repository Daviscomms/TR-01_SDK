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
	{ 0xe04c476a, "_dev_err" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x629cfb2a, "of_get_property" },
	{ 0x1810fe3a, "of_get_next_child" },
	{ 0xf3162278, "led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc3201a50, "devm_gpiod_get" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9222bda4, "i2c_smbus_write_byte_data" },
	{ 0x156e258c, "i2c_smbus_read_byte_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc88d6d75, "led_classdev_unregister" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:pca9955btw");
MODULE_ALIAS("i2c:pca995xtw");
