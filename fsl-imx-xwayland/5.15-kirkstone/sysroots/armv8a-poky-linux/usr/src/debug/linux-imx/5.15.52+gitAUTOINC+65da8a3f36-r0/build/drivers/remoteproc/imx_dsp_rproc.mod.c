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
	{ 0x8589a7f9, "rproc_elf_get_boot_addr" },
	{ 0xe9309a4a, "rproc_elf_sanity_check" },
	{ 0x9c4e29de, "rproc_elf_load_rsc_table" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xcc3a7a97, "rproc_del" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0xd30755fb, "__pm_runtime_resume" },
	{ 0x6f897585, "of_reserved_mem_lookup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9806aa54, "of_phandle_iterator_next" },
	{ 0x170d1933, "of_phandle_iterator_init" },
	{ 0x61e2d100, "rproc_add_carveout" },
	{ 0x533dad93, "rproc_coredump_add_segment" },
	{ 0xc9ba95fd, "rproc_mem_entry_init" },
	{ 0xa3983a7f, "devm_ioremap_wc" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xedc03953, "iounmap" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x6068903e, "rproc_free" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x751d5ac3, "device_link_del" },
	{ 0xc6c833a5, "dev_pm_domain_detach" },
	{ 0x52d5e01b, "syscon_regmap_lookup_by_phandle" },
	{ 0x2f333aab, "imx_scu_get_handle" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0x96f546d, "rproc_add" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xb73c7cbf, "devm_clk_get_optional" },
	{ 0x4d4b705d, "dev_pm_domain_attach_by_id" },
	{ 0xa039b716, "device_link_add" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x7e4212d9, "of_count_phandle_with_args" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xe894dc69, "rproc_alloc" },
	{ 0x6c29ed67, "rproc_of_parse_firmware" },
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0xa21db26d, "__pm_runtime_idle" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0x52f2850a, "imx_sc_pm_cpu_start" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xd67133f9, "rproc_da_to_va" },
	{ 0x87b47154, "rproc_vq_interrupt" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x563e1189, "mbox_send_message" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x7f3e258, "pm_runtime_force_suspend" },
	{ 0xe59574ea, "request_firmware_nowait" },
	{ 0x434f470d, "pm_runtime_force_resume" },
	{ 0x6091c17c, "mbox_free_channel" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x66ff0785, "mbox_request_channel_byname" },
	{ 0x629cfb2a, "of_get_property" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,imx8qxp-hifi4");
MODULE_ALIAS("of:N*T*Cfsl,imx8qxp-hifi4C*");
MODULE_ALIAS("of:N*T*Cfsl,imx8qm-hifi4");
MODULE_ALIAS("of:N*T*Cfsl,imx8qm-hifi4C*");
MODULE_ALIAS("of:N*T*Cfsl,imx8mp-hifi4");
MODULE_ALIAS("of:N*T*Cfsl,imx8mp-hifi4C*");
MODULE_ALIAS("of:N*T*Cfsl,imx8ulp-hifi4");
MODULE_ALIAS("of:N*T*Cfsl,imx8ulp-hifi4C*");
