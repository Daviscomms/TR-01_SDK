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
	{ 0x434f470d, "pm_runtime_force_resume" },
	{ 0x7f3e258, "pm_runtime_force_suspend" },
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe0af715e, "regmap_field_read" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0xd0c830be, "devm_hwmon_device_register_with_info" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x2383879c, "of_property_read_string" },
	{ 0xa81cbb27, "of_device_is_available" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x1810fe3a, "of_get_next_child" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0xa7ddae6, "devm_regmap_field_alloc" },
	{ 0x201129d4, "__devm_regmap_init_i2c" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x2b1ba535, "__pm_runtime_set_status" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa21db26d, "__pm_runtime_idle" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0xd30755fb, "__pm_runtime_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x984afbc5, "regmap_write" },
	{ 0x1e036ed0, "regcache_sync" },
	{ 0xe9ea8873, "regmap_field_update_bits_base" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xec3da1d2, "regcache_mark_dirty" },
	{ 0x1a2c5da8, "regcache_cache_only" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0xab6dcbf2, "regmap_read" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:ina3221");
MODULE_ALIAS("of:N*T*Cti,ina3221");
MODULE_ALIAS("of:N*T*Cti,ina3221C*");
