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
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xe9d5487, "snd_register_device" },
	{ 0x64abd2fb, "snd_card_file_remove" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x7341e624, "snd_device_initialize" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x62a48773, "snd_ctl_register_ioctl_compat" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0x6d7399bf, "seq_printf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0xdad75ebf, "snd_ctl_unregister_ioctl" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xdcb764ad, "memset" },
	{ 0x8daa8c2b, "snd_device_new" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd7c56d7a, "snd_unregister_device" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8f595b11, "snd_major" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x76c16a6d, "module_put" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0xfc8b47aa, "snd_card_file_add" },
	{ 0x5cbd4a47, "snd_ctl_register_ioctl" },
	{ 0x10a44c23, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x199890a4, "snd_info_free_entry" },
	{ 0xcf6d43ae, "dev_set_name" },
	{ 0xb6c2354b, "snd_ctl_unregister_ioctl_compat" },
	{ 0xe9784255, "snd_info_create_module_entry" },
	{ 0x8b8c980, "snd_info_register" },
	{ 0x58157cca, "try_module_get" },
};

MODULE_INFO(depends, "");

