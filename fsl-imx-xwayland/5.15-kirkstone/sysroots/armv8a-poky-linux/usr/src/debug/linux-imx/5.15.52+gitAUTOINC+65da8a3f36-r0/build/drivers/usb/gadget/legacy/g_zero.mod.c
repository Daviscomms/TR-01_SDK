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
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc264d4ce, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbe0c47e7, "usb_ep_autoconfig_reset" },
	{ 0xce7c2fb7, "usb_otg_descriptor_init" },
	{ 0xa0d2ef8e, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x73939682, "usb_put_function_instance" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x94ef4d05, "usb_otg_descriptor_alloc" },
	{ 0xbd0a2588, "usb_composite_overwrite_options" },
	{ 0x44f81556, "_dev_info" },
	{ 0x7a185164, "usb_composite_probe" },
	{ 0xbfa547d7, "usb_add_function" },
	{ 0x3b014e5f, "usb_gadget_wakeup" },
	{ 0x109de21e, "usb_put_function" },
	{ 0xa22dc9ff, "usb_composite_unregister" },
	{ 0xb68ff4d4, "usb_get_function" },
	{ 0x37a0cba, "kfree" },
	{ 0xd1324faa, "usb_string_ids_tab" },
	{ 0xd96f77cb, "usb_add_config_only" },
	{ 0xbe51749f, "usb_get_function_instance" },
	{ 0xfce3492c, "param_ops_ushort" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb61632ee, "param_ops_uint" },
};

MODULE_INFO(depends, "");

