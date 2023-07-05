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
	{ 0xf9a482f9, "msleep" },
	{ 0x7e6830f8, "snd_soc_dapm_get_enum_double" },
	{ 0x784367e4, "snd_soc_dapm_get_volsw" },
	{ 0x56470118, "__warn_printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe2c3a724, "snd_soc_dapm_new_controls" },
	{ 0x7c8fa292, "snd_soc_component_update_bits" },
	{ 0xe169ff15, "snd_soc_put_volsw" },
	{ 0xab32d734, "snd_soc_get_volsw" },
	{ 0x361254bf, "snd_soc_info_enum_double" },
	{ 0x22833452, "snd_soc_dapm_kcontrol_dapm" },
	{ 0x3ddf8700, "snd_soc_dapm_add_routes" },
	{ 0xe4185cae, "snd_soc_add_component_controls" },
	{ 0x366165fa, "snd_soc_dapm_put_volsw" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xf7db912, "snd_soc_info_volsw" },
	{ 0x9f71a7c5, "snd_soc_get_enum_double" },
	{ 0xf2898cac, "snd_soc_component_write" },
	{ 0xc3319526, "snd_soc_put_enum_double" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa419a9ac, "snd_soc_component_read" },
	{ 0xa6257a2f, "complete" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x4d4bc70c, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "");

