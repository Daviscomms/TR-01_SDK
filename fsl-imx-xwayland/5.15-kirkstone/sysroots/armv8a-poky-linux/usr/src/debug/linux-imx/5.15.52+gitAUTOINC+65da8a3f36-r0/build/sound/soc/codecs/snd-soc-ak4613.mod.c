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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7c8fa292, "snd_soc_component_update_bits" },
	{ 0xe169ff15, "snd_soc_put_volsw" },
	{ 0xab32d734, "snd_soc_get_volsw" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x3ab7ce39, "snd_pcm_hw_constraint_list" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x91f84a89, "dev_get_regmap" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x19b6a6, "of_match_device" },
	{ 0xf7db912, "snd_soc_info_volsw" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x201129d4, "__devm_regmap_init_i2c" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0xf2898cac, "snd_soc_component_write" },
	{ 0x629cfb2a, "of_get_property" },
	{ 0xec3da1d2, "regcache_mark_dirty" },
	{ 0xa419a9ac, "snd_soc_component_read" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x1e036ed0, "regcache_sync" },
	{ 0x1a2c5da8, "regcache_cache_only" },
	{ 0x9e7d6bd0, "__udelay" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Casahi-kasei,ak4613");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak4613C*");
MODULE_ALIAS("i2c:ak4613");
