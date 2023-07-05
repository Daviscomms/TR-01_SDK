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
	{ 0x434f470d, "pm_runtime_force_resume" },
	{ 0x7f3e258, "pm_runtime_force_suspend" },
	{ 0x540eb04e, "iio_trigger_validate_own_device" },
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x96500a64, "iio_push_to_buffers" },
	{ 0xb966f624, "iio_trigger_notify_done" },
	{ 0x8266d80f, "iio_device_release_direct_mode" },
	{ 0x7605b908, "iio_device_claim_direct_mode" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x5dd3aa5a, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xd30755fb, "__pm_runtime_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x1fa1a10b, "i2c_smbus_write_word_data" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xb898382e, "__devm_iio_trigger_register" },
	{ 0x1e1c4d25, "devm_iio_trigger_alloc" },
	{ 0xc53dc8f3, "iio_device_id" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x3fc5ec0d, "devm_iio_triggered_buffer_setup_ext" },
	{ 0x8ddd463a, "pm_runtime_set_autosuspend_delay" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0xc537c69e, "__iio_device_register" },
	{ 0x62b91460, "device_property_read_u32_array" },
	{ 0xfc808083, "devm_iio_device_alloc" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x977cf6a9, "i2c_smbus_read_word_data" },
	{ 0x95d85d0b, "iio_trigger_poll_chained" },
	{ 0xf9edd8ce, "iio_push_event" },
	{ 0xeac81ca8, "iio_get_time_ns" },
	{ 0x156e258c, "i2c_smbus_read_byte_data" },
	{ 0x9222bda4, "i2c_smbus_write_byte_data" },
	{ 0x2b1ba535, "__pm_runtime_set_status" },
	{ 0x3f0a4018, "iio_device_unregister" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0x95879b36, "__pm_runtime_use_autosuspend" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cvishay,vcnl4000");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4000C*");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4010");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4010C*");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4020");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4020C*");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4040");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4040C*");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4200");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4200C*");
MODULE_ALIAS("i2c:vcnl4000");
MODULE_ALIAS("i2c:vcnl4010");
MODULE_ALIAS("i2c:vcnl4020");
MODULE_ALIAS("i2c:vcnl4040");
MODULE_ALIAS("i2c:vcnl4200");
