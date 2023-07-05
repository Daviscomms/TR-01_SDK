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
	{ 0xa5b7ea8a, "sm_keystore_slot_export" },
	{ 0xa11a744f, "sm_keystore_slot_read" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4b0905c7, "sm_keystore_slot_dealloc" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x44f81556, "_dev_info" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x2ffc5f7b, "sm_keystore_slot_load" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xf45f18d2, "of_find_compatible_node" },
	{ 0x2091ce18, "sm_keystore_cover_key" },
	{ 0xe7b9ca1d, "sm_release_keystore" },
	{ 0x4c415bda, "sm_keystore_slot_alloc" },
	{ 0x5bf64fd7, "of_node_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x90beb744, "sm_keystore_slot_import" },
	{ 0x798edab0, "sm_establish_keystore" },
	{ 0x56f5d375, "sm_detect_keystore_units" },
	{ 0x65755402, "of_find_device_by_node" },
	{ 0xd732eb5f, "of_node_put" },
};

MODULE_INFO(depends, "caam_jr");

