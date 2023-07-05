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
	{ 0x9cbea302, "drm_atomic_helper_connector_destroy_state" },
	{ 0x5abf3118, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x4af8e3aa, "drm_connector_cleanup" },
	{ 0xa35ee84b, "drm_helper_probe_single_connector_modes" },
	{ 0xfe31f7bf, "drm_atomic_helper_connector_reset" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xd2e43987, "drm_connector_attach_encoder" },
	{ 0x817bc021, "drm_connector_init_with_ddc" },
	{ 0x4f4962c, "drm_bridge_attach" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xf4f5f665, "drm_bridge_add" },
	{ 0xbf5c563f, "devm_gpiod_get_optional" },
	{ 0xc231191d, "devm_regulator_get_optional" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0xbbe986a8, "of_drm_find_bridge" },
	{ 0x4def48c3, "of_graph_get_remote_node" },
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x24391ed6, "drm_set_preferred_mode" },
	{ 0xbdcd06fc, "drm_add_modes_noedid" },
	{ 0x92997ed8, "_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x50930fbc, "drm_add_edid_modes" },
	{ 0xef04b7ae, "drm_connector_update_edid_property" },
	{ 0xb8091176, "drm_bridge_get_edid" },
	{ 0x54c4a42e, "drm_bridge_detect" },
	{ 0x1857d1a0, "regulator_disable" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0xe3f4d0d8, "gpiod_set_value_cansleep" },
	{ 0x250ebd23, "regulator_enable" },
	{ 0xd88a17af, "drm_bridge_remove" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cdumb-vga-dac");
MODULE_ALIAS("of:N*T*Cdumb-vga-dacC*");
MODULE_ALIAS("of:N*T*Cadi,adv7123");
MODULE_ALIAS("of:N*T*Cadi,adv7123C*");
MODULE_ALIAS("of:N*T*Cti,opa362");
MODULE_ALIAS("of:N*T*Cti,opa362C*");
MODULE_ALIAS("of:N*T*Cti,ths8135");
MODULE_ALIAS("of:N*T*Cti,ths8135C*");
MODULE_ALIAS("of:N*T*Cti,ths8134");
MODULE_ALIAS("of:N*T*Cti,ths8134C*");
