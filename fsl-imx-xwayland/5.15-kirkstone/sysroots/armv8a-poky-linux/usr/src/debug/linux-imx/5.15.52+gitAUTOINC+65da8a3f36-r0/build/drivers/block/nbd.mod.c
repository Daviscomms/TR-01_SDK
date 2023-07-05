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
	{ 0xbcde32ad, "param_ops_int" },
	{ 0xdbb0b953, "single_release" },
	{ 0x926155f3, "seq_read" },
	{ 0xd4423e61, "seq_lseek" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x4c42a59c, "genl_unregister_family" },
	{ 0x76f80d58, "genl_register_family" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0xedbaee5e, "nla_strcmp" },
	{ 0x1000e51, "schedule" },
	{ 0x180d7bc3, "__invalidate_device" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x56b95e98, "blk_mq_start_request" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xc0ff12fb, "nla_strdup" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xd2000a68, "blk_queue_rq_timeout" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x46422e37, "sk_set_memalloc" },
	{ 0xe281206d, "debugfs_create_u32" },
	{ 0x12e96912, "debugfs_create_u64" },
	{ 0x3b235e89, "debugfs_create_file" },
	{ 0x911e4d96, "debugfs_create_dir" },
	{  0x93f4d, "device_create_file" },
	{ 0x103eda6, "blk_queue_write_cache" },
	{ 0x355737d3, "set_disk_ro" },
	{ 0x70054730, "blk_mq_update_nr_hw_queues" },
	{ 0x92997ed8, "_printk" },
	{ 0x34f485f9, "netlink_capable" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x7a53d837, "set_capacity" },
	{ 0x4ce6272, "device_remove_file" },
	{ 0xb1d9b80a, "blk_mq_unquiesce_queue" },
	{ 0xb9a0b710, "blk_mq_tagset_busy_iter" },
	{ 0xb6ae7708, "blk_mq_quiesce_queue" },
	{ 0x694f5df8, "debugfs_remove" },
	{ 0x99f7371c, "refcount_dec_and_mutex_lock" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xef9dbb22, "kernel_sock_shutdown" },
	{ 0x58157cca, "try_module_get" },
	{ 0xfffacf75, "blk_mq_unique_tag" },
	{ 0x18386eef, "iov_iter_advance" },
	{ 0xa1a932fb, "blk_mq_unfreeze_queue" },
	{ 0xb6014ba7, "fput" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xbba229ff, "blk_mq_freeze_queue" },
	{ 0x2a216e9f, "sock_no_shutdown" },
	{ 0x96f84517, "sockfd_lookup" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x83d65e99, "kobject_uevent" },
	{ 0x2716242a, "set_capacity_and_notify" },
	{ 0xe2d8ef7d, "blk_queue_physical_block_size" },
	{ 0xb5d7e317, "blk_queue_logical_block_size" },
	{ 0xdd2d13b2, "blk_mq_requeue_request" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x44f81556, "_dev_info" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa189cb69, "iov_iter_bvec" },
	{ 0xf0f9a3c0, "blk_mq_tag_to_rq" },
	{ 0xc3b331a4, "iov_iter_kvec" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0xed73cb7e, "netlink_unicast" },
	{ 0x20978fb9, "idr_find" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0x619a8b3, "netlink_broadcast" },
	{ 0x482e3152, "init_net" },
	{ 0x23c2bd1, "nla_put" },
	{ 0x4c027f05, "genlmsg_put" },
	{ 0x645f857, "__alloc_skb" },
	{ 0x5988f113, "device_add_disk" },
	{ 0xe7d2d543, "blk_queue_max_hw_sectors" },
	{ 0x8b0b3e90, "blk_queue_max_segments" },
	{ 0xee4e3da3, "blk_queue_max_segment_size" },
	{ 0x9d3b8e40, "blk_queue_max_discard_sectors" },
	{ 0xaf528470, "blk_queue_flag_clear" },
	{ 0xcec7990, "blk_queue_flag_set" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc9948174, "__blk_mq_alloc_disk" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xea8a5fdf, "blk_mq_alloc_tag_set" },
	{ 0x76c16a6d, "module_put" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x45d2c276, "blk_mq_complete_request" },
	{ 0x174408c0, "blk_mq_end_request" },
	{ 0xc4e46e21, "seq_puts" },
	{ 0x6d7399bf, "seq_printf" },
	{ 0xf6cb582e, "single_open" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xec1815cf, "blk_mq_free_tag_set" },
	{ 0x39cc4ef1, "blk_cleanup_disk" },
	{ 0xe3025505, "del_gendisk" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x4b4ea3b1, "sock_recvmsg" },
	{ 0x14aa2247, "sock_sendmsg" },
};

MODULE_INFO(depends, "");

