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
	{ 0x91b8044e, "sysfs_create_group" },
	{ 0x62b91460, "device_property_read_u32_array" },
	{ 0x5508ddd9, "regulator_bulk_enable" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0xbf5c563f, "devm_gpiod_get_optional" },
	{ 0x4cbe04ee, "devm_regulator_bulk_get" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xc7cf727b, "is_acpi_device_node" },
	{ 0x9b72ce26, "device_property_present" },
	{ 0x8c1743db, "request_firmware" },
	{ 0xe59574ea, "request_firmware_nowait" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x7a01e352, "input_register_device" },
	{ 0x4dd0765b, "input_free_device" },
	{ 0xa30b6120, "input_mt_init_slots" },
	{ 0x9657bc0e, "input_alloc_absinfo" },
	{ 0xf9052fc7, "input_set_abs_params" },
	{ 0x89beed27, "input_set_capability" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x5d4ee162, "input_allocate_device" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x5a921311, "strncmp" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x44f81556, "_dev_info" },
	{ 0x64575cd5, "regulator_bulk_disable" },
	{ 0x74bb8319, "input_unregister_device" },
	{ 0x7f8ed9b2, "sysfs_remove_group" },
	{ 0xb95bc595, "gpiod_set_value" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc21ce109, "input_device_enabled" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x11a02234, "i2c_transfer_buffer_flags" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xcbfc96c9, "irq_get_irq_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0x96848186, "scnprintf" },
	{ 0x9fbf6d4e, "input_mt_report_pointer_emulation" },
	{ 0xa6257a2f, "complete" },
	{ 0x8e06ada6, "input_mt_report_slot_state" },
	{ 0xb2dc47b0, "input_event" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xc3c116d9, "i2c_transfer" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:qt602240_ts");
MODULE_ALIAS("i2c:atmel_mxt_ts");
MODULE_ALIAS("i2c:atmel_mxt_tp");
MODULE_ALIAS("i2c:maxtouch");
MODULE_ALIAS("i2c:mXT224");
MODULE_ALIAS("acpi*:ATML0000:*");
MODULE_ALIAS("acpi*:ATML0001:*");
MODULE_ALIAS("of:N*T*Catmel,maxtouch");
MODULE_ALIAS("of:N*T*Catmel,maxtouchC*");
MODULE_ALIAS("of:N*T*Catmel,qt602240_ts");
MODULE_ALIAS("of:N*T*Catmel,qt602240_tsC*");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_ts");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tsC*");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tp");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tpC*");
MODULE_ALIAS("of:N*T*Catmel,mXT224");
MODULE_ALIAS("of:N*T*Catmel,mXT224C*");
