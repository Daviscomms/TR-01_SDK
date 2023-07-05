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
	{ 0xf9a482f9, "msleep" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7e6830f8, "snd_soc_dapm_get_enum_double" },
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0x784367e4, "snd_soc_dapm_get_volsw" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x70617a04, "rl6231_get_clk_info" },
	{ 0xe2c3a724, "snd_soc_dapm_new_controls" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7c8fa292, "snd_soc_component_update_bits" },
	{ 0xe169ff15, "snd_soc_put_volsw" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0xab32d734, "snd_soc_get_volsw" },
	{ 0x361254bf, "snd_soc_info_enum_double" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x8d7fa148, "rl6231_get_pre_div" },
	{ 0x366165fa, "snd_soc_dapm_put_volsw" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xf7db912, "snd_soc_info_volsw" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0x62b91460, "device_property_read_u32_array" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x201129d4, "__devm_regmap_init_i2c" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0x47665949, "snd_soc_dapm_sync" },
	{ 0xf2898cac, "snd_soc_component_write" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0xdba4502f, "rl6231_calc_dmic_clk" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0xbf5c563f, "devm_gpiod_get_optional" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xec3da1d2, "regcache_mark_dirty" },
	{ 0xf011abd6, "snd_soc_dapm_force_enable_pin" },
	{ 0x58b454ff, "snd_soc_dapm_disable_pin" },
	{ 0x5dc92cdf, "rl6231_pll_calc" },
	{ 0xa419a9ac, "snd_soc_component_read" },
	{ 0x71937f16, "snd_soc_jack_report" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x984afbc5, "regmap_write" },
	{ 0x1e036ed0, "regcache_sync" },
	{ 0x1a2c5da8, "regcache_cache_only" },
	{ 0x9b72ce26, "device_property_present" },
	{ 0x4d4bc70c, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-rl6231");

MODULE_ALIAS("i2c:rt5658");
MODULE_ALIAS("i2c:rt5659");
MODULE_ALIAS("acpi*:10EC5658:*");
MODULE_ALIAS("acpi*:10EC5659:*");
MODULE_ALIAS("of:N*T*Crealtek,rt5658");
MODULE_ALIAS("of:N*T*Crealtek,rt5658C*");
MODULE_ALIAS("of:N*T*Crealtek,rt5659");
MODULE_ALIAS("of:N*T*Crealtek,rt5659C*");
