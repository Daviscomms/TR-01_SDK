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
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe5832400, "touchscreen_report_pos" },
	{ 0x8e06ada6, "input_mt_report_slot_state" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xa6257a2f, "complete" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x243f23ef, "i2c_match_id" },
	{ 0x5de00742, "devm_device_add_group" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x7a01e352, "input_register_device" },
	{ 0xa30b6120, "input_mt_init_slots" },
	{ 0xc9778c93, "touchscreen_parse_properties" },
	{ 0xf9052fc7, "input_set_abs_params" },
	{ 0x7c58f0f2, "devm_input_allocate_device" },
	{ 0xe3f4d0d8, "gpiod_set_value_cansleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbf5c563f, "devm_gpiod_get_optional" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x87ae3dce, "device_get_match_data" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x11a02234, "i2c_transfer_buffer_flags" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdcb764ad, "memset" },
	{ 0xb2dc47b0, "input_event" },
	{ 0xf82efb8, "input_mt_sync_frame" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ceeti,exc3000");
MODULE_ALIAS("of:N*T*Ceeti,exc3000C*");
MODULE_ALIAS("of:N*T*Ceeti,exc80h60");
MODULE_ALIAS("of:N*T*Ceeti,exc80h60C*");
MODULE_ALIAS("of:N*T*Ceeti,exc80h84");
MODULE_ALIAS("of:N*T*Ceeti,exc80h84C*");
MODULE_ALIAS("i2c:exc3000");
MODULE_ALIAS("i2c:exc80h60");
MODULE_ALIAS("i2c:exc80h84");
