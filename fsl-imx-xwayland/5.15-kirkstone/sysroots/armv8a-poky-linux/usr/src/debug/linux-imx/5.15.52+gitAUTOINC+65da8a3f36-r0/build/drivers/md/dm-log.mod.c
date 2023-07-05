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
	{ 0xa24f23d8, "__request_module" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x3fe2ccbe, "memweight" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xca919e7, "dm_get_device" },
	{ 0x2b27a88f, "dm_io" },
	{ 0x2617e53d, "dm_table_get_mode" },
	{ 0x999e8297, "vfree" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0xdcbdd20f, "dm_table_event" },
	{ 0xdcb764ad, "memset" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x76c16a6d, "module_put" },
	{ 0x9f984513, "strrchr" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0x24f5f47e, "dm_put_device" },
	{ 0x58157cca, "try_module_get" },
};

MODULE_INFO(depends, "dm-mod");

