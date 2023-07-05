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
	{ 0xab97e477, "genphy_resume" },
	{ 0xe9f427a, "genphy_suspend" },
	{ 0x294dbf2d, "phy_drivers_unregister" },
	{ 0xd15f095f, "phy_drivers_register" },
	{ 0x94c319ac, "genphy_soft_reset" },
	{ 0x19604b69, "dev_err_probe" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x8cfc5ddd, "clk_get" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xdda6cf99, "phy_error" },
	{ 0xd4003b02, "phy_trigger_machine" },
	{ 0x9166fada, "strncpy" },
	{ 0x351da8ee, "__genphy_config_aneg" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xda6497f4, "mdiobus_write" },
	{ 0xa94b659c, "mdiobus_read" },
	{ 0x38b9e253, "genphy_read_status" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000000000111110000001010????");
MODULE_ALIAS("mdio:0000000000000111110000001011????");
MODULE_ALIAS("mdio:0000000000000111110000001100????");
MODULE_ALIAS("mdio:0000000000000111110000001101????");
MODULE_ALIAS("mdio:0000000000000111110000001111????");
MODULE_ALIAS("mdio:0000000000000111110000010001????");
