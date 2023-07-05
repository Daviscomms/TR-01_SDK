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
	{ 0x8beef524, "dsa_tag_drivers_unregister" },
	{ 0x4c3221ab, "dsa_tag_drivers_register" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x39f34648, "skb_checksum_help" },
	{ 0x50cbc39c, "dsa_8021q_xmit" },
	{ 0x6643f5bd, "kthread_queue_work" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x46503b39, "dsa_tag_8021q_standalone_vid" },
	{ 0x879f4ac2, "netdev_txq_to_tc" },
	{ 0x1e67203b, "kthread_create_worker" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x6f074030, "dsa_8021q_rcv" },
	{ 0x37a0cba, "kfree" },
	{ 0xd744d2c5, "kthread_destroy_worker" },
};

MODULE_INFO(depends, "dsa_core");

