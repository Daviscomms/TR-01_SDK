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
	{ 0x4515f07b, "__devm_regmap_init" },
	{ 0x7f3e258, "pm_runtime_force_suspend" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0x7e6830f8, "snd_soc_dapm_get_enum_double" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x610092b7, "gpio_to_desc" },
	{ 0x434f470d, "pm_runtime_force_resume" },
	{ 0x7c8fa292, "snd_soc_component_update_bits" },
	{ 0xe169ff15, "snd_soc_put_volsw" },
	{ 0xab32d734, "snd_soc_get_volsw" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x4cbe04ee, "devm_regulator_bulk_get" },
	{ 0x5508ddd9, "regulator_bulk_enable" },
	{ 0x361254bf, "snd_soc_info_enum_double" },
	{ 0x3ab7ce39, "snd_pcm_hw_constraint_list" },
	{ 0xb24e5922, "gpiod_direction_output_raw" },
	{ 0xcfde780d, "snd_soc_dapm_ignore_suspend" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xf7db912, "snd_soc_info_volsw" },
	{ 0x9f71a7c5, "snd_soc_get_enum_double" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0xf3dec445, "of_get_named_gpio_flags" },
	{ 0xf2898cac, "snd_soc_component_write" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xfe990052, "gpio_free" },
	{ 0xec3da1d2, "regcache_mark_dirty" },
	{ 0xc3319526, "snd_soc_put_enum_double" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x7a5fa60a, "gpiod_set_raw_value_cansleep" },
	{ 0xa419a9ac, "snd_soc_component_read" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x1e036ed0, "regcache_sync" },
	{ 0x1a2c5da8, "regcache_cache_only" },
	{ 0x4d4bc70c, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "");

