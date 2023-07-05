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
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x22ec5205, "cpu_latency_qos_remove_request" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x21f3afd8, "rpmsg_send" },
	{ 0x28afbb08, "cpu_latency_qos_add_request" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa6257a2f, "complete" },
	{ 0xf9edd8ce, "iio_push_event" },
	{ 0xeac81ca8, "iio_get_time_ns" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x44f81556, "_dev_info" },
	{ 0x3f0a4018, "iio_device_unregister" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xc2d15cdb, "__register_rpmsg_driver" },
	{ 0xc537c69e, "__iio_device_register" },
	{ 0xfc808083, "devm_iio_device_alloc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,rpmsg-iio-pedometer");
MODULE_ALIAS("of:N*T*Cnxp,rpmsg-iio-pedometerC*");
