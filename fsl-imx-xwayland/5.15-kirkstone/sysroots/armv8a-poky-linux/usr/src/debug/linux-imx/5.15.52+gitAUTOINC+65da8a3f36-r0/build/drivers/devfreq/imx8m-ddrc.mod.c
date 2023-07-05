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
	{ 0x6df97c43, "_dev_warn" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x95fefad4, "clk_hw_get_parent_by_index" },
	{ 0x2d6c2aff, "__clk_get_hw" },
	{ 0xf399b25e, "devfreq_recommended_opp" },
	{ 0x6d566442, "dev_pm_opp_disable" },
	{ 0x44f81556, "_dev_info" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x5961b8b3, "devm_devfreq_add_device" },
	{ 0x46c807df, "dev_pm_opp_put" },
	{ 0xcdd359a4, "dev_pm_opp_find_freq_ceil" },
	{ 0x7467d179, "dev_pm_opp_get_opp_count" },
	{ 0x6ddf1b83, "dev_pm_opp_of_add_table" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x4f82222c, "dev_pm_opp_of_remove_table" },
	{ 0x556e4390, "clk_get_rate" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,imx8m-ddrc");
MODULE_ALIAS("of:N*T*Cfsl,imx8m-ddrcC*");
