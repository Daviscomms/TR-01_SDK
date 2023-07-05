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
	{ 0xe9f427a, "genphy_suspend" },
	{ 0x94c319ac, "genphy_soft_reset" },
	{ 0xe070cba6, "bcm_phy_get_strings" },
	{ 0x2d6a6afb, "bcm_phy_handle_interrupt" },
	{ 0xa8c6f9e9, "bcm_phy_config_intr" },
	{ 0x294dbf2d, "phy_drivers_unregister" },
	{ 0xd15f095f, "phy_drivers_register" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xab97e477, "genphy_resume" },
	{ 0x7e9d3a4, "phy_modify" },
	{ 0xb5209179, "bcm_phy_read_exp" },
	{ 0xda6497f4, "mdiobus_write" },
	{ 0x659f4b98, "bcm_phy_write_exp" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0xae1d39f2, "bcm_phy_get_sset_count" },
	{ 0x47088688, "bcm_phy_get_stats" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x351da8ee, "__genphy_config_aneg" },
	{ 0xc84e6ac5, "genphy_c37_config_aneg" },
	{ 0x38b9e253, "genphy_read_status" },
	{ 0xf79edfdf, "genphy_c37_read_status" },
	{ 0xbbc8dada, "bcm_phy_write_shadow" },
	{ 0x155ac303, "bcm_phy_read_shadow" },
	{ 0xcbe3c0da, "bcm54xx_auxctl_write" },
	{ 0xd7d47de3, "bcm54xx_auxctl_read" },
	{ 0xdda6cf99, "phy_error" },
	{ 0xd4003b02, "phy_trigger_machine" },
	{ 0xa94b659c, "mdiobus_read" },
};

MODULE_INFO(depends, "bcm-phy-lib");

MODULE_ALIAS("mdio:0000000000100000011000000111????");
MODULE_ALIAS("mdio:0000000000100000011000001110????");
MODULE_ALIAS("mdio:0110000000001101100001001010????");
MODULE_ALIAS("mdio:0000000000100000011000001100????");
MODULE_ALIAS("mdio:0000001101100010010111100110????");
MODULE_ALIAS("mdio:0000001101100010010111010001????");
MODULE_ALIAS("mdio:0000000000100000011000001011????");
MODULE_ALIAS("mdio:0000000101000011101111001010????");
MODULE_ALIAS("mdio:0000001101100010010111010000????");
MODULE_ALIAS("mdio:0000001101100010010111001100????");
MODULE_ALIAS("mdio:0000000101000011101111001011????");
MODULE_ALIAS("mdio:0000000101000011101111010110????");
MODULE_ALIAS("mdio:0000000101000011101111010111????");
MODULE_ALIAS("mdio:0000001101100010010111011001????");
MODULE_ALIAS("mdio:0000000101000011101111000111????");
MODULE_ALIAS("mdio:0000000101000011101111000011????");
MODULE_ALIAS("mdio:0000000101000011101111001111????");
MODULE_ALIAS("mdio:0000001101100010010111110010????");
MODULE_ALIAS("mdio:0000001101100010010111001101????");
