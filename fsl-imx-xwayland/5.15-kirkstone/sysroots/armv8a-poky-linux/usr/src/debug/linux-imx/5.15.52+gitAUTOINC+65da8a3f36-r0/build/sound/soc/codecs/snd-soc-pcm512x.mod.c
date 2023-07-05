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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xa21db26d, "__pm_runtime_idle" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x815588a6, "clk_enable" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0xea124bd1, "gcd" },
	{ 0xb8848d10, "snd_pcm_hw_constraint_ratnums" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x503bd137, "snd_interval_ranges" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe169ff15, "snd_soc_put_volsw" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0xab32d734, "snd_soc_get_volsw" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x4cbe04ee, "devm_regulator_bulk_get" },
	{ 0x5508ddd9, "regulator_bulk_enable" },
	{ 0x361254bf, "snd_soc_info_enum_double" },
	{ 0x3ab7ce39, "snd_pcm_hw_constraint_list" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0x5f8c0057, "snd_ctl_boolean_stereo_info" },
	{ 0x167275f1, "of_property_count_elems_of_size" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xf7db912, "snd_soc_info_volsw" },
	{ 0x44f81556, "_dev_info" },
	{ 0x82fcc1cc, "snd_pcm_hw_rule_add" },
	{ 0x9f71a7c5, "snd_soc_get_enum_double" },
	{ 0x64575cd5, "regulator_bulk_disable" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x13c31a72, "devm_regulator_register_notifier" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0x2b1ba535, "__pm_runtime_set_status" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xec3da1d2, "regcache_mark_dirty" },
	{ 0xc3319526, "snd_soc_put_enum_double" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x984afbc5, "regmap_write" },
	{ 0x1e036ed0, "regcache_sync" },
	{ 0x1a2c5da8, "regcache_cache_only" },
};

MODULE_INFO(depends, "");

