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
	{ 0xbcde32ad, "param_ops_int" },
	{ 0x533ffcf9, "v4l2_ctrl_subdev_log_status" },
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4cf2b909, "au8522_readreg" },
	{ 0x31658d87, "au8522_writereg" },
	{ 0xc25a7d52, "v4l2_ctrl_new_std" },
	{ 0x61d3a67b, "v4l2_ctrl_handler_init_class" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xad815c91, "media_entity_pads_init" },
	{ 0x976a49d2, "v4l2_i2c_subdev_init" },
	{ 0x92997ed8, "_printk" },
	{ 0x340b595, "au8522_get_state" },
	{ 0x90856fcf, "au8522_release_state" },
	{ 0x8aa6a1a9, "v4l2_ctrl_handler_free" },
	{ 0x5836a496, "v4l2_device_unregister_subdev" },
};

MODULE_INFO(depends, "au8522_common");

MODULE_ALIAS("i2c:au8522");
