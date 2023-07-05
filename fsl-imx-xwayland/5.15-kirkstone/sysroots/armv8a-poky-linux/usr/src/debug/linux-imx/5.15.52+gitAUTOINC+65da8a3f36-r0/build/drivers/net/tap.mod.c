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
	{ 0x24529793, "cdev_del" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaf8e54be, "sock_init_data" },
	{ 0x35cf2cdc, "cdev_init" },
	{ 0x9f7c2bda, "iov_iter_npages" },
	{ 0x71a4a4ca, "__skb_gso_segment" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xec97dcb6, "iov_iter_revert" },
	{ 0xa70fb761, "flow_keys_basic_dissector" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x39ac92aa, "__skb_flow_dissect" },
	{ 0xee17c305, "skb_copy_datagram_from_iter" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x785fa78d, "no_llseek" },
	{ 0x599d2b4b, "_copy_from_iter" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3aa9906a, "sock_alloc_send_pskb" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xebd2c39, "skb_partial_csum_set" },
	{ 0xdfd8b64c, "kfree_skb_list" },
	{ 0x2ca474e7, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x8e854797, "sk_alloc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xbb6e02cc, "skb_copy_datagram_iter" },
	{ 0x890342b2, "skb_push" },
	{ 0x25028c7b, "sk_free" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x69f3c7c6, "__skb_get_hash" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xe8e99654, "build_skb" },
	{ 0x874b69cf, "cdev_add" },
	{ 0xd4f7797a, "dev_set_mac_address_user" },
	{ 0xbb719676, "compat_ptr_ioctl" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x39f34648, "skb_checksum_help" },
	{ 0x1000e51, "schedule" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14efd444, "netdev_err" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xf6131b59, "dev_get_mac_address" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x18386eef, "iov_iter_advance" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x17f43246, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x1a7137b5, "skb_put" },
	{ 0x20978fb9, "idr_find" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb2f181d6, "skb_copy_bits" },
	{ 0x1b008698, "zerocopy_sg_from_iter" },
	{ 0xeff87298, "_copy_to_iter" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

MODULE_INFO(depends, "");

