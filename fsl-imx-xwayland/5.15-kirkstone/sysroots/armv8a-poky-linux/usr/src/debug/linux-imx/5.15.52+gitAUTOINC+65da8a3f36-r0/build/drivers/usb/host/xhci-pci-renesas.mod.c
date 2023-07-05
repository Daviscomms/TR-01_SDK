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
	{ 0xc08a36bb, "pci_write_config_dword" },
	{ 0xf9a482f9, "msleep" },
	{ 0x838e5ca, "pci_read_config_byte" },
	{ 0xadb65dad, "pci_dev_get" },
	{ 0x73e912a0, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xf5f8c069, "pci_read_config_word" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x44f81556, "_dev_info" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x12bd1e78, "pci_read_config_dword" },
	{ 0xbe2fce95, "pci_dev_put" },
	{ 0x11d6a11b, "firmware_request_nowarn" },
	{ 0xc6d09aa9, "release_firmware" },
};

MODULE_INFO(depends, "");

