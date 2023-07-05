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
	{ 0x92997ed8, "_printk" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x4f4962c, "drm_bridge_attach" },
	{ 0x5dd623e0, "mipi_dsi_host_register" },
	{ 0xba6db478, "drm_simple_encoder_init" },
	{ 0x5ccea14f, "drm_of_find_possible_crtcs" },
	{ 0xfce4bdcf, "component_add" },
	{ 0x78a0680d, "devm_ioremap_resource" },
	{ 0x2da9c344, "platform_get_resource" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0xe2375191, "drm_of_find_panel_or_bridge" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0xdcb764ad, "memset" },
	{ 0x9ce050be, "drm_mode_copy" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x9ea4406d, "component_del" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Chisilicon,hi6220-dsi");
MODULE_ALIAS("of:N*T*Chisilicon,hi6220-dsiC*");
