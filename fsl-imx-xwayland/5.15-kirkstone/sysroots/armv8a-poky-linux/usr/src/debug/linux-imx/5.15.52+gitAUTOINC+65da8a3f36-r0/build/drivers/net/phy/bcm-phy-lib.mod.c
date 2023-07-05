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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc30f8a7c, "module_layout" },
	{ 0xd4003b02, "phy_trigger_machine" },
	{ 0x4e43244a, "phy_read_mmd" },
	{ 0xda6497f4, "mdiobus_write" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7e9d3a4, "phy_modify" },
	{ 0xa94b659c, "mdiobus_read" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5c374cab, "ethnl_cable_test_result" },
	{ 0xb86d83b8, "__mdiobus_write" },
	{ 0xff6b38ef, "ethnl_cable_test_fault_length" },
	{ 0x3a7fce6b, "phy_write_mmd" },
	{ 0xa1a21ba, "__mdiobus_read" },
	{ 0xdda6cf99, "phy_error" },
};

MODULE_INFO(depends, "");

