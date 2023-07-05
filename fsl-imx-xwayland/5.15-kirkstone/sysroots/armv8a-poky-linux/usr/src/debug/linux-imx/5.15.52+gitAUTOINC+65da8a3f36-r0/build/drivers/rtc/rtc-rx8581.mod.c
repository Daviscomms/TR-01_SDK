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
	{ 0x57e5bb71, "devm_rtc_nvmem_register" },
	{ 0xff0d4316, "__devm_rtc_register_device" },
	{ 0x50a3f7b8, "devm_rtc_allocate_device" },
	{ 0x201129d4, "__devm_regmap_init_i2c" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x86bc8961, "regmap_bulk_read" },
	{ 0x984afbc5, "regmap_write" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x51a7435d, "regmap_bulk_write" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cepson,rx8571");
MODULE_ALIAS("of:N*T*Cepson,rx8571C*");
MODULE_ALIAS("of:N*T*Cepson,rx8581");
MODULE_ALIAS("of:N*T*Cepson,rx8581C*");
MODULE_ALIAS("i2c:rx8581");
