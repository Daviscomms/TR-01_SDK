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
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x984afbc5, "regmap_write" },
	{ 0x648ef408, "devm_pwmchip_add" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0xa9360d85, "__devm_regmap_init_mmio_clk" },
	{ 0x24650ce9, "devm_platform_ioremap_resource" },
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x1e036ed0, "regcache_sync" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xec3da1d2, "regcache_mark_dirty" },
	{ 0x1a2c5da8, "regcache_cache_only" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,vf610-ftm-pwm");
MODULE_ALIAS("of:N*T*Cfsl,vf610-ftm-pwmC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8qm-ftm-pwm");
MODULE_ALIAS("of:N*T*Cfsl,imx8qm-ftm-pwmC*");
