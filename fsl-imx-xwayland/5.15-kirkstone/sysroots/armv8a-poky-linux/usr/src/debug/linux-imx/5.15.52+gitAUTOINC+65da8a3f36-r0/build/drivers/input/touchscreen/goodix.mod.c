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
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0xc7cf727b, "is_acpi_device_node" },
	{ 0xe59574ea, "request_firmware_nowait" },
	{ 0xf5ca1375, "devm_kasprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x6c0dca5a, "devm_add_action" },
	{ 0x250ebd23, "regulator_enable" },
	{ 0xbf5c563f, "devm_gpiod_get_optional" },
	{ 0x9b26d69f, "devm_regulator_get" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x44f81556, "_dev_info" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xde635df0, "devm_free_irq" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe5832400, "touchscreen_report_pos" },
	{ 0x8e06ada6, "input_mt_report_slot_state" },
	{ 0xb2dc47b0, "input_event" },
	{ 0xf82efb8, "input_mt_sync_frame" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x9657bc0e, "input_alloc_absinfo" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x9b72ce26, "device_property_present" },
	{ 0x7a01e352, "input_register_device" },
	{ 0xa30b6120, "input_mt_init_slots" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xc9778c93, "touchscreen_parse_properties" },
	{ 0xf9052fc7, "input_set_abs_params" },
	{ 0x89beed27, "input_set_capability" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x7c58f0f2, "devm_input_allocate_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8447263a, "gpiod_direction_input" },
	{ 0xb24e5922, "gpiod_direction_output_raw" },
	{ 0x97b95915, "gpiod_direction_output" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x1857d1a0, "regulator_disable" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3c116d9, "i2c_transfer" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe04c476a, "_dev_err" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgoodix,gt1151");
MODULE_ALIAS("of:N*T*Cgoodix,gt1151C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt5663");
MODULE_ALIAS("of:N*T*Cgoodix,gt5663C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt5688");
MODULE_ALIAS("of:N*T*Cgoodix,gt5688C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt911");
MODULE_ALIAS("of:N*T*Cgoodix,gt911C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9110");
MODULE_ALIAS("of:N*T*Cgoodix,gt9110C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt912");
MODULE_ALIAS("of:N*T*Cgoodix,gt912C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9147");
MODULE_ALIAS("of:N*T*Cgoodix,gt9147C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt917s");
MODULE_ALIAS("of:N*T*Cgoodix,gt917sC*");
MODULE_ALIAS("of:N*T*Cgoodix,gt927");
MODULE_ALIAS("of:N*T*Cgoodix,gt927C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9271");
MODULE_ALIAS("of:N*T*Cgoodix,gt9271C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt928");
MODULE_ALIAS("of:N*T*Cgoodix,gt928C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9286");
MODULE_ALIAS("of:N*T*Cgoodix,gt9286C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt967");
MODULE_ALIAS("of:N*T*Cgoodix,gt967C*");
MODULE_ALIAS("acpi*:GDIX1001:*");
MODULE_ALIAS("acpi*:GDIX1002:*");
MODULE_ALIAS("i2c:GDIX1001:00");
