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
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x4a608dd0, "__devm_iio_device_register" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xfc808083, "devm_iio_device_alloc" },
	{ 0x19b6a6, "of_match_device" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x977cf6a9, "i2c_smbus_read_word_data" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x9222bda4, "i2c_smbus_write_byte_data" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmaxim,max9611");
MODULE_ALIAS("of:N*T*Cmaxim,max9611C*");
MODULE_ALIAS("of:N*T*Cmaxim,max9612");
MODULE_ALIAS("of:N*T*Cmaxim,max9612C*");
