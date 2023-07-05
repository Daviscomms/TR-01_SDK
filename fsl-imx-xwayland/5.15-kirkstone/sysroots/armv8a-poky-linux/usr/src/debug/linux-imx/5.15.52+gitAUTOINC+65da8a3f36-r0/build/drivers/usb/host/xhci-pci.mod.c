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
	{ 0x57578c57, "usb_hcd_pci_pm_ops" },
	{ 0x47c63440, "usb_hcd_pci_shutdown" },
	{ 0xc6b35586, "pci_unregister_driver" },
	{ 0x8103ee83, "__pci_register_driver" },
	{ 0x1cb14481, "xhci_init_driver" },
	{ 0xd3256461, "pm_runtime_allow" },
	{ 0xa0e6f23c, "usb_add_hcd" },
	{ 0x35278f1a, "renesas_xhci_check_request_fw" },
	{ 0x2a0ed8fe, "xhci_ext_cap_init" },
	{ 0x7ccda2a4, "usb_create_shared_hcd" },
	{ 0x4077aec4, "usb_hcd_pci_probe" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xbbe7cb7a, "__devm_reset_control_get" },
	{ 0x37a0cba, "kfree" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0xc7cf727b, "is_acpi_device_node" },
	{ 0x838e5ca, "pci_read_config_byte" },
	{ 0x9ebf21ad, "pci_set_mwi" },
	{ 0xd6113b79, "xhci_gen_setup" },
	{ 0xaf4014ff, "usb_amd_quirk_pll_check" },
	{ 0xc2626222, "xhci_dbg_trace" },
	{ 0x9f0af03d, "pci_match_id" },
	{ 0xb22a5ffe, "pci_d3cold_disable" },
	{ 0x833249c4, "xhci_suspend" },
	{ 0xbe4dcad8, "usb_enable_intel_xhci_ports" },
	{ 0x36e2b942, "xhci_resume" },
	{ 0x24f39c39, "reset_control_reset" },
	{ 0x69e0f297, "xhci_shutdown" },
	{ 0xe5aa448a, "pci_set_power_state" },
	{ 0x8740a752, "pm_runtime_forbid" },
	{ 0x830b4fd4, "usb_hcd_pci_remove" },
	{ 0xfd93f767, "usb_put_hcd" },
	{ 0x27808fa9, "usb_remove_hcd" },
	{ 0x4bcce95f, "usb_hcd_is_primary_hcd" },
};

MODULE_INFO(depends, "xhci-pci-renesas");

MODULE_ALIAS("pci:v00001912d00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001912d00000015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc03i30*");
