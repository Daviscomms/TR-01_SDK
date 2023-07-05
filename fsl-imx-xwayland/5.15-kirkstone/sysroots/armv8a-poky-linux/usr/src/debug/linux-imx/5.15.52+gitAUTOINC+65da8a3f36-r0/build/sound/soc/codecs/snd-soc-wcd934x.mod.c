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
	{ 0xe295664f, "snd_soc_dapm_kcontrol_widget" },
	{ 0x789ebe56, "wcd_mbhc_set_hph_type" },
	{ 0x259d33ba, "wcd_mbhc_init" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7e6830f8, "snd_soc_dapm_get_enum_double" },
	{ 0x2c3c7396, "snd_soc_dapm_mixer_update_power" },
	{ 0xe2beca26, "wcd_mbhc_stop" },
	{ 0x112e4e55, "of_parse_phandle" },
	{ 0x784367e4, "snd_soc_dapm_get_volsw" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0x45e3bcb8, "of_slim_get_device" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x56470118, "__warn_printk" },
	{ 0x86bc8961, "regmap_bulk_read" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x7c8fa292, "snd_soc_component_update_bits" },
	{ 0xe169ff15, "snd_soc_put_volsw" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0xab32d734, "snd_soc_get_volsw" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x361254bf, "snd_soc_info_enum_double" },
	{ 0x22833452, "snd_soc_dapm_kcontrol_dapm" },
	{ 0x2dbf67d2, "snd_soc_component_read_field" },
	{ 0xcd02c729, "slim_get_logical_addr" },
	{ 0xd1a0ac87, "wcd_mbhc_start" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe4185cae, "snd_soc_add_component_controls" },
	{ 0x2383879c, "of_property_read_string" },
	{ 0x936c1623, "wcd_mbhc_event_notify" },
	{ 0xf6dd4e36, "slim_stream_allocate" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3a195ca9, "wcd_mbhc_get_impedance" },
	{ 0x366165fa, "snd_soc_dapm_put_volsw" },
	{ 0xc10050e0, "__regmap_init_slimbus" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xf7db912, "snd_soc_info_volsw" },
	{ 0xafc5dd4d, "snd_soc_component_init_regmap" },
	{ 0x44f81556, "_dev_info" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0xa5758a49, "wcd_mbhc_get_hph_type" },
	{ 0x9f71a7c5, "snd_soc_get_enum_double" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0xf2898cac, "snd_soc_component_write" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xfaa35181, "of_clk_hw_simple_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xc3319526, "snd_soc_put_enum_double" },
	{ 0x4cee710f, "devm_clk_hw_register" },
	{ 0x13970122, "wcd_dt_parse_mbhc_data" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcf947077, "devm_of_clk_add_hw_provider" },
	{ 0x6db4ffd9, "snd_soc_component_write_field" },
	{ 0xa419a9ac, "snd_soc_component_read" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0x3de1356c, "slim_stream_enable" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x7a5fd1fd, "snd_soc_dapm_mux_update_power" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x984afbc5, "regmap_write" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0x2b97adf7, "slim_stream_disable" },
	{ 0x4fdcff85, "slim_stream_unprepare" },
	{ 0xd87733c7, "slim_stream_prepare" },
	{ 0x4d4bc70c, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-wcd-mbhc,slimbus,regmap-slimbus");

MODULE_ALIAS("platform:wcd934x-codec");
