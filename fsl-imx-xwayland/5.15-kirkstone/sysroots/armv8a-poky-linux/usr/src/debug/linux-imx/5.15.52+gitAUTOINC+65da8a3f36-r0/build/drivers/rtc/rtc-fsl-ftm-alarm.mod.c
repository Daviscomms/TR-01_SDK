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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc30f8a7c, "module_layout" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x6206c2ee, "rtc_update_irq" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xff0d4316, "__devm_rtc_register_device" },
	{ 0xf540a522, "dev_pm_set_wake_irq" },
	{ 0xcdc966f3, "device_init_wakeup" },
	{ 0x9b72ce26, "device_property_present" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x72072124, "platform_get_irq" },
	{ 0x24650ce9, "devm_platform_ioremap_resource" },
	{ 0x50a3f7b8, "devm_rtc_allocate_device" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:NXP0014:*");
MODULE_ALIAS("of:N*T*Cfsl,ls1012a-ftm-alarm");
MODULE_ALIAS("of:N*T*Cfsl,ls1012a-ftm-alarmC*");
MODULE_ALIAS("of:N*T*Cfsl,ls1021a-ftm-alarm");
MODULE_ALIAS("of:N*T*Cfsl,ls1021a-ftm-alarmC*");
MODULE_ALIAS("of:N*T*Cfsl,ls1028a-ftm-alarm");
MODULE_ALIAS("of:N*T*Cfsl,ls1028a-ftm-alarmC*");
MODULE_ALIAS("of:N*T*Cfsl,ls1043a-ftm-alarm");
MODULE_ALIAS("of:N*T*Cfsl,ls1043a-ftm-alarmC*");
MODULE_ALIAS("of:N*T*Cfsl,ls1046a-ftm-alarm");
MODULE_ALIAS("of:N*T*Cfsl,ls1046a-ftm-alarmC*");
MODULE_ALIAS("of:N*T*Cfsl,ls1088a-ftm-alarm");
MODULE_ALIAS("of:N*T*Cfsl,ls1088a-ftm-alarmC*");
MODULE_ALIAS("of:N*T*Cfsl,ls208xa-ftm-alarm");
MODULE_ALIAS("of:N*T*Cfsl,ls208xa-ftm-alarmC*");
MODULE_ALIAS("of:N*T*Cfsl,lx2160a-ftm-alarm");
MODULE_ALIAS("of:N*T*Cfsl,lx2160a-ftm-alarmC*");
