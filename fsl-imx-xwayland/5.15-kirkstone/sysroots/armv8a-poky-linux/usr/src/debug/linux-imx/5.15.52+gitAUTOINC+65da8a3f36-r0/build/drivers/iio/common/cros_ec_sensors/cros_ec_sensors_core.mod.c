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
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb966f624, "iio_trigger_notify_done" },
	{ 0x39013b15, "cros_ec_sensorhub_unregister_push_data" },
	{ 0xfd6815a6, "iio_device_get_clock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc2f2c997, "cros_ec_sensorhub_register_push_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x26f6b499, "iio_str_to_fixpoint" },
	{ 0x85f1391f, "iio_device_set_clock" },
	{ 0xeac81ca8, "iio_get_time_ns" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6c0dca5a, "devm_add_action" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xb64f5d98, "cros_ec_check_features" },
	{ 0x6a73beaa, "devm_iio_kfifo_buffer_setup_ext" },
	{ 0x3a113a37, "cros_ec_cmd_xfer_status" },
	{ 0x4829a47e, "memcpy" },
	{ 0x96500a64, "iio_push_to_buffers" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3fc5ec0d, "devm_iio_triggered_buffer_setup_ext" },
	{ 0x9b70a0e2, "devm_kmalloc" },
};

MODULE_INFO(depends, "");

