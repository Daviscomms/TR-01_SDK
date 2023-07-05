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
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x815588a6, "clk_enable" },
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0x784367e4, "snd_soc_dapm_get_volsw" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xe2c3a724, "snd_soc_dapm_new_controls" },
	{ 0x7c8fa292, "snd_soc_component_update_bits" },
	{ 0xe169ff15, "snd_soc_put_volsw" },
	{ 0xab32d734, "snd_soc_get_volsw" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x361254bf, "snd_soc_info_enum_double" },
	{ 0x3ddf8700, "snd_soc_dapm_add_routes" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xe4185cae, "snd_soc_add_component_controls" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0x366165fa, "snd_soc_dapm_put_volsw" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x7f6d659d, "snd_ctl_boolean_mono_info" },
	{ 0xf7db912, "snd_soc_info_volsw" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0x9f71a7c5, "snd_soc_get_enum_double" },
	{ 0x201129d4, "__devm_regmap_init_i2c" },
	{ 0x92997ed8, "_printk" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0xf2898cac, "snd_soc_component_write" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0xc3319526, "snd_soc_put_enum_double" },
	{ 0xa419a9ac, "snd_soc_component_read" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x984afbc5, "regmap_write" },
	{ 0x1e036ed0, "regcache_sync" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:wm8960");
MODULE_ALIAS("of:N*T*Cwlf,wm8960");
MODULE_ALIAS("of:N*T*Cwlf,wm8960C*");
