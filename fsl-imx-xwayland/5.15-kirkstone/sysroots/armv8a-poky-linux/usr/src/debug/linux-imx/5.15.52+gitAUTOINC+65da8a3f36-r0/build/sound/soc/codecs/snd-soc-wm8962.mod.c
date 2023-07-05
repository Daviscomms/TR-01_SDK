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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4ce6272, "device_remove_file" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa21db26d, "__pm_runtime_idle" },
	{ 0x7f3e258, "pm_runtime_force_suspend" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x815588a6, "clk_enable" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0x7e6830f8, "snd_soc_dapm_get_enum_double" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xea124bd1, "gcd" },
	{ 0x58109104, "regmap_register_patch" },
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0x784367e4, "snd_soc_dapm_get_volsw" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0xcdb6a3f0, "_dev_crit" },
	{ 0x91ec338d, "regcache_cache_bypass" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x434f470d, "pm_runtime_force_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe2c3a724, "snd_soc_dapm_new_controls" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd30755fb, "__pm_runtime_resume" },
	{ 0x7c8fa292, "snd_soc_component_update_bits" },
	{ 0xe169ff15, "snd_soc_put_volsw" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0xab32d734, "snd_soc_get_volsw" },
	{ 0xca87efa2, "gpiochip_remove" },
	{ 0xad4c3123, "snd_soc_dapm_nc_pin" },
	{ 0x679fc59, "gpiochip_add_data_with_key" },
	{ 0x4cbe04ee, "devm_regulator_bulk_get" },
	{ 0x5508ddd9, "regulator_bulk_enable" },
	{ 0x361254bf, "snd_soc_info_enum_double" },
	{ 0xb2dc47b0, "input_event" },
	{ 0x3ddf8700, "snd_soc_dapm_add_routes" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe4185cae, "snd_soc_add_component_controls" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0xf16b9558, "snd_soc_dapm_disable_pin_unlocked" },
	{ 0x26d65396, "snd_soc_bytes_info" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x366165fa, "snd_soc_dapm_put_volsw" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x638c2907, "gpiochip_get_data" },
	{ 0xf7db912, "snd_soc_info_volsw" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{  0x93f4d, "device_create_file" },
	{ 0x44f81556, "_dev_info" },
	{ 0x9f71a7c5, "snd_soc_get_enum_double" },
	{ 0x64575cd5, "regulator_bulk_disable" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x201129d4, "__devm_regmap_init_i2c" },
	{ 0x7a01e352, "input_register_device" },
	{ 0xd750925e, "pm_wakeup_dev_event" },
	{ 0x92997ed8, "_printk" },
	{ 0x13c31a72, "devm_regulator_register_notifier" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x47665949, "snd_soc_dapm_sync" },
	{ 0xf2898cac, "snd_soc_component_write" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0x19aec80c, "snd_soc_dapm_force_enable_pin_unlocked" },
	{ 0xec3da1d2, "regcache_mark_dirty" },
	{ 0xc3319526, "snd_soc_put_enum_double" },
	{ 0x58b454ff, "snd_soc_dapm_disable_pin" },
	{ 0xaa2f6e01, "snd_soc_bytes_get" },
	{ 0x1316681a, "regcache_sync_region" },
	{ 0x7c58f0f2, "devm_input_allocate_device" },
	{ 0x5cfaf4b, "snd_soc_dapm_enable_pin" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa419a9ac, "snd_soc_component_read" },
	{ 0x1eb57085, "snd_soc_bytes_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x71937f16, "snd_soc_jack_report" },
	{ 0xa6257a2f, "complete" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x984afbc5, "regmap_write" },
	{ 0x1e036ed0, "regcache_sync" },
	{ 0x1a2c5da8, "regcache_cache_only" },
	{ 0x4d4bc70c, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cwlf,wm8962");
MODULE_ALIAS("of:N*T*Cwlf,wm8962C*");
MODULE_ALIAS("i2c:wm8962");
