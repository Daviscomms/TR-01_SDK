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
	{ 0x10a4c688, "qcom_adc5_hw_scale" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x51a7435d, "regmap_bulk_write" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x4a608dd0, "__devm_iio_device_register" },
	{ 0x72072124, "platform_get_irq" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0x4e64cdb9, "qcom_adc5_hw_settle_time_from_dt" },
	{ 0x53546ecd, "qcom_adc5_avg_samples_from_dt" },
	{ 0x47f699dd, "qcom_adc5_decimation_from_dt" },
	{ 0x629cfb2a, "of_get_property" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0xc61e7a34, "qcom_adc5_prescaling_from_dt" },
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x1e8c483e, "of_get_next_available_child" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xfc808083, "devm_iio_device_alloc" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x91f84a89, "dev_get_regmap" },
	{ 0xa6257a2f, "complete" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x86bc8961, "regmap_bulk_read" },
};

MODULE_INFO(depends, "qcom-vadc-common");

MODULE_ALIAS("of:N*T*Cqcom,spmi-adc5");
MODULE_ALIAS("of:N*T*Cqcom,spmi-adc5C*");
MODULE_ALIAS("of:N*T*Cqcom,spmi-adc7");
MODULE_ALIAS("of:N*T*Cqcom,spmi-adc7C*");
MODULE_ALIAS("of:N*T*Cqcom,spmi-adc-rev2");
MODULE_ALIAS("of:N*T*Cqcom,spmi-adc-rev2C*");
