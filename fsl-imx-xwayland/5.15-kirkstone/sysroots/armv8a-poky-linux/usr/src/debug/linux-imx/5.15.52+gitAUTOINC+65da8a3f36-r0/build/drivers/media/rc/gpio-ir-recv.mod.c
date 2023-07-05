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
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0x2b1ba535, "__pm_runtime_set_status" },
	{ 0x95879b36, "__pm_runtime_use_autosuspend" },
	{ 0x8ddd463a, "pm_runtime_set_autosuspend_delay" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x99effb04, "devm_rc_register_device" },
	{ 0x629cfb2a, "of_get_property" },
	{ 0xcddaabd4, "devm_rc_allocate_device" },
	{ 0xbebe8185, "gpiod_to_irq" },
	{ 0xc3201a50, "devm_gpiod_get" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x6b793077, "ir_raw_event_store_edge" },
	{ 0x5dd3aa5a, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x4f9b2966, "gpiod_get_value" },
	{ 0xd30755fb, "__pm_runtime_resume" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x22ec5205, "cpu_latency_qos_remove_request" },
	{ 0x28afbb08, "cpu_latency_qos_add_request" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("of:N*T*Cgpio-ir-receiver");
MODULE_ALIAS("of:N*T*Cgpio-ir-receiverC*");
