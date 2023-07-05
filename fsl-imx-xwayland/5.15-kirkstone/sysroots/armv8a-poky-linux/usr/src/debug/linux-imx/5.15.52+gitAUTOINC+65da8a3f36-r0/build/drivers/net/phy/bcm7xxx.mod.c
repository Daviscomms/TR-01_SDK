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
	{ 0x94c319ac, "genphy_soft_reset" },
	{ 0xe070cba6, "bcm_phy_get_strings" },
	{ 0x294dbf2d, "phy_drivers_unregister" },
	{ 0xd15f095f, "phy_drivers_register" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb86d83b8, "__mdiobus_write" },
	{ 0xa1a21ba, "__mdiobus_read" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x351da8ee, "__genphy_config_aneg" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb73c7cbf, "devm_clk_get_optional" },
	{ 0xae1d39f2, "bcm_phy_get_sset_count" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x47088688, "bcm_phy_get_stats" },
	{ 0x92997ed8, "_printk" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x71d1d2ff, "bcm_phy_enable_apd" },
	{ 0x361d467d, "bcm_phy_r_rc_cal_reset" },
	{ 0xb3ba635a, "bcm_phy_write_misc" },
	{ 0xfd25f6d, "bcm_phy_28nm_a0b0_afe_config_init" },
	{ 0x7cb0d68e, "bcm_phy_enable_jumbo" },
	{ 0xa94b659c, "mdiobus_read" },
	{ 0x170c2c2, "bcm_phy_downshift_get" },
	{ 0x9bd03de4, "genphy_restart_aneg" },
	{ 0x3fe25779, "bcm_phy_set_eee" },
	{ 0xffe5d6cc, "bcm_phy_downshift_set" },
	{ 0xda6497f4, "mdiobus_write" },
};

MODULE_INFO(depends, "bcm-phy-lib");

MODULE_ALIAS("mdio:0011010110010000010100110001????");
MODULE_ALIAS("mdio:0011010110010000010100110101????");
MODULE_ALIAS("mdio:1010111000000010010100101000????");
MODULE_ALIAS("mdio:1010111000000010010100010010????");
MODULE_ALIAS("mdio:1010111000000010010100011001????");
MODULE_ALIAS("mdio:1010111000000010010100001001????");
MODULE_ALIAS("mdio:1010111000000010010100111011????");
MODULE_ALIAS("mdio:1010111000000010010100011010????");
MODULE_ALIAS("mdio:1010111000000010010100100110????");
MODULE_ALIAS("mdio:0110000000001101100001001001????");
MODULE_ALIAS("mdio:0110000000001101100001100101????");
MODULE_ALIAS("mdio:0110000000001101100001001011????");
MODULE_ALIAS("mdio:0110000000001101100001101011????");
MODULE_ALIAS("mdio:0110000000001101100001110011????");
MODULE_ALIAS("mdio:1010111000000010010100101110????");
MODULE_ALIAS("mdio:0110000000001101100001001000????");
MODULE_ALIAS("mdio:0110000000001101100001110101????");
MODULE_ALIAS("mdio:0110000000001101100001010001????");
