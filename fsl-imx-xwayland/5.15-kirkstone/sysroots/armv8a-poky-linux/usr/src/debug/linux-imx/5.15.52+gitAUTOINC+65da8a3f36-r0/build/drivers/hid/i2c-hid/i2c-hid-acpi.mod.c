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
	{ 0xc103ebe7, "i2c_hid_core_pm" },
	{ 0x9fc71ba, "i2c_hid_core_shutdown" },
	{ 0x52ca5f1a, "i2c_hid_core_remove" },
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xf0ba9bb8, "device_set_wakeup_enable" },
	{ 0x16e8c4bf, "device_set_wakeup_capable" },
	{ 0xd8df08ac, "acpi_handle_printk" },
	{ 0x46c4a1cb, "i2c_hid_core_probe" },
	{ 0x9f4f2aa3, "acpi_gbl_FADT" },
	{ 0x37a419de, "acpi_device_fix_up_power" },
	{ 0x37a0cba, "kfree" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0xfd4bc92c, "acpi_match_device_ids" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xc7cf727b, "is_acpi_device_node" },
	{ 0x356d704b, "acpi_device_set_power" },
};

MODULE_INFO(depends, "i2c-hid");

MODULE_ALIAS("acpi*:ACPI0C50:*");
MODULE_ALIAS("acpi*:PNP0C50:*");
