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
	{ 0xea8deaca, "blkdev_issue_discard" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x328c4d32, "kmem_cache_destroy" },
	{ 0xb9acd703, "fs_bio_set" },
	{ 0x4ce6272, "device_remove_file" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5cab9945, "unregister_xenbus_watch" },
	{ 0x83b221b0, "bio_alloc_bioset" },
	{ 0xfac2fa00, "xenbus_map_ring_valloc" },
	{ 0x15015021, "gnttab_map_refs" },
	{ 0x349cba85, "strchr" },
	{ 0xbcde32ad, "param_ops_int" },
	{ 0xe92a691f, "xenbus_dev_error" },
	{ 0x98cf60b3, "strlen" },
	{ 0xd3da78d7, "filemap_write_and_wait_range" },
	{ 0xd7fa54d1, "xenbus_dev_is_online" },
	{ 0x378223fb, "gnttab_unmap_refs" },
	{ 0x4b931968, "xen_features" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x109e2cf3, "gnttab_unmap_refs_sync" },
	{ 0xc9dd85b9, "invalidate_inode_pages2" },
	{ 0xc264d4ce, "param_ops_bool" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0x6502d9c2, "xenbus_scanf" },
	{ 0x8bde1f44, "gnttab_unmap_refs_async" },
	{ 0x1c042b3d, "xenbus_unmap_ring_vfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7f8ed9b2, "sysfs_remove_group" },
	{ 0xa6867bd5, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x86623fd7, "notify_remote_via_irq" },
	{ 0xece784c2, "rb_first" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x428d6ffd, "gnttab_page_cache_get" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc269818f, "__xenbus_register_backend" },
	{ 0xe012a831, "freezing_slow_path" },
	{ 0x3cdbf2d3, "bind_interdomain_evtchn_to_irqhandler_lateeoi" },
	{ 0xbbe80fdb, "kmalloc_order" },
	{ 0x7e1a236, "kthread_stop" },
	{ 0x91b8044e, "sysfs_create_group" },
	{ 0xef4b7a44, "bio_add_page" },
	{ 0x59f6ce87, "xenbus_watch_pathfmt" },
	{ 0x72668163, "xenbus_unregister_driver" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xea5cbce, "xen_irq_lateeoi" },
	{ 0xf820c399, "kmem_cache_free" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xa9060132, "blkdev_get_by_dev" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3bc8a998, "bio_put" },
	{  0x93f4d, "device_create_file" },
	{ 0xc2c5802, "work_busy" },
	{ 0x76c16a6d, "module_put" },
	{ 0x3074eb55, "submit_bio" },
	{ 0xb1d3a15c, "blk_finish_plug" },
	{ 0x9f984513, "strrchr" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x1c871732, "blkdev_put" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xa3c0905c, "wake_up_process" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x141626e0, "kmem_cache_create" },
	{ 0xde774571, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xeec1bf84, "xenbus_switch_state" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xecd8f23d, "xenbus_read" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xd9a35e86, "gnttab_page_cache_put" },
	{ 0xfc746b3c, "gnttab_page_cache_shrink" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0xe0f7280a, "xenbus_dev_fatal" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xca9360b5, "rb_next" },
	{ 0xba21afa4, "device_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xb61632ee, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x79ec8f93, "blk_start_plug" },
	{ 0x866ca6a3, "gnttab_page_cache_init" },
	{ 0xe914e41e, "strcpy" },
	{ 0x7712771a, "unbind_from_irqhandler" },
	{ 0x7e70f280, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");

