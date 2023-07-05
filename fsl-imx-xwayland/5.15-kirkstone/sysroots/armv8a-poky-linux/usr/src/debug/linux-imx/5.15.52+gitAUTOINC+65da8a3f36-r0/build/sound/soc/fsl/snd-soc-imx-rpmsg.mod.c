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
	{ 0x5560e4a2, "devm_snd_soc_register_card" },
	{ 0xf6e5a2d8, "snd_soc_of_parse_card_name" },
	{ 0x19604b69, "dev_err_probe" },
	{ 0x2edabc40, "of_parse_phandle_with_fixed_args" },
	{ 0xb4dd5863, "snd_soc_pm_ops" },
	{ 0x9fd0b672, "of_device_is_compatible" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf25ef608, "of_reserved_mem_device_init_by_idx" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0x2383879c, "of_property_read_string" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x53edec36, "devm_get_clk_from_child" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xb38ec877, "snd_soc_dai_set_sysclk" },
	{ 0x4d6b6c15, "snd_soc_of_parse_audio_routing" },
	{ 0xeaeaa8c3, "snd_soc_card_jack_new" },
	{ 0x4e8ce49b, "snd_soc_get_dai_name" },
	{ 0x71937f16, "snd_soc_jack_report" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x9b70a0e2, "devm_kmalloc" },
};

MODULE_INFO(depends, "");

