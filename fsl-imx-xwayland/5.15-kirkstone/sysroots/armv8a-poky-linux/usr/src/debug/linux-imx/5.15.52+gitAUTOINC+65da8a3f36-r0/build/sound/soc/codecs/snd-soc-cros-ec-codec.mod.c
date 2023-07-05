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
	{ 0x2d3385d3, "system_wq" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x67571a11, "cros_ec_get_host_event" },
	{ 0x112e4e55, "of_parse_phandle" },
	{ 0xaad2bfca, "snd_pcm_period_elapsed" },
	{ 0xa3983a7f, "devm_ioremap_wc" },
	{ 0xc4bca3e5, "snd_soc_bytes_tlv_callback" },
	{ 0x746b57e3, "snd_soc_set_runtime_hwparams" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe39b2ea5, "sha256" },
	{ 0x9ec000ff, "__of_get_address" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x4b223bc5, "snd_pcm_set_managed_buffer_all" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf77555cd, "__memcpy_toio" },
	{ 0x18b48e28, "__memset_io" },
	{ 0xe4185cae, "snd_soc_add_component_controls" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x7f6d659d, "snd_ctl_boolean_mono_info" },
	{ 0xf7db912, "snd_soc_info_volsw" },
	{ 0x44f81556, "_dev_info" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0x3a113a37, "cros_ec_cmd_xfer_status" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x154221ae, "of_address_to_resource" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xfcd50640, "snd_soc_bytes_info_ext" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgoogle,cros-ec-codec");
MODULE_ALIAS("of:N*T*Cgoogle,cros-ec-codecC*");
MODULE_ALIAS("acpi*:GOOG0013:*");
