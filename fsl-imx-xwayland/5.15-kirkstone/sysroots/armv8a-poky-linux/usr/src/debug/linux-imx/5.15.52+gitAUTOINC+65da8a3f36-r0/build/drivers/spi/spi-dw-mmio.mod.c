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
	{ 0x82ed5e40, "dw_spi_add_host" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0x87ae3dce, "device_get_match_data" },
	{ 0x62b91460, "device_property_read_u32_array" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0xbbe7cb7a, "__devm_reset_control_get" },
	{ 0xb73c7cbf, "devm_clk_get_optional" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0x72072124, "platform_get_irq" },
	{ 0xc4e20f3a, "devm_platform_get_and_ioremap_resource" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0xee6b71c4, "syscon_regmap_lookup_by_compatible" },
	{ 0x24650ce9, "devm_platform_ioremap_resource" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0xfbf63832, "dw_spi_remove_host" },
	{ 0xe5896d0e, "dw_spi_set_cs" },
	{ 0x13a567c2, "dw_spi_dma_setup_generic" },
	{ 0xe04c476a, "_dev_err" },
};

MODULE_INFO(depends, "spi-dw");

MODULE_ALIAS("acpi*:HISI0173:*");
MODULE_ALIAS("of:N*T*Csnps,dw-apb-ssi");
MODULE_ALIAS("of:N*T*Csnps,dw-apb-ssiC*");
MODULE_ALIAS("of:N*T*Cmscc,ocelot-spi");
MODULE_ALIAS("of:N*T*Cmscc,ocelot-spiC*");
MODULE_ALIAS("of:N*T*Cmscc,jaguar2-spi");
MODULE_ALIAS("of:N*T*Cmscc,jaguar2-spiC*");
MODULE_ALIAS("of:N*T*Camazon,alpine-dw-apb-ssi");
MODULE_ALIAS("of:N*T*Camazon,alpine-dw-apb-ssiC*");
MODULE_ALIAS("of:N*T*Crenesas,rzn1-spi");
MODULE_ALIAS("of:N*T*Crenesas,rzn1-spiC*");
MODULE_ALIAS("of:N*T*Csnps,dwc-ssi-1.01a");
MODULE_ALIAS("of:N*T*Csnps,dwc-ssi-1.01aC*");
MODULE_ALIAS("of:N*T*Cintel,keembay-ssi");
MODULE_ALIAS("of:N*T*Cintel,keembay-ssiC*");
MODULE_ALIAS("of:N*T*Cmicrochip,sparx5-spi");
MODULE_ALIAS("of:N*T*Cmicrochip,sparx5-spiC*");
MODULE_ALIAS("of:N*T*Ccanaan,k210-spi");
MODULE_ALIAS("of:N*T*Ccanaan,k210-spiC*");
