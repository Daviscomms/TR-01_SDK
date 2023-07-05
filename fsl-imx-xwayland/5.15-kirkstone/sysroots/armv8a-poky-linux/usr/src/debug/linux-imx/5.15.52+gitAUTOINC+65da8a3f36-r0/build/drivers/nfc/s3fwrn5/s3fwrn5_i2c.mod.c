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
	{ 0x6963aba3, "s3fwrn5_recv_frame" },
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0x19604b69, "dev_err_probe" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb73c7cbf, "devm_clk_get_optional" },
	{ 0x774203fc, "s3fwrn5_phy_set_wake" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xece60d8, "s3fwrn5_phy_power_ctrl" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x29f8b44f, "devm_gpio_request_one" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0x645f857, "__alloc_skb" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb7f4b8e1, "s3fwrn5_remove" },
	{ 0xf3dec445, "of_get_named_gpio_flags" },
	{ 0x1cc985ec, "s3fwrn5_probe" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x11a02234, "i2c_transfer_buffer_flags" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf2ab60da, "s3fwrn5_phy_get_mode" },
	{ 0x1a7137b5, "skb_put" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xf718b910, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "s3fwrn5");

MODULE_ALIAS("i2c:s3fwrn5_i2c");
MODULE_ALIAS("of:N*T*Csamsung,s3fwrn5-i2c");
MODULE_ALIAS("of:N*T*Csamsung,s3fwrn5-i2cC*");
