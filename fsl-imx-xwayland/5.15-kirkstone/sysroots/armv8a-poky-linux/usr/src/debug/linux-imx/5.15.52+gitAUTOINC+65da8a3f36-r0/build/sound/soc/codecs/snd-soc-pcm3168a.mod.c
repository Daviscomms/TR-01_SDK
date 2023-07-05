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
	{ 0xf9a482f9, "msleep" },
	{ 0xa21db26d, "__pm_runtime_idle" },
	{ 0x815588a6, "clk_enable" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xe169ff15, "snd_soc_put_volsw" },
	{ 0xab32d734, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x4cbe04ee, "devm_regulator_bulk_get" },
	{ 0x5508ddd9, "regulator_bulk_enable" },
	{ 0x361254bf, "snd_soc_info_enum_double" },
	{ 0x19b947b6, "snd_soc_put_volsw_range" },
	{ 0xde7814d4, "snd_soc_info_volsw_range" },
	{ 0x45f97555, "snd_soc_get_volsw_range" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xf7db912, "snd_soc_info_volsw" },
	{ 0x9f71a7c5, "snd_soc_get_enum_double" },
	{ 0x64575cd5, "regulator_bulk_disable" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0x2b1ba535, "__pm_runtime_set_status" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xbf5c563f, "devm_gpiod_get_optional" },
	{ 0xec3da1d2, "regcache_mark_dirty" },
	{ 0xc3319526, "snd_soc_put_enum_double" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe3f4d0d8, "gpiod_set_value_cansleep" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x984afbc5, "regmap_write" },
	{ 0x1e036ed0, "regcache_sync" },
	{ 0x1a2c5da8, "regcache_cache_only" },
};

MODULE_INFO(depends, "");

