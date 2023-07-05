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
	{ 0xab6dcbf2, "regmap_read" },
	{ 0xff0d4316, "__devm_rtc_register_device" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x72072124, "platform_get_irq" },
	{ 0x50a3f7b8, "devm_rtc_allocate_device" },
	{ 0xcdc966f3, "device_init_wakeup" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x86bc8961, "regmap_bulk_read" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x51a7435d, "regmap_bulk_write" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x6206c2ee, "rtc_update_irq" },
	{ 0x984afbc5, "regmap_write" },
	{ 0xce2840e7, "irq_set_irq_wake" },
};

MODULE_INFO(depends, "");

