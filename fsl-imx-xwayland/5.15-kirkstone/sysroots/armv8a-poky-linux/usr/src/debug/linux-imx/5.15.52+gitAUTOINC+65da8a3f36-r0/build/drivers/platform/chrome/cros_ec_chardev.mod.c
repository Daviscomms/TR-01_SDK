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
	{ 0x93bc3d1a, "cros_ec_cmd_xfer" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xdcb764ad, "memset" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x5b2f27fb, "do_wait_intr" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x98cf60b3, "strlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3a113a37, "cros_ec_cmd_xfer_status" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0x9e1fad00, "nonseekable_open" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x2773c485, "__wake_up_locked" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x45cfee4c, "misc_register" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x56470118, "__warn_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0xf5b170ab, "misc_deregister" },
};

MODULE_INFO(depends, "");

