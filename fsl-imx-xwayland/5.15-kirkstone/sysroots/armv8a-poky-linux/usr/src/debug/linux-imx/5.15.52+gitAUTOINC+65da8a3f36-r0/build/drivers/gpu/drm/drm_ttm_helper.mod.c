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
	{ 0x1f5ffb96, "ttm_bo_vmap" },
	{ 0xde4f5420, "ttm_bo_mmap_obj" },
	{ 0x28779e52, "drm_printf" },
	{ 0x32a0cc37, "drm_print_bits" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0xf5717b7f, "ttm_bo_vunmap" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa036707b, "drm_gem_object_lookup" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "ttm");

