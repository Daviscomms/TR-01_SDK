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
	{ 0x24c4739, "stmmac_pltfr_pm_ops" },
	{ 0x1eb51f4f, "stmmac_pltfr_remove" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x6aacf971, "stmmac_remove_config_dt" },
	{ 0xe240297a, "stmmac_dvr_probe" },
	{ 0xb813c757, "stmmac_probe_config_dt" },
	{ 0xa8fcc3c3, "stmmac_get_platform_resources" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cst,spear600-gmac");
MODULE_ALIAS("of:N*T*Cst,spear600-gmacC*");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.40a");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.40aC*");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.50a");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.50aC*");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.610");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.610C*");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.70a");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.70aC*");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.710");
MODULE_ALIAS("of:N*T*Csnps,dwmac-3.710C*");
MODULE_ALIAS("of:N*T*Csnps,dwmac-4.00");
MODULE_ALIAS("of:N*T*Csnps,dwmac-4.00C*");
MODULE_ALIAS("of:N*T*Csnps,dwmac-4.10a");
MODULE_ALIAS("of:N*T*Csnps,dwmac-4.10aC*");
MODULE_ALIAS("of:N*T*Csnps,dwmac");
MODULE_ALIAS("of:N*T*Csnps,dwmacC*");
MODULE_ALIAS("of:N*T*Csnps,dwxgmac-2.10");
MODULE_ALIAS("of:N*T*Csnps,dwxgmac-2.10C*");
MODULE_ALIAS("of:N*T*Csnps,dwxgmac");
MODULE_ALIAS("of:N*T*Csnps,dwxgmacC*");
