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
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xa92584e5, "i2c_smbus_write_i2c_block_data" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x6206c2ee, "rtc_update_irq" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0x57e5bb71, "devm_rtc_nvmem_register" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0xff0d4316, "__devm_rtc_register_device" },
	{ 0x50a3f7b8, "devm_rtc_allocate_device" },
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x9222bda4, "i2c_smbus_write_byte_data" },
	{ 0x156e258c, "i2c_smbus_read_byte_data" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x3508f8d7, "i2c_smbus_read_i2c_block_data" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmicrocrystal,rv8803");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv8803C*");
MODULE_ALIAS("of:N*T*Cepson,rx8803");
MODULE_ALIAS("of:N*T*Cepson,rx8803C*");
MODULE_ALIAS("of:N*T*Cepson,rx8900");
MODULE_ALIAS("of:N*T*Cepson,rx8900C*");
MODULE_ALIAS("i2c:rv8803");
MODULE_ALIAS("i2c:rx8803");
MODULE_ALIAS("i2c:rx8900");
