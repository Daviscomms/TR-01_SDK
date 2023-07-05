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
	{ 0x7e0597c4, "cros_ec_sensors_pm_ops" },
	{ 0x5fd82f8e, "cros_ec_sensors_core_read_avail" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x6f2ef641, "cros_ec_sensors_core_read" },
	{ 0xe7c92098, "cros_ec_motion_send_host_cmd" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x56e450b1, "cros_ec_sensors_core_write" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x4a608dd0, "__devm_iio_device_register" },
	{ 0xbb9c3039, "cros_ec_sensors_read_cmd" },
	{ 0x5d892115, "cros_ec_sensors_ext_info" },
	{ 0x401bedb9, "cros_ec_sensors_core_init" },
	{ 0x9971dac4, "cros_ec_sensors_capture" },
	{ 0x6aa323a4, "cros_ec_sensors_push_data" },
	{ 0xfc808083, "devm_iio_device_alloc" },
};

MODULE_INFO(depends, "cros_ec_sensors_core");

MODULE_ALIAS("platform:cros-ec-baro");
