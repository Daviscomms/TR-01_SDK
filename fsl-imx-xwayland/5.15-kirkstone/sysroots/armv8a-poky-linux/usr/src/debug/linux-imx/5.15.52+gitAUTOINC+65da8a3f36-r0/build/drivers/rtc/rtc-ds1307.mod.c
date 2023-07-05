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
	{ 0x44f81556, "_dev_info" },
	{ 0xa5c36b8b, "of_clk_add_provider" },
	{ 0xd17755bb, "of_clk_src_onecell_get" },
	{ 0xcdd3ffd8, "devm_clk_register" },
	{ 0x42f0f31b, "device_property_read_string_array" },
	{ 0x2470c714, "devm_hwmon_device_register_with_groups" },
	{ 0x57e5bb71, "devm_rtc_nvmem_register" },
	{ 0xdcb764ad, "memset" },
	{ 0x4a6c34d0, "devm_watchdog_register_device" },
	{ 0x4b8d3fc6, "watchdog_init_timeout" },
	{ 0xfb11adfc, "rtc_add_group" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9b72ce26, "device_property_present" },
	{ 0x62b91460, "device_property_read_u32_array" },
	{ 0xff0d4316, "__devm_rtc_register_device" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x16e8c4bf, "device_set_wakeup_capable" },
	{ 0x50a3f7b8, "devm_rtc_allocate_device" },
	{ 0x87ae3dce, "device_get_match_data" },
	{ 0x201129d4, "__devm_regmap_init_i2c" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x96848186, "scnprintf" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x6206c2ee, "rtc_update_irq" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x51a7435d, "regmap_bulk_write" },
	{ 0x984afbc5, "regmap_write" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x86bc8961, "regmap_bulk_read" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cdallas,ds1307");
MODULE_ALIAS("of:N*T*Cdallas,ds1307C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1308");
MODULE_ALIAS("of:N*T*Cdallas,ds1308C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1337");
MODULE_ALIAS("of:N*T*Cdallas,ds1337C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1338");
MODULE_ALIAS("of:N*T*Cdallas,ds1338C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1339");
MODULE_ALIAS("of:N*T*Cdallas,ds1339C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1388");
MODULE_ALIAS("of:N*T*Cdallas,ds1388C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1340");
MODULE_ALIAS("of:N*T*Cdallas,ds1340C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1341");
MODULE_ALIAS("of:N*T*Cdallas,ds1341C*");
MODULE_ALIAS("of:N*T*Cmaxim,ds3231");
MODULE_ALIAS("of:N*T*Cmaxim,ds3231C*");
MODULE_ALIAS("of:N*T*Cst,m41t0");
MODULE_ALIAS("of:N*T*Cst,m41t0C*");
MODULE_ALIAS("of:N*T*Cst,m41t00");
MODULE_ALIAS("of:N*T*Cst,m41t00C*");
MODULE_ALIAS("of:N*T*Cst,m41t11");
MODULE_ALIAS("of:N*T*Cst,m41t11C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp7940x");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp7940xC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp7941x");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp7941xC*");
MODULE_ALIAS("of:N*T*Cpericom,pt7c4338");
MODULE_ALIAS("of:N*T*Cpericom,pt7c4338C*");
MODULE_ALIAS("of:N*T*Cepson,rx8025");
MODULE_ALIAS("of:N*T*Cepson,rx8025C*");
MODULE_ALIAS("of:N*T*Cisil,isl12057");
MODULE_ALIAS("of:N*T*Cisil,isl12057C*");
MODULE_ALIAS("of:N*T*Cepson,rx8130");
MODULE_ALIAS("of:N*T*Cepson,rx8130C*");
MODULE_ALIAS("i2c:ds1307");
MODULE_ALIAS("i2c:ds1308");
MODULE_ALIAS("i2c:ds1337");
MODULE_ALIAS("i2c:ds1338");
MODULE_ALIAS("i2c:ds1339");
MODULE_ALIAS("i2c:ds1388");
MODULE_ALIAS("i2c:ds1340");
MODULE_ALIAS("i2c:ds1341");
MODULE_ALIAS("i2c:ds3231");
MODULE_ALIAS("i2c:m41t0");
MODULE_ALIAS("i2c:m41t00");
MODULE_ALIAS("i2c:m41t11");
MODULE_ALIAS("i2c:mcp7940x");
MODULE_ALIAS("i2c:mcp7941x");
MODULE_ALIAS("i2c:pt7c4338");
MODULE_ALIAS("i2c:rx8025");
MODULE_ALIAS("i2c:isl12057");
MODULE_ALIAS("i2c:rx8130");
