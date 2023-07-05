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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x815588a6, "clk_enable" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0x95879b36, "__pm_runtime_use_autosuspend" },
	{ 0x5dd3aa5a, "__pm_runtime_suspend" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x78a0680d, "devm_ioremap_resource" },
	{ 0x285ad645, "slim_device_report_present" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x119f11df, "slim_unregister_controller" },
	{ 0xee0221c8, "devm_platform_ioremap_resource_byname" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3801776b, "__ioread32_copy" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x9cf37c44, "__iowrite32_copy" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0xda5efe5d, "slim_msg_response" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2b1ba535, "__pm_runtime_set_status" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xd56e619e, "platform_get_resource_byname" },
	{ 0x3d9245d1, "slim_register_controller" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8ddd463a, "pm_runtime_set_autosuspend_delay" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x72072124, "platform_get_irq" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x63889eb5, "slim_ctrl_clk_pause" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2ff4f87d, "slim_do_transfer" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x49cd25ed, "alloc_workqueue" },
};

MODULE_INFO(depends, "slimbus");

