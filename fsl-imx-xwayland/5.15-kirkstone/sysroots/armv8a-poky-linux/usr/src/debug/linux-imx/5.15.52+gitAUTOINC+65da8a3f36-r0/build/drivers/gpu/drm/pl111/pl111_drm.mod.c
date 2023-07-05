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
	{ 0xf9a482f9, "msleep" },
	{ 0x2b860f2e, "amba_driver_register" },
	{ 0xcd723c3e, "drm_dev_register" },
	{ 0x354f3f52, "drm_compat_ioctl" },
	{ 0x815588a6, "clk_enable" },
	{ 0x759c600, "of_find_matching_node_and_match" },
	{ 0x9600a72f, "drm_crtc_arm_vblank_event" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x6bdd324d, "of_find_node_opts_by_path" },
	{ 0xcf5cda4b, "drm_dev_alloc" },
	{ 0xb6e744ca, "drm_mode_config_reset" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x55d6aaa9, "clk_hw_get_parent" },
	{ 0xf2578039, "drm_crtc_handle_vblank" },
	{ 0x6d7399bf, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x68ebb4c0, "drm_crtc_vblank_off" },
	{ 0x78a0680d, "devm_ioremap_resource" },
	{ 0xe2375191, "drm_of_find_panel_or_bridge" },
	{ 0x1253cdb6, "drm_fb_cma_get_gem_addr" },
	{ 0x9fd0b672, "of_device_is_compatible" },
	{ 0x6350dd8, "drm_vblank_init" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0x79a66d52, "drm_simple_display_pipe_init" },
	{ 0xf25ef608, "of_reserved_mem_device_init_by_idx" },
	{ 0xb02ca513, "drm_fbdev_generic_setup" },
	{ 0x1c9a6f3f, "drm_dev_put" },
	{ 0x49b7afb3, "drm_dev_unregister" },
	{ 0x4edd4629, "drm_gem_cma_dumb_create" },
	{ 0x79eeb790, "of_graph_get_next_endpoint" },
	{ 0x5dd382cb, "drm_gem_fb_create" },
	{ 0xeeb8d8fb, "drm_crtc_vblank_on" },
	{ 0x9e707a, "syscon_node_to_regmap" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x170a16e2, "drm_read" },
	{ 0x8e1a37f7, "noop_llseek" },
	{ 0xe2994ade, "drm_panel_bridge_connector" },
	{ 0x64a00610, "drm_panel_bridge_add_typed" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xd4c78643, "drm_debugfs_create_files" },
	{ 0xe9279079, "drm_gem_prime_fd_to_handle" },
	{ 0xa2d7c746, "clk_hw_round_rate" },
	{ 0xf3d0638, "drm_ioctl" },
	{ 0x44f81556, "_dev_info" },
	{ 0xd791bab4, "drm_gem_mmap" },
	{ 0xed8c7070, "of_reserved_mem_device_release" },
	{ 0x13c219b2, "drm_atomic_helper_check" },
	{ 0x70413336, "drm_atomic_helper_commit" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x949908f0, "drm_crtc_send_vblank_event" },
	{ 0xda084e5a, "drm_crtc_vblank_get" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x13854a6, "drmm_mode_config_init" },
	{ 0x1e8c483e, "of_get_next_available_child" },
	{ 0x54f24595, "drm_gem_prime_handle_to_fd" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x71dd4178, "drm_panel_bridge_remove" },
	{ 0xf5320217, "drm_gem_cma_prime_import_sg_table" },
	{ 0x4cee710f, "devm_clk_hw_register" },
	{ 0xd5f1bc5c, "devm_regmap_init_vexpress_config" },
	{ 0x40fbdf12, "drm_gem_prime_mmap" },
	{ 0x9af6d26e, "drm_simple_display_pipe_attach_bridge" },
	{ 0x125dc740, "amba_driver_unregister" },
	{ 0x65755402, "of_find_device_by_node" },
	{ 0x13cb9254, "drm_kms_helper_poll_init" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x984afbc5, "regmap_write" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0xc71329f7, "drm_poll" },
	{ 0x32fcf7a0, "drm_open" },
	{ 0x38b64d91, "platform_device_put" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("amba:d???41110");
MODULE_ALIAS("amba:d??18011[01]");
MODULE_ALIAS("amba:d???41111");
