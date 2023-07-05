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
	{ 0x815588a6, "clk_enable" },
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0x54bb3e7e, "of_node_name_eq" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x9fd0b672, "of_device_is_compatible" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0x2f4e43f, "platform_device_register_full" },
	{ 0xb73c7cbf, "devm_clk_get_optional" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x3ab7ce39, "snd_pcm_hw_constraint_list" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0x2383879c, "of_property_read_string" },
	{ 0xf3cf0571, "platform_device_unregister" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x8b149c36, "clk_is_match" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xc569d8ce, "__clk_get_name" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,imx7ulp-rpmsg-audio");
MODULE_ALIAS("of:N*T*Cfsl,imx7ulp-rpmsg-audioC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8mm-rpmsg-audio");
MODULE_ALIAS("of:N*T*Cfsl,imx8mm-rpmsg-audioC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8mn-rpmsg-audio");
MODULE_ALIAS("of:N*T*Cfsl,imx8mn-rpmsg-audioC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8mp-rpmsg-audio");
MODULE_ALIAS("of:N*T*Cfsl,imx8mp-rpmsg-audioC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8ulp-rpmsg-audio");
MODULE_ALIAS("of:N*T*Cfsl,imx8ulp-rpmsg-audioC*");
