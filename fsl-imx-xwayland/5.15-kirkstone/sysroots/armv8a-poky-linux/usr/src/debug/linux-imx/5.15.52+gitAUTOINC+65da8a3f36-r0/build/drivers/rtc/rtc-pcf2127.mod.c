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
	{ 0x9dbdab82, "driver_unregister" },
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0xa9d7752b, "__spi_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0x6206c2ee, "rtc_update_irq" },
	{ 0x4515f07b, "__devm_regmap_init" },
	{ 0xd2030dc2, "spi_get_device_id" },
	{ 0xb8a746d5, "__devm_regmap_init_spi" },
	{ 0xf9a482f9, "msleep" },
	{ 0x57e5bb71, "devm_rtc_nvmem_register" },
	{ 0xdcb764ad, "memset" },
	{ 0xcdc966f3, "device_init_wakeup" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0xff0d4316, "__devm_rtc_register_device" },
	{ 0xfb11adfc, "rtc_add_group" },
	{ 0x4a6c34d0, "devm_watchdog_register_device" },
	{ 0x9b72ce26, "device_property_present" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x50a3f7b8, "devm_rtc_allocate_device" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0x44f81556, "_dev_info" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x51a7435d, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x86bc8961, "regmap_bulk_read" },
	{ 0x984afbc5, "regmap_write" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x11a02234, "i2c_transfer_buffer_flags" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:pcf2127");
MODULE_ALIAS("spi:pcf2129");
MODULE_ALIAS("spi:pca2129");
MODULE_ALIAS("i2c:pcf2127");
MODULE_ALIAS("i2c:pcf2129");
MODULE_ALIAS("i2c:pca2129");
MODULE_ALIAS("of:N*T*Cnxp,pcf2127");
MODULE_ALIAS("of:N*T*Cnxp,pcf2127C*");
MODULE_ALIAS("of:N*T*Cnxp,pcf2129");
MODULE_ALIAS("of:N*T*Cnxp,pcf2129C*");
MODULE_ALIAS("of:N*T*Cnxp,pca2129");
MODULE_ALIAS("of:N*T*Cnxp,pca2129C*");
