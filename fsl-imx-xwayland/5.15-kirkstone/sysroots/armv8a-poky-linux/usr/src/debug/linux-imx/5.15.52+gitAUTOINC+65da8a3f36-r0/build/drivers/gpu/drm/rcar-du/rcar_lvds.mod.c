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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0x431fc310, "drm_atomic_helper_bridge_duplicate_state" },
	{ 0x112e4e55, "of_parse_phandle" },
	{ 0x19604b69, "dev_err_probe" },
	{ 0x4f4962c, "drm_bridge_attach" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x7d387c55, "of_graph_get_port_by_id" },
	{ 0x78a0680d, "devm_ioremap_resource" },
	{ 0xe2375191, "drm_of_find_panel_or_bridge" },
	{ 0x2664c4bd, "devm_drm_panel_bridge_add" },
	{ 0xc0441fc9, "drm_atomic_helper_bridge_destroy_state" },
	{ 0x9fd0b672, "of_device_is_compatible" },
	{ 0x894da6fe, "drm_of_lvds_get_dual_link_pixel_order" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xc575722d, "soc_device_match" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x2da9c344, "platform_get_resource" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x19b6a6, "of_match_device" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x907bf35, "drm_atomic_get_new_connector_for_encoder" },
	{ 0xd88a17af, "drm_bridge_remove" },
	{ 0x92c916f7, "drm_atomic_helper_bridge_reset" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xf4f5f665, "drm_bridge_add" },
	{ 0xbbe986a8, "of_drm_find_bridge" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crenesas,r8a7742-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a7742-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a7743-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a7743-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a7744-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a7744-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a774a1-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a774a1-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a774b1-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a774b1-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a774c0-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a774c0-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a774e1-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a774e1-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a7790-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a7790-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a7791-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a7791-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a7793-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a7793-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a7795-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a7795-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a7796-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a7796-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a77965-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a77965-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a77970-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a77970-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a77980-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a77980-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a77990-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a77990-lvdsC*");
MODULE_ALIAS("of:N*T*Crenesas,r8a77995-lvds");
MODULE_ALIAS("of:N*T*Crenesas,r8a77995-lvdsC*");
