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
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0xa5c36b8b, "of_clk_add_provider" },
	{ 0xe0600073, "of_clk_src_simple_get" },
	{ 0xd908f027, "clk_register" },
	{ 0x2383879c, "of_property_read_string" },
	{ 0x5290540d, "devm_rtc_device_register" },
	{ 0xcdc966f3, "device_init_wakeup" },
	{ 0x9b72ce26, "device_property_present" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x3508f8d7, "i2c_smbus_read_i2c_block_data" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xa92584e5, "i2c_smbus_write_i2c_block_data" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x9222bda4, "i2c_smbus_write_byte_data" },
	{ 0x156e258c, "i2c_smbus_read_byte_data" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Chaoyu,hym8563");
MODULE_ALIAS("of:N*T*Chaoyu,hym8563C*");
MODULE_ALIAS("i2c:hym8563");
