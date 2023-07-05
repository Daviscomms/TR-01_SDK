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
	{ 0x5d5d4f2a, "devm_remove_action" },
	{ 0xefc19d03, "cec_register_adapter" },
	{ 0x9e5315ef, "cec_notifier_cec_adap_register" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x6c0dca5a, "devm_add_action" },
	{ 0x4334f4f0, "cec_allocate_adapter" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x3d9cb49b, "cec_received_msg_ts" },
	{ 0xaa16df24, "cec_transmit_attempt_done_ts" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4aae20c2, "cec_delete_adapter" },
	{ 0x60e1c2d5, "cec_unregister_adapter" },
	{ 0xede432b0, "cec_notifier_cec_adap_unregister" },
};

MODULE_INFO(depends, "");

