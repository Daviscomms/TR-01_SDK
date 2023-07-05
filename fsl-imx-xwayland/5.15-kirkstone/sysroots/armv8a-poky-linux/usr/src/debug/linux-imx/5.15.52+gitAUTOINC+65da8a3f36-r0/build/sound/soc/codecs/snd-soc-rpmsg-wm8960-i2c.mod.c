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
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0xc24f914d, "rpmsg_wm8960_component" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0xb7f49de0, "rpmsg_wm8960_codec_dai" },
	{ 0x201129d4, "__devm_regmap_init_i2c" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0x37cea9a4, "rpmsg_wm8960_regmap" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x984afbc5, "regmap_write" },
};

MODULE_INFO(depends, "snd-soc-rpmsg-wm8960");

MODULE_ALIAS("i2c:wm8960");
MODULE_ALIAS("of:N*T*Cwlf,wm8960,lpa");
MODULE_ALIAS("of:N*T*Cwlf,wm8960,lpaC*");
