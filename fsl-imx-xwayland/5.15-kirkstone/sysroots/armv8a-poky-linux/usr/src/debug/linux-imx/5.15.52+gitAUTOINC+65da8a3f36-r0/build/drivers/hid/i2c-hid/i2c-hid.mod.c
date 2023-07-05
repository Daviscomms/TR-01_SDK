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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc30f8a7c, "module_layout" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x75a0c70d, "hid_add_device" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb237bacd, "_dev_printk" },
	{ 0xe24a08e8, "hid_parse_report" },
	{ 0xc3c116d9, "i2c_transfer" },
	{ 0xc264d4ce, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5495392, "hid_debug" },
	{ 0x13398361, "hid_input_report" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4951a527, "i2c_smbus_read_byte" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xcbfc96c9, "irq_get_irq_data" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92997ed8, "_printk" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x426cd86b, "hid_destroy_device" },
	{ 0x486c38f9, "hid_allocate_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x11a02234, "i2c_transfer_buffer_flags" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

