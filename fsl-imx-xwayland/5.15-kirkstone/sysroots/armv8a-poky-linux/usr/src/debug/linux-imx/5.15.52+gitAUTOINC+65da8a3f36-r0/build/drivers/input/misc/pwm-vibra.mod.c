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
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x1857d1a0, "regulator_disable" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x250ebd23, "regulator_enable" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x7a01e352, "input_register_device" },
	{ 0xf566f866, "input_ff_create_memless" },
	{ 0x89beed27, "input_set_capability" },
	{ 0x62b91460, "device_property_read_u32_array" },
	{ 0xea466442, "pwm_apply_state" },
	{ 0xdd09ea29, "devm_pwm_get" },
	{ 0x9b26d69f, "devm_regulator_get" },
	{ 0x7c58f0f2, "devm_input_allocate_device" },
	{ 0x9b70a0e2, "devm_kmalloc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cpwm-vibrator");
MODULE_ALIAS("of:N*T*Cpwm-vibratorC*");
