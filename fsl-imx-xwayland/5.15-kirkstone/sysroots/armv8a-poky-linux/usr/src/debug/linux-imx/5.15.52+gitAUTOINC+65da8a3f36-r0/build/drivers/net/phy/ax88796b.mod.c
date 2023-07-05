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
	{ 0x9fef22e8, "phy_resolve_aneg_linkmode" },
	{ 0xc3022f0f, "genphy_read_lpa" },
	{ 0xa94b659c, "mdiobus_read" },
	{ 0xf5298fe8, "genphy_update_link" },
	{ 0x94c319ac, "genphy_soft_reset" },
	{ 0xda6497f4, "mdiobus_write" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:00000000001110110001100001100001");
MODULE_ALIAS("mdio:00000000001110110001100010000001");
MODULE_ALIAS("mdio:0000000000111011000110000100????");
