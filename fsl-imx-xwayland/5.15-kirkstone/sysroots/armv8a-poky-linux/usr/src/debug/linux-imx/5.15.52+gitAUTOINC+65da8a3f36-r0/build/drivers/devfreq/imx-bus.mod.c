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
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x2f4e43f, "platform_device_register_full" },
	{ 0xdcb764ad, "memset" },
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0x629cfb2a, "of_get_property" },
	{ 0x5961b8b3, "devm_devfreq_add_device" },
	{ 0x6ddf1b83, "dev_pm_opp_of_add_table" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x56e41a93, "dev_pm_opp_set_rate" },
	{ 0x46c807df, "dev_pm_opp_put" },
	{ 0xf399b25e, "devfreq_recommended_opp" },
	{ 0xf3cf0571, "platform_device_unregister" },
	{ 0x4f82222c, "dev_pm_opp_of_remove_table" },
	{ 0x556e4390, "clk_get_rate" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,imx8mq-noc");
MODULE_ALIAS("of:N*T*Cfsl,imx8mq-nocC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8mm-noc");
MODULE_ALIAS("of:N*T*Cfsl,imx8mm-nocC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8mn-noc");
MODULE_ALIAS("of:N*T*Cfsl,imx8mn-nocC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8m-noc");
MODULE_ALIAS("of:N*T*Cfsl,imx8m-nocC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8m-nic");
MODULE_ALIAS("of:N*T*Cfsl,imx8m-nicC*");
