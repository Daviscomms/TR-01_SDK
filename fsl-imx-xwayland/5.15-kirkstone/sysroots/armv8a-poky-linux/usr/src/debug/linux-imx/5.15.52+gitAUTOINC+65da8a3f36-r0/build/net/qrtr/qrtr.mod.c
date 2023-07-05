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
	{ 0x8b7e3187, "release_sock" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x38f48af7, "put_user_ifreq" },
	{ 0xaf8e54be, "sock_init_data" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xec97dcb6, "iov_iter_revert" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x5c5ade1f, "sock_gettstamp" },
	{ 0x599d2b4b, "_copy_from_iter" },
	{ 0xa777c81e, "skb_clone" },
	{ 0x4663a4fe, "sock_queue_rcv_skb" },
	{ 0xf11de017, "skb_recv_datagram" },
	{ 0x8fa25c24, "xa_find" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x621b1b0, "skb_set_owner_w" },
	{ 0x745a981, "xa_erase" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0x4ef660c1, "__netdev_alloc_skb" },
	{ 0x6acd275d, "sock_no_sendpage" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xea154cdc, "sock_no_mmap" },
	{ 0x2cb0c220, "skb_queue_purge" },
	{ 0xeec80b36, "sock_no_socketpair" },
	{ 0x8e854797, "sk_alloc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xbb6e02cc, "skb_copy_datagram_iter" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7694639, "lock_sock_nested" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xf5a00cac, "sock_no_listen" },
	{ 0x890342b2, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xca8176a, "sock_no_accept" },
	{ 0x25028c7b, "sk_free" },
	{ 0x5102a30b, "do_wait_intr_irq" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0xa47e91ba, "qrtr_ns_init" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2c541e7b, "radix_tree_next_chunk" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2a216e9f, "sock_no_shutdown" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0xc6cbbc89, "capable" },
	{ 0x7e542f70, "proto_register" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x645f857, "__alloc_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xb04929d, "datagram_poll" },
	{ 0x767dd121, "sock_register" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0x7fc4f5c7, "proto_unregister" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xbf5a51ed, "sock_alloc_send_skb" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x6dc35b25, "radix_tree_iter_delete" },
	{ 0x8d25501f, "qrtr_ns_remove" },
	{ 0xdbf3886d, "sk_error_report" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x99f7371c, "refcount_dec_and_mutex_lock" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0x33fc2a31, "get_user_ifreq" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x1a7137b5, "skb_put" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb2f181d6, "skb_copy_bits" },
	{ 0xdb155bf5, "__skb_pad" },
	{ 0xb4871881, "skb_free_datagram" },
};

MODULE_INFO(depends, "ns");

