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
	{ 0xecdec901, "drm_release" },
	{ 0xcd723c3e, "drm_dev_register" },
	{ 0x354f3f52, "drm_compat_ioctl" },
	{ 0x3588a33d, "drm_get_edid" },
	{ 0x6445b735, "drm_atomic_helper_update_plane" },
	{ 0xc86bb222, "drm_atomic_helper_crtc_duplicate_state" },
	{ 0xba74370b, "pcim_enable_device" },
	{ 0xc2a138d0, "drm_mode_config_helper_resume" },
	{ 0xcee899cd, "drm_gem_vram_plane_helper_cleanup_fb" },
	{ 0xb6e744ca, "drm_mode_config_reset" },
	{ 0xfe31f7bf, "drm_atomic_helper_connector_reset" },
	{ 0x47cba08a, "drm_gem_ttm_dumb_map_offset" },
	{ 0x24391ed6, "drm_set_preferred_mode" },
	{ 0x12ff2380, "drm_atomic_helper_page_flip" },
	{ 0xa35ee84b, "drm_helper_probe_single_connector_modes" },
	{ 0x68ebb4c0, "drm_crtc_vblank_off" },
	{ 0x6350dd8, "drm_vblank_init" },
	{ 0xba6db478, "drm_simple_encoder_init" },
	{ 0x2338a04b, "drm_atomic_helper_crtc_reset" },
	{ 0xce2b8625, "drm_universal_plane_init" },
	{ 0x4af8e3aa, "drm_connector_cleanup" },
	{ 0x5abf3118, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x4dece5c6, "drmm_vram_helper_init" },
	{ 0xb02ca513, "drm_fbdev_generic_setup" },
	{ 0xbad2a2cc, "drm_atomic_helper_set_config" },
	{ 0xe155c2b8, "drm_handle_vblank" },
	{ 0xef04b7ae, "drm_connector_update_edid_property" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xc16d702, "__devm_drm_dev_alloc" },
	{ 0x49b7afb3, "drm_dev_unregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x12c87e6c, "drm_crtc_init_with_planes" },
	{ 0x7092e11, "drm_atomic_helper_plane_reset" },
	{ 0x5dd382cb, "drm_gem_fb_create" },
	{ 0xeeb8d8fb, "drm_crtc_vblank_on" },
	{ 0xa181831, "drm_vram_mm_debugfs_init" },
	{ 0xb059108e, "drm_vram_helper_mode_valid" },
	{ 0x170a16e2, "drm_read" },
	{ 0x8e1a37f7, "noop_llseek" },
	{ 0x50930fbc, "drm_add_edid_modes" },
	{ 0x817bc021, "drm_connector_init_with_ddc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xbb479485, "drm_mode_config_helper_suspend" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x149b42e7, "pci_enable_msi" },
	{ 0xddd1d989, "drm_gem_vram_plane_helper_prepare_fb" },
	{ 0x4067165a, "drm_gem_vram_fill_create_dumb" },
	{ 0x65971261, "drm_atomic_get_crtc_state" },
	{ 0xe473e1a8, "i2c_del_adapter" },
	{ 0xca634a9e, "drm_plane_cleanup" },
	{ 0xf3d0638, "drm_ioctl" },
	{ 0xd791bab4, "drm_gem_mmap" },
	{ 0xb778be87, "drm_atomic_helper_plane_duplicate_state" },
	{ 0x9cbea302, "drm_atomic_helper_connector_destroy_state" },
	{ 0x13c219b2, "drm_atomic_helper_check" },
	{ 0x70413336, "drm_atomic_helper_commit" },
	{ 0xd2e43987, "drm_connector_attach_encoder" },
	{ 0x949908f0, "drm_crtc_send_vblank_event" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xbdcd06fc, "drm_add_modes_noedid" },
	{ 0xc6b35586, "pci_unregister_driver" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x13854a6, "drmm_mode_config_init" },
	{ 0x6c7f9f6f, "drm_gem_vram_offset" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x475b05f9, "drm_crtc_cleanup" },
	{ 0x3988c9c6, "drm_atomic_helper_crtc_destroy_state" },
	{ 0x37a0cba, "kfree" },
	{ 0xca8d4be2, "pci_disable_msi" },
	{ 0x6969510b, "devm_ioremap" },
	{ 0x8103ee83, "__pci_register_driver" },
	{ 0xe925150f, "drm_atomic_helper_shutdown" },
	{ 0x40fbdf12, "drm_gem_prime_mmap" },
	{ 0x1f29d353, "drm_atomic_helper_disable_plane" },
	{ 0xb135e748, "i2c_bit_add_bus" },
	{ 0xb9b1db4c, "drm_dev_dbg" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x42cd4944, "drm_mode_crtc_set_gamma_size" },
	{ 0xc71329f7, "drm_poll" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x32fcf7a0, "drm_open" },
	{ 0x31f1f300, "drm_aperture_remove_conflicting_pci_framebuffers" },
	{ 0x36243945, "drm_atomic_helper_plane_destroy_state" },
};

MODULE_INFO(depends, "drm_vram_helper,drm_ttm_helper");

MODULE_ALIAS("pci:v000019E5d00001711sv*sd*bc*sc*i*");
