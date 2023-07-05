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
	{ 0xa3c70928, "kobject_put" },
	{ 0xc72b1653, "snd_soc_get_volsw_sx" },
	{ 0xa21db26d, "__pm_runtime_idle" },
	{ 0x7f3e258, "pm_runtime_force_suspend" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0xdc9a6fc6, "of_property_read_u32_index" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0x37cc11a0, "devm_snd_dmaengine_pcm_register" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x434f470d, "pm_runtime_force_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd30755fb, "__pm_runtime_resume" },
	{ 0x7c8fa292, "snd_soc_component_update_bits" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x589cd24c, "kobject_create_and_add" },
	{ 0xf3f8794d, "snd_soc_info_volsw_sx" },
	{ 0x361254bf, "snd_soc_info_enum_double" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xa9360d85, "__devm_regmap_init_mmio_clk" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x3ab7ce39, "snd_pcm_hw_constraint_list" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0x9166fada, "strncpy" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xa7ea3d59, "kobject_uevent_env" },
	{ 0x8b149c36, "clk_is_match" },
	{ 0x44f81556, "_dev_info" },
	{ 0x9f71a7c5, "snd_soc_get_enum_double" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xec3da1d2, "regcache_mark_dirty" },
	{ 0xc3319526, "snd_soc_put_enum_double" },
	{ 0x72072124, "platform_get_irq" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xc4e20f3a, "devm_platform_get_and_ioremap_resource" },
	{ 0x66c4e518, "sysfs_create_file_ns" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x5f401c18, "snd_soc_put_volsw_sx" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x984afbc5, "regmap_write" },
	{ 0x1e036ed0, "regcache_sync" },
	{ 0x1a2c5da8, "regcache_cache_only" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,imx8mm-micfil");
MODULE_ALIAS("of:N*T*Cfsl,imx8mm-micfilC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8mp-micfil");
MODULE_ALIAS("of:N*T*Cfsl,imx8mp-micfilC*");
MODULE_ALIAS("of:N*T*Cfsl,imx93-micfil");
MODULE_ALIAS("of:N*T*Cfsl,imx93-micfilC*");
