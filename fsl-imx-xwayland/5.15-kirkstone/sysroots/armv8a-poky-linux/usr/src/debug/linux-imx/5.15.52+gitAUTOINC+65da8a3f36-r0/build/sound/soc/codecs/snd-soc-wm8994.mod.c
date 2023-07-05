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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa21db26d, "__pm_runtime_idle" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x815588a6, "clk_enable" },
	{ 0x21ef374c, "try_wait_for_completion" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0x8196cf89, "regmap_raw_write" },
	{ 0x7e6830f8, "snd_soc_dapm_get_enum_double" },
	{ 0xea124bd1, "gcd" },
	{ 0x784367e4, "snd_soc_dapm_get_volsw" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0xcdb6a3f0, "_dev_crit" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe2c3a724, "snd_soc_dapm_new_controls" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd30755fb, "__pm_runtime_resume" },
	{ 0x7c8fa292, "snd_soc_component_update_bits" },
	{ 0xe169ff15, "snd_soc_put_volsw" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0x51bd7921, "wm_hubs_handle_analogue_pdata" },
	{ 0xab32d734, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x361254bf, "snd_soc_info_enum_double" },
	{ 0x22833452, "snd_soc_dapm_kcontrol_dapm" },
	{ 0x4595eb04, "devm_clk_bulk_get_optional" },
	{ 0x3ddf8700, "snd_soc_dapm_add_routes" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xce58027b, "wm_hubs_set_bias_level" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe4185cae, "snd_soc_add_component_controls" },
	{ 0xf16b9558, "snd_soc_dapm_disable_pin_unlocked" },
	{ 0x26d65396, "snd_soc_bytes_info" },
	{ 0xf357f9a3, "snd_soc_dapm_force_bias_level" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x366165fa, "snd_soc_dapm_put_volsw" },
	{ 0x78260013, "wm_hubs_vmid_ena" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd0654250, "wm_hubs_hpl_mux" },
	{ 0xe59574ea, "request_firmware_nowait" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xf7db912, "snd_soc_info_volsw" },
	{ 0xafc5dd4d, "snd_soc_component_init_regmap" },
	{ 0xf2777225, "wm_hubs_update_class_w" },
	{ 0x44f81556, "_dev_info" },
	{ 0x1af342f2, "wm_hubs_add_analogue_controls" },
	{ 0x9f71a7c5, "snd_soc_get_enum_double" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xd750925e, "pm_wakeup_dev_event" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0x47665949, "snd_soc_dapm_sync" },
	{ 0xf2898cac, "snd_soc_component_write" },
	{ 0x5cd7eb9b, "wm_hubs_dcs_done" },
	{ 0x19aec80c, "snd_soc_dapm_force_enable_pin_unlocked" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xc3319526, "snd_soc_put_enum_double" },
	{ 0xf011abd6, "snd_soc_dapm_force_enable_pin" },
	{ 0x58b454ff, "snd_soc_dapm_disable_pin" },
	{ 0x1396360e, "wm_hubs_add_analogue_routes" },
	{ 0xecff0c7c, "snd_soc_dapm_sync_unlocked" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa2f6e01, "snd_soc_bytes_get" },
	{ 0x4829a47e, "memcpy" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa419a9ac, "snd_soc_component_read" },
	{ 0x1eb57085, "snd_soc_bytes_put" },
	{ 0x71937f16, "snd_soc_jack_report" },
	{ 0xa6257a2f, "complete" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x757206d5, "wm_hubs_spkmix_tlv" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xe9b921bb, "wm_hubs_hpr_mux" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4d4bc70c, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-wm-hubs");

