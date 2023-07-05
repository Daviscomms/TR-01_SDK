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
	{ 0x78dfcc49, "sdw_unregister_driver" },
	{ 0x5744a0ee, "sdw_stream_add_slave" },
	{ 0x97b95915, "gpiod_direction_output" },
	{ 0x58109104, "regmap_register_patch" },
	{ 0xcecca01, "regmap_multi_reg_write" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0xb654a078, "sdw_stream_remove_slave" },
	{ 0x84c72e33, "sdw_write" },
	{ 0x7c8fa292, "snd_soc_component_update_bits" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0xab32d734, "snd_soc_get_volsw" },
	{ 0x361254bf, "snd_soc_info_enum_double" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xf7db912, "snd_soc_info_volsw" },
	{ 0x20fdc81b, "__sdw_register_driver" },
	{ 0xafc5dd4d, "snd_soc_component_init_regmap" },
	{ 0x9f71a7c5, "snd_soc_get_enum_double" },
	{ 0x3cad05c2, "__devm_regmap_init_sdw" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0xbf5c563f, "devm_gpiod_get_optional" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xc3319526, "snd_soc_put_enum_double" },
	{ 0x9b70a0e2, "devm_kmalloc" },
};

MODULE_INFO(depends, "soundwire-bus,regmap-sdw");

MODULE_ALIAS("sdw:m0217p2010v*c*");
MODULE_ALIAS("sdw:m0217p2110v*c*");
