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
	{ 0xe1202b9f, "pnfs_unregister_layoutdriver" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xfd7dc56a, "pnfs_generic_pg_init_write" },
	{ 0xb9acd703, "fs_bio_set" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x83b221b0, "bio_alloc_bioset" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7c9722ba, "nfs_dreq_bytes_left" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xef5fdf23, "rpc_unlink" },
	{ 0x76b50df5, "pnfs_ld_write_done" },
	{ 0xefb67c83, "pnfs_error_mark_layout_for_return" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xaa6def26, "dput" },
	{ 0x8de5554, "nfs4_delete_deviceid" },
	{ 0xc3a2be67, "nfs_net_id" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xbc830eb7, "alloc_pages" },
	{ 0x851f3958, "nfs4_mark_deviceid_unavailable" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xa02b5bc1, "rpc_mkpipe_data" },
	{ 0xb5ab0897, "rpc_mkpipe_dentry" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9f670442, "pnfs_generic_pg_test" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xece784c2, "rb_first" },
	{ 0x47643f95, "rpc_get_sb_net" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x3d24d105, "pnfs_generic_pg_cleanup" },
	{ 0xa8245704, "pnfs_generic_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0x36a60e, "xdr_init_decode_pages" },
	{ 0xcfdbddb2, "rpc_queue_upcall" },
	{ 0xb9d226c1, "unregister_pernet_subsys" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xef4b7a44, "bio_add_page" },
	{ 0x77b7501d, "nfs4_find_get_deviceid" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x9c391ef0, "blkdev_get_by_path" },
	{ 0xaf753296, "nfs_pageio_reset_write_mds" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8a86010d, "rpc_d_lookup_sb" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa9060132, "blkdev_get_by_dev" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x5a845529, "nfs4_put_deviceid_node" },
	{ 0x3bc8a998, "bio_put" },
	{ 0x76c16a6d, "module_put" },
	{ 0xc860fc32, "rpc_pipe_generic_upcall" },
	{ 0x3074eb55, "submit_bio" },
	{ 0xb1d3a15c, "blk_finish_plug" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x387e1639, "rpc_pipefs_notifier_register" },
	{ 0x15095868, "__free_pages" },
	{ 0xe266e0f6, "rpc_destroy_pipe_data" },
	{ 0x1c871732, "blkdev_put" },
	{ 0xf82ec573, "rb_prev" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x9c95a16e, "register_pernet_subsys" },
	{ 0x5ebaad7a, "rpc_put_sb_net" },
	{ 0xe89e9fb7, "pnfs_generic_pg_readpages" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x921c84a8, "page_cache_next_miss" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x27bede69, "pnfs_generic_pg_writepages" },
	{ 0xae04012c, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5b71c2fb, "pnfs_generic_pg_init_read" },
	{ 0xca9360b5, "rb_next" },
	{ 0xb51a3724, "rpc_pipefs_notifier_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe99ee9c2, "xdr_inline_decode" },
	{ 0x91e7c66e, "vmalloc_to_page" },
	{ 0xa7525e9a, "nfs_pageio_reset_read_mds" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xdc9f28f7, "nfs4_init_deviceid_node" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x7ef8795b, "pnfs_set_lo_fail" },
	{ 0x79ec8f93, "blk_start_plug" },
	{ 0x1e807d99, "flush_dcache_page" },
	{ 0x9dd1c78f, "pnfs_ld_read_done" },
	{ 0xea919fc2, "__put_page" },
	{ 0x58157cca, "try_module_get" },
	{ 0xdd211b2, "pnfs_register_layoutdriver" },
	{ 0x7e70f280, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");

