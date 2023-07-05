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
	{ 0x2d3385d3, "system_wq" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9f1233d7, "of_root" },
	{ 0x7d0ba682, "gen_pool_virt_to_phys" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x2b593aa8, "gen_pool_alloc_algo_owner" },
	{ 0x3b4c909b, "of_gen_pool_get" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf5ca1375, "devm_kasprintf" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x2772b215, "of_property_read_variable_u8_array" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3031ae32, "soc_device_register" },
	{ 0x45cfee4c, "misc_register" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x4635d8d1, "dmam_free_coherent" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x2383879c, "of_property_read_string" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x15a059f9, "devm_kfree" },
	{ 0x19b6a6, "of_match_device" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6c0dca5a, "devm_add_action" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x66ff0785, "mbox_request_channel_byname" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcf2a6966, "up" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x49c4e8c1, "devm_iounmap" },
	{ 0xd384d2ab, "dmam_alloc_attrs" },
	{ 0xa6257a2f, "complete" },
	{ 0x6091c17c, "mbox_free_channel" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xf5b170ab, "misc_deregister" },
	{ 0x1e9c8137, "devm_of_platform_populate" },
	{ 0x563e1189, "mbox_send_message" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,imx-ele");
MODULE_ALIAS("of:N*T*Cfsl,imx-eleC*");
MODULE_ALIAS("of:N*T*Cfsl,imx93-ele");
MODULE_ALIAS("of:N*T*Cfsl,imx93-eleC*");
