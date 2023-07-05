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
	{ 0xa21db26d, "__pm_runtime_idle" },
	{ 0x815588a6, "clk_enable" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0xf7d560c6, "snd_sof_load_firmware_memcpy" },
	{ 0x112e4e55, "of_parse_phandle" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0xa3983a7f, "devm_ioremap_wc" },
	{ 0x606afecd, "sof_ipc_pcm_params" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc7606d83, "snd_sof_dsp_panic" },
	{ 0xe5f98ab5, "sof_of_remove" },
	{ 0x855518b4, "sof_ipc_msg_data" },
	{ 0x8a95ef59, "sof_stream_pcm_close" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2f4e43f, "platform_device_register_full" },
	{ 0xb5f369cd, "snd_sof_ipc_reply" },
	{ 0x30239a23, "sof_stream_pcm_open" },
	{ 0xb73c7cbf, "devm_clk_get_optional" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x81de391e, "sof_fw_ready" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x4aa6aec4, "imx_dsp_request_channel" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdeb74ff0, "imx_dsp_ring_doorbell" },
	{ 0x472592c4, "snd_sof_ipc_msgs_rx" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2da9c344, "platform_get_resource" },
	{ 0xf3cf0571, "platform_device_unregister" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x2778403f, "sof_of_pm" },
	{ 0xd1fdfe47, "sof_mailbox_read" },
	{ 0xfc534018, "sof_mailbox_write" },
	{ 0xa1a612de, "imx_dsp_free_channel" },
	{ 0xdbc0dad1, "sof_io_read64" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xfc39e061, "sof_block_write" },
	{ 0x97e337dd, "snd_sof_parse_module_memcpy" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2b1ba535, "__pm_runtime_set_status" },
	{ 0xee6b71c4, "syscon_regmap_lookup_by_compatible" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x4cb07b4a, "sof_xtensa_arch_ops" },
	{ 0x6969510b, "devm_ioremap" },
	{ 0x154221ae, "of_address_to_resource" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x4955a679, "sof_of_probe" },
	{ 0xfc9e284, "imx8_dump" },
	{ 0xa0b28004, "sof_block_read" },
};

MODULE_INFO(depends, "snd-sof,snd-sof-of,snd-sof-xtensa-dsp,imx-common");

MODULE_ALIAS("of:N*T*Cfsl,imx8mp-dsp");
MODULE_ALIAS("of:N*T*Cfsl,imx8mp-dspC*");
