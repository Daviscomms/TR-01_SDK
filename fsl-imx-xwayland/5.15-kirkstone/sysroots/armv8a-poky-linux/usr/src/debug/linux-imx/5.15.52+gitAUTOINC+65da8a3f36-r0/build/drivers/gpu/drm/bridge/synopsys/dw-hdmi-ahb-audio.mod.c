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
	{ 0x8ac15c5c, "snd_pcm_lib_get_vmalloc_page" },
	{ 0x16ec8f96, "snd_pcm_lib_ioctl" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xaad2bfca, "snd_pcm_period_elapsed" },
	{ 0xce27012a, "dw_hdmi_audio_disable" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xd8fe547b, "dw_hdmi_audio_enable" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf22e3e2c, "snd_pcm_hw_constraint_minmax" },
	{ 0xc8268547, "snd_pcm_hw_constraint_integer" },
	{ 0x69255f54, "snd_pcm_hw_limit_rates" },
	{ 0xb3a27818, "snd_pcm_hw_constraint_eld" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x18796bfc, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xb3824c72, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xdcb764ad, "memset" },
	{ 0x4d8fefeb, "snd_pcm_create_iec958_consumer" },
	{ 0x2fac9436, "dw_hdmi_set_channel_allocation" },
	{ 0x9340e05, "dw_hdmi_set_channel_count" },
	{ 0x8dcd6f43, "dw_hdmi_set_sample_rate" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x19fcbfde, "snd_card_register" },
	{ 0x37067c7c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x6f892889, "snd_pcm_set_ops" },
	{ 0x4f22e773, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0xefa5b683, "snd_card_new" },
	{ 0x39f3d36, "snd_card_free" },
};

MODULE_INFO(depends, "");

