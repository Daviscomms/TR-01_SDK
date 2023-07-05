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
	{ 0x4515f07b, "__devm_regmap_init" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x815588a6, "clk_enable" },
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0xc3c116d9, "i2c_transfer" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x7c8fa292, "snd_soc_component_update_bits" },
	{ 0xe169ff15, "snd_soc_put_volsw" },
	{ 0xab32d734, "snd_soc_get_volsw" },
	{ 0x4cbe04ee, "devm_regulator_bulk_get" },
	{ 0x5508ddd9, "regulator_bulk_enable" },
	{ 0x361254bf, "snd_soc_info_enum_double" },
	{ 0x19b947b6, "snd_soc_put_volsw_range" },
	{ 0xde7814d4, "snd_soc_info_volsw_range" },
	{ 0x45f97555, "snd_soc_get_volsw_range" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x19b6a6, "of_match_device" },
	{ 0xf7db912, "snd_soc_info_volsw" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0x9f71a7c5, "snd_soc_get_enum_double" },
	{ 0x64575cd5, "regulator_bulk_disable" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0xbf5c563f, "devm_gpiod_get_optional" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x11a02234, "i2c_transfer_buffer_flags" },
	{ 0xc3319526, "snd_soc_put_enum_double" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb95bc595, "gpiod_set_value" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x984afbc5, "regmap_write" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:tas5707");
MODULE_ALIAS("i2c:tas5711");
MODULE_ALIAS("i2c:tas5717");
MODULE_ALIAS("i2c:tas5719");
MODULE_ALIAS("i2c:tas5721");
MODULE_ALIAS("of:N*T*Cti,tas5707");
MODULE_ALIAS("of:N*T*Cti,tas5707C*");
MODULE_ALIAS("of:N*T*Cti,tas5711");
MODULE_ALIAS("of:N*T*Cti,tas5711C*");
MODULE_ALIAS("of:N*T*Cti,tas5717");
MODULE_ALIAS("of:N*T*Cti,tas5717C*");
MODULE_ALIAS("of:N*T*Cti,tas5719");
MODULE_ALIAS("of:N*T*Cti,tas5719C*");
MODULE_ALIAS("of:N*T*Cti,tas5721");
MODULE_ALIAS("of:N*T*Cti,tas5721C*");
