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
	{ 0x4515f07b, "__devm_regmap_init" },
	{ 0xf097eb6a, "spmi_register_read" },
	{ 0xaca9b050, "spmi_register_zero_write" },
	{ 0xf51a64c2, "spmi_ext_register_write" },
	{ 0xeb9439ca, "__regmap_init" },
	{ 0xcd5e3e28, "spmi_register_write" },
	{ 0xe5fc4b49, "spmi_ext_register_readl" },
	{ 0x6901aa4e, "spmi_ext_register_read" },
	{ 0x497e5bad, "spmi_ext_register_writel" },
};

MODULE_INFO(depends, "");

