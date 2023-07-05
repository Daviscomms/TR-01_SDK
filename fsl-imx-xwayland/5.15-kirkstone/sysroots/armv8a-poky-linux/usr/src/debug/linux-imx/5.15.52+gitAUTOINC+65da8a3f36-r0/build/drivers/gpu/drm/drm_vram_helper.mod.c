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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc30f8a7c, "module_layout" },
	{ 0x2ddf802, "drm_gem_ttm_print_info" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x149d21ec, "ttm_bo_eviction_valuable" },
	{ 0xc2ade11b, "drm_gem_plane_helper_prepare_fb" },
	{ 0x13b93e04, "ttm_device_fini" },
	{ 0x64593f9e, "ttm_tt_fini" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x776cb622, "ttm_bo_move_memcpy" },
	{ 0x1f5ffb96, "ttm_bo_vmap" },
	{ 0xddd26a31, "ttm_bo_put" },
	{ 0xcfa8675f, "ttm_bo_move_to_lru_tail" },
	{ 0xc0834b0e, "ttm_bo_validate" },
	{ 0xbbcbcf2a, "ttm_bo_init" },
	{ 0x9bc3bd9b, "ttm_device_init" },
	{ 0x56470118, "__warn_printk" },
	{ 0x513072fe, "__drm_puts_seq_file" },
	{ 0x43efd458, "drm_gem_handle_create" },
	{ 0xb6356009, "ttm_tt_init" },
	{ 0x2efa9961, "ww_mutex_lock" },
	{ 0xf21417aa, "drm_gem_object_release" },
	{ 0xd4c78643, "drm_debugfs_create_files" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0x1e46fc2, "ttm_range_man_init" },
	{ 0xf5717b7f, "ttm_bo_vunmap" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0xbc1621ff, "ttm_tt_destroy_common" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x79f403f3, "__drmm_add_action_or_reset" },
	{ 0xe1218223, "drm_gem_ttm_mmap" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x6fbb1e42, "dev_driver_string" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xfeb953b1, "__drm_printfn_seq_file" },
	{ 0xd483287, "drm_gem_object_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x481d9493, "ww_mutex_unlock" },
	{ 0x13b5062e, "ttm_range_man_fini" },
	{ 0x67f101f9, "ttm_resource_manager_debug" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x45b71080, "ww_mutex_lock_interruptible" },
};

MODULE_INFO(depends, "drm_ttm_helper,ttm");

