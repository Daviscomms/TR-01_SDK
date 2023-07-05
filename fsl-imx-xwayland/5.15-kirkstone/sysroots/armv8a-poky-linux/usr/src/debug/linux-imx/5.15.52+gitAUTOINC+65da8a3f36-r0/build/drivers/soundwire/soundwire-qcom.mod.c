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
	{ 0x815588a6, "clk_enable" },
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0xda5bce09, "sdw_release_stream" },
	{ 0x47d433d, "sdw_bus_master_delete" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xd4683087, "of_irq_get" },
	{ 0x86bc8961, "regmap_bulk_read" },
	{ 0x60e31fbb, "sdw_find_col_index" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x51a7435d, "regmap_bulk_write" },
	{ 0x10042960, "sdw_stream_add_master" },
	{ 0xf5ca1375, "devm_kasprintf" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x2772b215, "of_property_read_variable_u8_array" },
	{ 0xdcb764ad, "memset" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x91f84a89, "dev_get_regmap" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x77c92d79, "sdw_stream_remove_master" },
	{ 0x44f81556, "_dev_info" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x87fb4bb0, "sdw_extract_slave_id" },
	{ 0x81276bf4, "slimbus_bus" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0x13f40add, "sdw_handle_slave_status" },
	{ 0x9e122d79, "sdw_alloc_stream" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x1deee061, "sdw_find_row_index" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x4b67d96c, "sdw_bus_master_add" },
	{ 0xa6257a2f, "complete" },
	{ 0xe613f787, "sdw_compare_devid" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x24650ce9, "devm_platform_ioremap_resource" },
	{ 0xd4280655, "sdw_slave_add" },
};

MODULE_INFO(depends, "soundwire-bus,slimbus");

MODULE_ALIAS("of:N*T*Cqcom,soundwire-v1.3.0");
MODULE_ALIAS("of:N*T*Cqcom,soundwire-v1.3.0C*");
MODULE_ALIAS("of:N*T*Cqcom,soundwire-v1.5.1");
MODULE_ALIAS("of:N*T*Cqcom,soundwire-v1.5.1C*");
