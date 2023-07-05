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
	{ 0x2f4e43f, "platform_device_register_full" },
	{ 0xd8fe547b, "dw_hdmi_audio_enable" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x2fac9436, "dw_hdmi_set_channel_allocation" },
	{ 0x9340e05, "dw_hdmi_set_channel_count" },
	{ 0x1461e227, "dw_hdmi_set_channel_status" },
	{ 0x8dcd6f43, "dw_hdmi_set_sample_rate" },
	{ 0xce27012a, "dw_hdmi_audio_disable" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x3a9a8db5, "of_graph_parse_endpoint" },
	{ 0xae1ef211, "dw_hdmi_set_plugged_cb" },
	{ 0xf3cf0571, "platform_device_unregister" },
};

MODULE_INFO(depends, "");

