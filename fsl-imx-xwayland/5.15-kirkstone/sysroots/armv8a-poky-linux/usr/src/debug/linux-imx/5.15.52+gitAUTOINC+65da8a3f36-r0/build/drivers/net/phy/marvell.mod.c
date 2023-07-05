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
	{ 0xb98bb315, "phy_gbit_fibre_features" },
	{ 0xb6acaa13, "phy_sfp_detach" },
	{ 0x394a1e11, "phy_sfp_attach" },
	{ 0x294dbf2d, "phy_drivers_unregister" },
	{ 0xd15f095f, "phy_drivers_register" },
	{ 0x498780e1, "ethnl_cable_test_amplitude" },
	{ 0xff6b38ef, "ethnl_cable_test_fault_length" },
	{ 0x5c374cab, "ethnl_cable_test_result" },
	{ 0x351da8ee, "__genphy_config_aneg" },
	{ 0xab97e477, "genphy_resume" },
	{ 0xe9f427a, "genphy_suspend" },
	{ 0x90e0a552, "genphy_read_status_fixed" },
	{ 0xf5298fe8, "genphy_update_link" },
	{ 0xb37c0823, "phy_resolve_aneg_pause" },
	{ 0xc3022f0f, "genphy_read_lpa" },
	{ 0x2e526ca4, "phy_sfp_probe" },
	{ 0x70177724, "phy_modify_paged_changed" },
	{ 0x269ea2ec, "genphy_setup_forced" },
	{ 0xf8f67291, "genphy_check_and_restart_aneg" },
	{ 0xcdf9ac2b, "phy_modify_changed" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0xd5075e1b, "phy_config_aneg" },
	{ 0xda6497f4, "mdiobus_write" },
	{ 0x1e78af38, "phy_ethtool_get_eee" },
	{ 0xd0c830be, "devm_hwmon_device_register_with_info" },
	{ 0x11089ac7, "_ctype" },
	{ 0x98cf60b3, "strlen" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xdda6cf99, "phy_error" },
	{ 0xd4003b02, "phy_trigger_machine" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xde57d5f9, "phy_save_page" },
	{ 0x629cfb2a, "of_get_property" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x44f81556, "_dev_info" },
	{ 0x67e2bebc, "__phy_modify" },
	{ 0xbdb8b533, "ethnl_cable_test_step" },
	{ 0x33f006f3, "ethnl_cable_test_pulse" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x9d2b1f7a, "phy_write_paged" },
	{ 0x94c319ac, "genphy_soft_reset" },
	{ 0x7e9d3a4, "phy_modify" },
	{ 0xa94b659c, "mdiobus_read" },
	{ 0xac0959a6, "phy_restore_page" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb86d83b8, "__mdiobus_write" },
	{ 0xe6cd4083, "phy_select_page" },
	{ 0xa1a21ba, "__mdiobus_read" },
	{ 0x8f2fbc76, "phy_modify_paged" },
	{ 0x813d89bd, "phy_read_paged" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000101000001000011000110????");
MODULE_ALIAS("mdio:0000000101000001000011001001????");
MODULE_ALIAS("mdio:0000000101000001000011001100????");
MODULE_ALIAS("mdio:0000000111111111000011001100????");
MODULE_ALIAS("mdio:0000000101000001000011100001????");
MODULE_ALIAS("mdio:0000000101000001000011001011????");
MODULE_ALIAS("mdio:0000000101000001000011001101????");
MODULE_ALIAS("mdio:0000000101000001000011100101????");
MODULE_ALIAS("mdio:0000000101000001000011100011????");
MODULE_ALIAS("mdio:0000000101000001000011101001????");
MODULE_ALIAS("mdio:0000000101000001000011100100????");
MODULE_ALIAS("mdio:0000000101000001000011011101????");
MODULE_ALIAS("mdio:0000000101000001000011101011????");
MODULE_ALIAS("mdio:0000000101000001000011101010????");
MODULE_ALIAS("mdio:0000000101000001000011100110????");
MODULE_ALIAS("mdio:0000000101000001000011110100????");
MODULE_ALIAS("mdio:0000000101000001000011111001????");
MODULE_ALIAS("mdio:0000000000101011000010111001????");
MODULE_ALIAS("mdio:0000000101000001000011011100????");
MODULE_ALIAS("mdio:0000000101000001000011101100????");
