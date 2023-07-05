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
	{ 0x328c4d32, "kmem_cache_destroy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xaf8e54be, "sock_init_data" },
	{ 0xbcde32ad, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xd8748272, "_proc_mkdir" },
	{ 0xc4e46e21, "seq_puts" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xa777c81e, "skb_clone" },
	{ 0xce1f9079, "proc_create_net_single" },
	{ 0x6d7399bf, "seq_printf" },
	{ 0x359ec4ca, "remove_proc_entry" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4c738ad5, "PDE_DATA" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2cb0c220, "skb_queue_purge" },
	{ 0x3f2c4257, "sock_efree" },
	{ 0xdcb764ad, "memset" },
	{ 0xc6f310fe, "netif_rx_ni" },
	{ 0xb9d226c1, "unregister_pernet_subsys" },
	{ 0x8e854797, "sk_alloc" },
	{ 0xbbe80fdb, "kmalloc_order" },
	{ 0x9aa50464, "seq_putc" },
	{ 0xf820c399, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x25028c7b, "sk_free" },
	{ 0x26d8615e, "dev_remove_pack" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x76c16a6d, "module_put" },
	{ 0x7e542f70, "proto_register" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x767dd121, "sock_register" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0x7fc4f5c7, "proto_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x9c95a16e, "register_pernet_subsys" },
	{ 0x141626e0, "kmem_cache_create" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xbc0d1ed3, "dev_add_pack" },
	{ 0x17f43246, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x58157cca, "try_module_get" },
};

MODULE_INFO(depends, "");

