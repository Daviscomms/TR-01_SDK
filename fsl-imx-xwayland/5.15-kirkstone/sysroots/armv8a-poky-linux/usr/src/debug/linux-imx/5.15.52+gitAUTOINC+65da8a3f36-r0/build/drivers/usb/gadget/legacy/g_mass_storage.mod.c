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
	{ 0xab6c68ac, "fsg_config_from_params" },
	{ 0x1ccb58f7, "fsg_common_set_num_buffers" },
	{ 0x6acb4179, "fsg_common_set_inquiry_string" },
	{ 0xc358f6fb, "usb_add_config" },
	{ 0x141fce2a, "fsg_common_remove_luns" },
	{ 0xc264d4ce, "param_ops_bool" },
	{ 0xce7c2fb7, "usb_otg_descriptor_init" },
	{ 0x9a0221c7, "fsg_common_free_buffers" },
	{ 0xa0d2ef8e, "param_ops_charp" },
	{ 0xfe7f5494, "fsg_common_set_cdev" },
	{ 0x73939682, "usb_put_function_instance" },
	{ 0x94ef4d05, "usb_otg_descriptor_alloc" },
	{ 0xbd0a2588, "usb_composite_overwrite_options" },
	{ 0x44f81556, "_dev_info" },
	{ 0x7a185164, "usb_composite_probe" },
	{ 0xbfa547d7, "usb_add_function" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xd1a3e8e0, "fsg_common_create_luns" },
	{ 0x109de21e, "usb_put_function" },
	{ 0xa22dc9ff, "usb_composite_unregister" },
	{ 0xb68ff4d4, "usb_get_function" },
	{ 0x37a0cba, "kfree" },
	{ 0xd1324faa, "usb_string_ids_tab" },
	{ 0xdd219cdf, "param_array_ops" },
	{ 0xbe51749f, "usb_get_function_instance" },
	{ 0x7e26d4a5, "fsg_common_set_sysfs" },
	{ 0xfce3492c, "param_ops_ushort" },
	{ 0xb61632ee, "param_ops_uint" },
};

MODULE_INFO(depends, "");

