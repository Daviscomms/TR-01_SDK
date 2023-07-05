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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc30f8a7c, "module_layout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x93d83903, "nci_req_complete" },
	{ 0x6215a1fd, "crypto_alloc_shash" },
	{ 0x84db2898, "nci_recv_frame" },
	{ 0x610092b7, "gpio_to_desc" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8fc5e41e, "nci_core_init" },
	{ 0x45a90456, "nci_unregister_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdaff7f92, "nci_prop_cmd" },
	{ 0x97e8da74, "nci_core_reset" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x44f81556, "_dev_info" },
	{ 0x645f857, "__alloc_skb" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xe4d41d88, "crypto_destroy_tfm" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbb0713d7, "gpiod_set_raw_value" },
	{ 0x8c1743db, "request_firmware" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa6257a2f, "complete" },
	{ 0xc25d6ffa, "crypto_shash_tfm_digest" },
	{ 0x1a7137b5, "skb_put" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x2462432f, "nci_register_device" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x6a7b98de, "nci_allocate_device" },
	{ 0x11f9065b, "nci_free_device" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "nci");

