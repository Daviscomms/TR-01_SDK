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
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xb237bacd, "_dev_printk" },
	{ 0xbcde32ad, "param_ops_int" },
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0x5de50204, "drm_property_create_range" },
	{ 0xa35ee84b, "drm_helper_probe_single_connector_modes" },
	{ 0xdf4a68e8, "drm_object_property_set_value" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa0d2ef8e, "param_ops_charp" },
	{ 0x5c1e3f56, "drm_object_attach_property" },
	{ 0xd318edda, "drm_mode_duplicate" },
	{ 0x395ce962, "drm_mode_create_tv_properties" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0x44f81556, "_dev_info" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xbde65772, "drm_crtc_helper_set_mode" },
	{ 0x71b28973, "drm_i2c_encoder_destroy" },
	{ 0x11a02234, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0xd8e44444, "drm_property_destroy" },
	{ 0x7fb52449, "drm_mode_probed_add" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:ch7006");
