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
	{ 0x44f81556, "_dev_info" },
	{ 0x19604b69, "dev_err_probe" },
	{ 0xbebe8185, "gpiod_to_irq" },
	{ 0x6c0dca5a, "devm_add_action" },
	{ 0xd3354cd6, "extcon_set_property_capability" },
	{ 0xcc98b7bd, "devm_extcon_dev_register" },
	{ 0xa84bc091, "devm_extcon_dev_allocate" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x201129d4, "__devm_regmap_init_i2c" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc3201a50, "devm_gpiod_get" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xe3f4d0d8, "gpiod_set_value_cansleep" },
	{ 0x6f92a93, "extcon_set_state_sync" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0x3c12dfe, "cancel_work_sync" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:ptn5150");
MODULE_ALIAS("of:N*T*Cnxp,ptn5150");
MODULE_ALIAS("of:N*T*Cnxp,ptn5150C*");
