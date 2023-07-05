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
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0xa5c36b8b, "of_clk_add_provider" },
	{ 0xe0600073, "of_clk_src_simple_get" },
	{ 0xcdd3ffd8, "devm_clk_register" },
	{ 0x2383879c, "of_property_read_string" },
	{ 0x57e5bb71, "devm_rtc_nvmem_register" },
	{ 0xff0d4316, "__devm_rtc_register_device" },
	{ 0xfb11adfc, "rtc_add_group" },
	{ 0x62b91460, "device_property_read_u32_array" },
	{ 0x50a3f7b8, "devm_rtc_allocate_device" },
	{ 0x201129d4, "__devm_regmap_init_i2c" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xed95dc6b, "sysfs_notify" },
	{ 0x6206c2ee, "rtc_update_irq" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x86bc8961, "regmap_bulk_read" },
	{ 0x51a7435d, "regmap_bulk_write" },
	{ 0x984afbc5, "regmap_write" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xab6dcbf2, "regmap_read" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3028");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3028C*");
