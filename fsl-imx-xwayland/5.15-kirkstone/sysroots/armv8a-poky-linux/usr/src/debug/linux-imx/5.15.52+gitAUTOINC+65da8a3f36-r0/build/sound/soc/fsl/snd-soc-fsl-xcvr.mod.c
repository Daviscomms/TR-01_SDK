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
	{ 0xf9a482f9, "msleep" },
	{ 0x7f3e258, "pm_runtime_force_suspend" },
	{ 0x815588a6, "clk_enable" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0xa67fc6db, "snd_pcm_hw_constraint_step" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0x37cc11a0, "devm_snd_dmaengine_pcm_register" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x434f470d, "pm_runtime_force_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x7f8ed9b2, "sysfs_remove_group" },
	{ 0xbbe7cb7a, "__devm_reset_control_get" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x361254bf, "snd_soc_info_enum_double" },
	{ 0xee0221c8, "devm_platform_ioremap_resource_byname" },
	{ 0xa9360d85, "__devm_regmap_init_mmio_clk" },
	{ 0x3ab7ce39, "snd_pcm_hw_constraint_list" },
	{ 0xf77555cd, "__memcpy_toio" },
	{ 0x91b8044e, "sysfs_create_group" },
	{ 0x18b48e28, "__memset_io" },
	{ 0x457f1c1, "snd_ctl_notify" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xddbad75f, "snd_soc_get_pcm_runtime" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xd56e619e, "platform_get_resource_byname" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xec3da1d2, "regcache_mark_dirty" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x8c1743db, "request_firmware" },
	{ 0x72072124, "platform_get_irq" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x2fe318ac, "snd_soc_add_dai_controls" },
	{ 0x984afbc5, "regmap_write" },
	{ 0xf902797, "snd_soc_card_get_kcontrol" },
	{ 0x1e036ed0, "regcache_sync" },
	{ 0x1a2c5da8, "regcache_cache_only" },
	{ 0xc6d09aa9, "release_firmware" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,imx8mp-xcvr");
MODULE_ALIAS("of:N*T*Cfsl,imx8mp-xcvrC*");
MODULE_ALIAS("of:N*T*Cfsl,imx93-xcvr");
MODULE_ALIAS("of:N*T*Cfsl,imx93-xcvrC*");
