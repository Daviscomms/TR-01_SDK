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
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0x95879b36, "__pm_runtime_use_autosuspend" },
	{ 0xf03a53f7, "snd_sof_suspend" },
	{ 0x8054d709, "snd_sof_device_probe" },
	{ 0xa0d2ef8e, "param_ops_charp" },
	{ 0x2867f3e1, "snd_sof_resume" },
	{ 0x877175e9, "snd_sof_runtime_suspend" },
	{ 0x87ae3dce, "device_get_match_data" },
	{ 0x6565a7b3, "snd_sof_complete" },
	{ 0x2383879c, "of_property_read_string" },
	{ 0xe261e213, "snd_sof_device_remove" },
	{ 0x64717be0, "snd_sof_runtime_resume" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x44f81556, "_dev_info" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0x2b1ba535, "__pm_runtime_set_status" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x782bb8de, "snd_sof_prepare" },
	{ 0x8ddd463a, "pm_runtime_set_autosuspend_delay" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "snd-sof");

