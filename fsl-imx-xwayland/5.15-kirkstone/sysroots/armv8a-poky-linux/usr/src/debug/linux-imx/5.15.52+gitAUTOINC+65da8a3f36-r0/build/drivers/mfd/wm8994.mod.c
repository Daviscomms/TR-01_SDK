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
	{ 0xa21db26d, "__pm_runtime_idle" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0x131a5ed7, "regmap_del_irq_chip" },
	{ 0x58109104, "regmap_register_patch" },
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0xe009f34c, "mfd_remove_devices" },
	{ 0x610092b7, "gpio_to_desc" },
	{ 0x2067be17, "irq_create_mapping_affinity" },
	{ 0xd30755fb, "__pm_runtime_resume" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0xacd7a0d6, "handle_edge_irq" },
	{ 0x5508ddd9, "regulator_bulk_enable" },
	{ 0x9277ac02, "__irq_domain_add" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xc1bf5a7e, "regmap_reinit_cache" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x4efbbe19, "__irq_resolve_mapping" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0xf7d3fd7b, "regulator_bulk_get" },
	{ 0xdfd8c0e, "mfd_add_devices" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x19b6a6, "of_match_device" },
	{ 0x29f8b44f, "devm_gpio_request_one" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0xf7480a12, "gpiod_get_raw_value_cansleep" },
	{ 0xab14b535, "regmap_add_irq_chip" },
	{ 0x44f81556, "_dev_info" },
	{ 0x64575cd5, "regulator_bulk_disable" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0x1803521d, "irq_set_chip_and_handler_name" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x201129d4, "__devm_regmap_init_i2c" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x2b1ba535, "__pm_runtime_set_status" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xec3da1d2, "regcache_mark_dirty" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1316681a, "regcache_sync_region" },
	{ 0xbebe8185, "gpiod_to_irq" },
	{ 0xb091ad9, "regulator_bulk_free" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x984afbc5, "regmap_write" },
	{ 0x1e036ed0, "regcache_sync" },
	{ 0x1a2c5da8, "regcache_cache_only" },
	{ 0xf4011192, "irq_domain_xlate_twocell" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cwlf,wm1811");
MODULE_ALIAS("of:N*T*Cwlf,wm1811C*");
MODULE_ALIAS("of:N*T*Cwlf,wm8994");
MODULE_ALIAS("of:N*T*Cwlf,wm8994C*");
MODULE_ALIAS("of:N*T*Cwlf,wm8958");
MODULE_ALIAS("of:N*T*Cwlf,wm8958C*");
MODULE_ALIAS("i2c:wm1811");
MODULE_ALIAS("i2c:wm1811a");
MODULE_ALIAS("i2c:wm8994");
MODULE_ALIAS("i2c:wm8958");
