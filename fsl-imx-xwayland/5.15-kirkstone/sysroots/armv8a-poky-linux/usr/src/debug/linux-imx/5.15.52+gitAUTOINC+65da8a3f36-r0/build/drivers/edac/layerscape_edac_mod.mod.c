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
	{ 0x8ff239f7, "edac_mc_add_mc_with_groups" },
	{ 0xbcde32ad, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0x9b52762b, "devres_open_group" },
	{ 0xef20cc83, "edac_mc_handle_error" },
	{ 0x1ae23d0, "edac_mc_free" },
	{ 0x8af7d57e, "edac_mc_alloc" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x75a0cdbe, "__devm_request_region" },
	{ 0x6969510b, "devm_ioremap" },
	{ 0xdc945c61, "edac_mc_del_mc" },
	{ 0xd55ed839, "devres_remove_group" },
	{ 0x154221ae, "of_address_to_resource" },
	{ 0x72072124, "platform_get_irq" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0xe9b4e77, "devres_release_group" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,qoriq-memory-controller");
MODULE_ALIAS("of:N*T*Cfsl,qoriq-memory-controllerC*");
