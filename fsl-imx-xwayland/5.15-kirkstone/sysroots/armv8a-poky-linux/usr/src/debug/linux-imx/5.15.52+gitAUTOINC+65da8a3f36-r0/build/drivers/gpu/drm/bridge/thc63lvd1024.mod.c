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
	{ 0xf4f5f665, "drm_bridge_add" },
	{ 0xbbe986a8, "of_drm_find_bridge" },
	{ 0xa81cbb27, "of_device_is_available" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0x2e5173d3, "of_graph_get_remote_port_parent" },
	{ 0x6919b8b6, "of_graph_get_endpoint_by_regs" },
	{ 0xbf5c563f, "devm_gpiod_get_optional" },
	{ 0x9b26d69f, "devm_regulator_get" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x4f4962c, "drm_bridge_attach" },
	{ 0x1857d1a0, "regulator_disable" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xb95bc595, "gpiod_set_value" },
	{ 0x250ebd23, "regulator_enable" },
	{ 0xd88a17af, "drm_bridge_remove" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cthine,thc63lvd1024");
MODULE_ALIAS("of:N*T*Cthine,thc63lvd1024C*");
