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
	{ 0x294dbf2d, "phy_drivers_unregister" },
	{ 0xd15f095f, "phy_drivers_register" },
	{ 0x3a7fce6b, "phy_write_mmd" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xac0959a6, "phy_restore_page" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xde57d5f9, "phy_save_page" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x4e43244a, "phy_read_mmd" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xe9f427a, "genphy_suspend" },
	{ 0x351da8ee, "__genphy_config_aneg" },
	{ 0xda6497f4, "mdiobus_write" },
	{ 0xdda6cf99, "phy_error" },
	{ 0xd4003b02, "phy_trigger_machine" },
	{ 0xa94b659c, "mdiobus_read" },
	{ 0x15a059f9, "devm_kfree" },
	{ 0xa1a21ba, "__mdiobus_read" },
	{ 0xb86d83b8, "__mdiobus_write" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000000000111110000010011????");
