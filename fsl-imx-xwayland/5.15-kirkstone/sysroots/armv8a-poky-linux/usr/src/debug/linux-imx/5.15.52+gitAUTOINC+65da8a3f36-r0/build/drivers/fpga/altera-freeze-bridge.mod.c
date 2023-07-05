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
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x647284f, "fpga_bridge_register" },
	{ 0x597a79c8, "devm_fpga_bridge_create" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x78a0680d, "devm_ioremap_resource" },
	{ 0x2da9c344, "platform_get_resource" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x43bd077f, "fpga_bridge_unregister" },
};

MODULE_INFO(depends, "fpga-bridge");

MODULE_ALIAS("of:N*T*Caltr,freeze-bridge-controller");
MODULE_ALIAS("of:N*T*Caltr,freeze-bridge-controllerC*");
