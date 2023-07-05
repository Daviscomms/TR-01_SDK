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
	{ 0xe295664f, "snd_soc_dapm_kcontrol_widget" },
	{ 0x7e6830f8, "snd_soc_dapm_get_enum_double" },
	{ 0x2c3c7396, "snd_soc_dapm_mixer_update_power" },
	{ 0xead5c8e5, "clk_bulk_prepare" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0x7c8fa292, "snd_soc_component_update_bits" },
	{ 0xe169ff15, "snd_soc_put_volsw" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0xab32d734, "snd_soc_get_volsw" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x361254bf, "snd_soc_info_enum_double" },
	{ 0xa9360d85, "__devm_regmap_init_mmio_clk" },
	{ 0x2dbf67d2, "snd_soc_component_read_field" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xf7db912, "snd_soc_info_volsw" },
	{ 0xc7a7e770, "clk_bulk_enable" },
	{ 0xafc5dd4d, "snd_soc_component_init_regmap" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xdfd6479b, "devm_clk_bulk_get" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xf2898cac, "snd_soc_component_write" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xfaa35181, "of_clk_hw_simple_get" },
	{ 0xec3da1d2, "regcache_mark_dirty" },
	{ 0x63c08029, "clk_bulk_unprepare" },
	{ 0xcf947077, "devm_of_clk_add_hw_provider" },
	{ 0x479f7d4b, "clk_bulk_disable" },
	{ 0xa419a9ac, "snd_soc_component_read" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x820c7f4f, "clk_hw_register" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x7a5fd1fd, "snd_soc_dapm_mux_update_power" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x1e036ed0, "regcache_sync" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0x24650ce9, "devm_platform_ioremap_resource" },
	{ 0x4d4bc70c, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cqcom,sm8250-lpass-wsa-macro");
MODULE_ALIAS("of:N*T*Cqcom,sm8250-lpass-wsa-macroC*");
