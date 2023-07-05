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
	{ 0x112e4e55, "of_parse_phandle" },
	{ 0x9fd0b672, "of_device_is_compatible" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x629cfb2a, "of_get_property" },
	{ 0x3bd3a81c, "of_get_parent" },
	{ 0x154221ae, "of_address_to_resource" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd732eb5f, "of_node_put" },
};

MODULE_INFO(depends, "");

