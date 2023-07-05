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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc30f8a7c, "module_layout" },
	{ 0x7f3e258, "pm_runtime_force_suspend" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0x95879b36, "__pm_runtime_use_autosuspend" },
	{ 0x5dd3aa5a, "__pm_runtime_suspend" },
	{ 0x19604b69, "dev_err_probe" },
	{ 0x1857d1a0, "regulator_disable" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0x86bc8961, "regmap_bulk_read" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x434f470d, "pm_runtime_force_resume" },
	{ 0x6a4eed95, "of_irq_get_byname" },
	{ 0xd30755fb, "__pm_runtime_resume" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0xeac81ca8, "iio_get_time_ns" },
	{ 0xfc808083, "devm_iio_device_alloc" },
	{ 0x58250e08, "iio_read_mount_matrix" },
	{ 0x4a608dd0, "__devm_iio_device_register" },
	{ 0x1bc8a49e, "i2c_verify_client" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xcbfc96c9, "irq_get_irq_data" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x7605b908, "iio_device_claim_direct_mode" },
	{ 0x6c0dca5a, "devm_add_action" },
	{ 0x44f81556, "_dev_info" },
	{ 0x9b26d69f, "devm_regulator_get" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x2b1ba535, "__pm_runtime_set_status" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x6a73beaa, "devm_iio_kfifo_buffer_setup_ext" },
	{ 0x8266d80f, "iio_device_release_direct_mode" },
	{ 0x96500a64, "iio_push_to_buffers" },
	{ 0x8ddd463a, "pm_runtime_set_autosuspend_delay" },
	{ 0xddbe892c, "regmap_get_device" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xcb1f50e9, "regmap_raw_read" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9b72ce26, "device_property_present" },
	{ 0x250ebd23, "regulator_enable" },
};

MODULE_INFO(depends, "");

