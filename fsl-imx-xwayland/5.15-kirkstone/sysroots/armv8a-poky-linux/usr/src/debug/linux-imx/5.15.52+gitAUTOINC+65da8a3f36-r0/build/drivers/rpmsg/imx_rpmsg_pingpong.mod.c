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
	{ 0x5d2a551, "unregister_rpmsg_driver" },
	{ 0xc2d15cdb, "__register_rpmsg_driver" },
	{ 0x21f3afd8, "rpmsg_send" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xb152964, "rpmsg_sendto" },
	{ 0x92997ed8, "_printk" },
	{ 0x44f81556, "_dev_info" },
};

MODULE_INFO(depends, "");

