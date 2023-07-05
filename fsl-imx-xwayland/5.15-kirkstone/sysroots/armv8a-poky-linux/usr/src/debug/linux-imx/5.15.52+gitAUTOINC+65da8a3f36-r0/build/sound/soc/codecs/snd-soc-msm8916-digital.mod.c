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
	{ 0x9a1dfd65, "strpbrk" },
	{ 0xc72b1653, "snd_soc_get_volsw_sx" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7e6830f8, "snd_soc_dapm_get_enum_double" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x7c8fa292, "snd_soc_component_update_bits" },
	{ 0xe169ff15, "snd_soc_put_volsw" },
	{ 0xab32d734, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xf3f8794d, "snd_soc_info_volsw_sx" },
	{ 0x361254bf, "snd_soc_info_enum_double" },
	{ 0xa9360d85, "__devm_regmap_init_mmio_clk" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xf7db912, "snd_soc_info_volsw" },
	{ 0x9f71a7c5, "snd_soc_get_enum_double" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0xf2898cac, "snd_soc_component_write" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xc3319526, "snd_soc_put_enum_double" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa419a9ac, "snd_soc_component_read" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x5f401c18, "snd_soc_put_volsw_sx" },
	{ 0x24650ce9, "devm_platform_ioremap_resource" },
	{ 0x4d4bc70c, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cqcom,msm8916-wcd-digital-codec");
MODULE_ALIAS("of:N*T*Cqcom,msm8916-wcd-digital-codecC*");
