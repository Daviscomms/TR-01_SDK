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
	{ 0xdd95980, "simple_open" },
	{ 0xd7c819c6, "simple_attr_release" },
	{ 0xfdec5bb, "simple_attr_write" },
	{ 0xf8b47f77, "simple_attr_read" },
	{ 0x6e476e9e, "generic_file_llseek" },
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3b235e89, "debugfs_create_file" },
	{ 0x462a5c1, "debugfs_create_u16" },
	{ 0x911e4d96, "debugfs_create_dir" },
	{ 0x6fbb1e42, "dev_driver_string" },
	{ 0x7a01e352, "input_register_device" },
	{ 0x5de00742, "devm_device_add_group" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0xcbfc96c9, "irq_get_irq_data" },
	{ 0xa30b6120, "input_mt_init_slots" },
	{ 0xc9778c93, "touchscreen_parse_properties" },
	{ 0xf9052fc7, "input_set_abs_params" },
	{ 0x62b91460, "device_property_read_u32_array" },
	{ 0x5792f848, "strlcpy" },
	{ 0x349cba85, "strchr" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7c58f0f2, "devm_input_allocate_device" },
	{ 0xbf5c563f, "devm_gpiod_get_optional" },
	{ 0x6c0dca5a, "devm_add_action" },
	{ 0x9b26d69f, "devm_regulator_get" },
	{ 0x87ae3dce, "device_get_match_data" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xe5832400, "touchscreen_report_pos" },
	{ 0x9fbf6d4e, "input_mt_report_pointer_emulation" },
	{ 0x8e06ada6, "input_mt_report_slot_state" },
	{ 0xb2dc47b0, "input_event" },
	{ 0xdcb764ad, "memset" },
	{ 0x96848186, "scnprintf" },
	{ 0xf9a482f9, "msleep" },
	{ 0x250ebd23, "regulator_enable" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe3f4d0d8, "gpiod_set_value_cansleep" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xc3c116d9, "i2c_transfer" },
	{ 0x9c9a1480, "simple_attr_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x694f5df8, "debugfs_remove" },
	{ 0x1857d1a0, "regulator_disable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cedt,edt-ft5206");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5206C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506C*");
MODULE_ALIAS("of:N*T*Cevervision,ev-ft5726");
MODULE_ALIAS("of:N*T*Cevervision,ev-ft5726C*");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236C*");
MODULE_ALIAS("i2c:edt-ft5x06");
MODULE_ALIAS("i2c:edt-ft5506");
MODULE_ALIAS("i2c:ev-ft5726");
MODULE_ALIAS("i2c:ft6236");
