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
	{ 0xecdec901, "drm_release" },
	{ 0xcd723c3e, "drm_dev_register" },
	{ 0x354f3f52, "drm_compat_ioctl" },
	{ 0x815588a6, "clk_enable" },
	{ 0x6445b735, "drm_atomic_helper_update_plane" },
	{ 0x9600a72f, "drm_crtc_arm_vblank_event" },
	{ 0xc86bb222, "drm_atomic_helper_crtc_duplicate_state" },
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0xcf5cda4b, "drm_dev_alloc" },
	{ 0x78dabbb9, "component_unbind_all" },
	{ 0xbc0cd496, "drm_mode_config_cleanup" },
	{ 0xb6e744ca, "drm_mode_config_reset" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0x12ff2380, "drm_atomic_helper_page_flip" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf2578039, "drm_crtc_handle_vblank" },
	{ 0x68ebb4c0, "drm_crtc_vblank_off" },
	{ 0xd1db2def, "component_bind_all" },
	{ 0x78a0680d, "devm_ioremap_resource" },
	{ 0x6350dd8, "drm_vblank_init" },
	{ 0xb8f888d5, "component_master_del" },
	{ 0xe8580af1, "drm_of_component_match_add" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x2338a04b, "drm_atomic_helper_crtc_reset" },
	{ 0xbbe7cb7a, "__devm_reset_control_get" },
	{ 0xce2b8625, "drm_universal_plane_init" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xb02ca513, "drm_fbdev_generic_setup" },
	{ 0xbad2a2cc, "drm_atomic_helper_set_config" },
	{ 0x1c9a6f3f, "drm_dev_put" },
	{ 0x49b7afb3, "drm_dev_unregister" },
	{ 0x4def48c3, "of_graph_get_remote_node" },
	{ 0x12c87e6c, "drm_crtc_init_with_planes" },
	{ 0x4edd4629, "drm_gem_cma_dumb_create" },
	{ 0x7092e11, "drm_atomic_helper_plane_reset" },
	{ 0x5dd382cb, "drm_gem_fb_create" },
	{ 0xeeb8d8fb, "drm_crtc_vblank_on" },
	{ 0xfb77e23e, "drm_fb_cma_get_gem_obj" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x2da9c344, "platform_get_resource" },
	{ 0x170a16e2, "drm_read" },
	{ 0x8e1a37f7, "noop_llseek" },
	{ 0x15a059f9, "devm_kfree" },
	{ 0x2af0731c, "of_get_child_by_name" },
	{ 0x65971261, "drm_atomic_get_crtc_state" },
	{ 0xe9279079, "drm_gem_prime_fd_to_handle" },
	{ 0xca634a9e, "drm_plane_cleanup" },
	{ 0xf3d0638, "drm_ioctl" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0xd791bab4, "drm_gem_mmap" },
	{ 0xb778be87, "drm_atomic_helper_plane_duplicate_state" },
	{ 0x13c219b2, "drm_atomic_helper_check" },
	{ 0x52d5e01b, "syscon_regmap_lookup_by_phandle" },
	{ 0x70413336, "drm_atomic_helper_commit" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x949908f0, "drm_crtc_send_vblank_event" },
	{ 0xda084e5a, "drm_crtc_vblank_get" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0x13854a6, "drmm_mode_config_init" },
	{ 0x54f24595, "drm_gem_prime_handle_to_fd" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xf5320217, "drm_gem_cma_prime_import_sg_table" },
	{ 0x475b05f9, "drm_crtc_cleanup" },
	{ 0x3988c9c6, "drm_atomic_helper_crtc_destroy_state" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x40fbdf12, "drm_gem_prime_mmap" },
	{ 0x1f29d353, "drm_atomic_helper_disable_plane" },
	{ 0x5ad383c6, "component_master_add_with_match" },
	{ 0x72072124, "platform_get_irq" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x13cb9254, "drm_kms_helper_poll_init" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0xc71329f7, "drm_poll" },
	{ 0x32fcf7a0, "drm_open" },
	{ 0xa98eccec, "drm_kms_helper_poll_fini" },
	{ 0x36243945, "drm_atomic_helper_plane_destroy_state" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Chisilicon,hi6220-ade");
MODULE_ALIAS("of:N*T*Chisilicon,hi6220-adeC*");
