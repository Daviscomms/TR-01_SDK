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
	{ 0x44f81556, "_dev_info" },
	{ 0xa072a74, "of_mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5e3694b8, "mdiobus_alloc_size" },
	{ 0xb73c7cbf, "devm_clk_get_optional" },
	{ 0x6969510b, "devm_ioremap" },
	{ 0x2da9c344, "platform_get_resource" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x92997ed8, "_printk" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xa94b659c, "mdiobus_read" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x1e8c483e, "of_get_next_available_child" },
	{ 0xeece192d, "mdiobus_free" },
	{ 0x35d632f1, "mdiobus_unregister" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v5");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v5C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v4");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v4C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v3");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v3C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v2");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v2C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v1");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v1C*");
MODULE_ALIAS("of:N*T*Cbrcm,unimac-mdio");
MODULE_ALIAS("of:N*T*Cbrcm,unimac-mdioC*");
