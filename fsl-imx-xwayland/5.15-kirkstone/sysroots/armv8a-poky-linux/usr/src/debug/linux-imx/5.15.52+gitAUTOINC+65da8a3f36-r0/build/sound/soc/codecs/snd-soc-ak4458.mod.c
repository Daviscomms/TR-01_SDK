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
	{ 0xf9a482f9, "msleep" },
	{ 0x7f3e258, "pm_runtime_force_suspend" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0x434f470d, "pm_runtime_force_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7c8fa292, "snd_soc_component_update_bits" },
	{ 0xe169ff15, "snd_soc_put_volsw" },
	{ 0xab32d734, "snd_soc_get_volsw" },
	{ 0xbbe7cb7a, "__devm_reset_control_get" },
	{ 0x4cbe04ee, "devm_regulator_bulk_get" },
	{ 0x5508ddd9, "regulator_bulk_enable" },
	{ 0x361254bf, "snd_soc_info_enum_double" },
	{ 0x3ab7ce39, "snd_pcm_hw_constraint_list" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xf7db912, "snd_soc_info_volsw" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0x9f71a7c5, "snd_soc_get_enum_double" },
	{ 0x64575cd5, "regulator_bulk_disable" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0x201129d4, "__devm_regmap_init_i2c" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0xbf5c563f, "devm_gpiod_get_optional" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xec3da1d2, "regcache_mark_dirty" },
	{ 0xc3319526, "snd_soc_put_enum_double" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0xe3f4d0d8, "gpiod_set_value_cansleep" },
	{ 0xa419a9ac, "snd_soc_component_read" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x1e036ed0, "regcache_sync" },
	{ 0x1a2c5da8, "regcache_cache_only" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Casahi-kasei,ak4458");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak4458C*");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak4497");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak4497C*");
