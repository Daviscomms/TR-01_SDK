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
	{ 0x79ddaad5, "pci_generic_config_write" },
	{ 0x9117a048, "dw_pcie_own_conf_map_bus" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x6c0dca5a, "devm_add_action" },
	{ 0x815588a6, "clk_enable" },
	{ 0x9bcfa249, "dw_pcie_host_init" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x28b7aa55, "phy_exit" },
	{ 0x9b856bc4, "phy_power_off" },
	{ 0x34fb4f33, "phy_reset" },
	{ 0x1f5156ee, "phy_power_on" },
	{ 0xf697fdea, "phy_init" },
	{ 0xee0221c8, "devm_platform_ioremap_resource_byname" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0xbbe7cb7a, "__devm_reset_control_get" },
	{ 0xc3201a50, "devm_gpiod_get" },
	{ 0x853bbaed, "devm_phy_get" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xe535c28a, "dw_pcie_write_dbi" },
	{ 0x6c026caf, "dw_pcie_read_dbi" },
	{ 0xb72692e0, "dw_pcie_find_capability" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe3f4d0d8, "gpiod_set_value_cansleep" },
	{ 0xfdc304c, "pci_generic_config_read" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Camlogic,axg-pcie");
MODULE_ALIAS("of:N*T*Camlogic,axg-pcieC*");
MODULE_ALIAS("of:N*T*Camlogic,g12a-pcie");
MODULE_ALIAS("of:N*T*Camlogic,g12a-pcieC*");
