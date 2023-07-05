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
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0x1857d1a0, "regulator_disable" },
	{ 0x610092b7, "gpio_to_desc" },
	{ 0xe169ff15, "snd_soc_put_volsw" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0xab32d734, "snd_soc_get_volsw" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xe4185cae, "snd_soc_add_component_controls" },
	{ 0xb24e5922, "gpiod_direction_output_raw" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xf7db912, "snd_soc_info_volsw" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0x9b26d69f, "devm_regulator_get" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x201129d4, "__devm_regmap_init_i2c" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0xf3dec445, "of_get_named_gpio_flags" },
	{ 0xec3da1d2, "regcache_mark_dirty" },
	{ 0xbb0713d7, "gpiod_set_raw_value" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x1aed1a93, "devm_gpio_request" },
	{ 0x1e036ed0, "regcache_sync" },
	{ 0x1a2c5da8, "regcache_cache_only" },
	{ 0x250ebd23, "regulator_enable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:tpa6130a2");
MODULE_ALIAS("i2c:tpa6140a2");
MODULE_ALIAS("of:N*T*Cti,tpa6130a2");
MODULE_ALIAS("of:N*T*Cti,tpa6130a2C*");
MODULE_ALIAS("of:N*T*Cti,tpa6140a2");
MODULE_ALIAS("of:N*T*Cti,tpa6140a2C*");
