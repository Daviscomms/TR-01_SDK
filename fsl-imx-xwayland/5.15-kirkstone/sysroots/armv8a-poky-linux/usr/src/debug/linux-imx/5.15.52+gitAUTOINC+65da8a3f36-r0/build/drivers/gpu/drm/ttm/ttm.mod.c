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
	{ 0x2d3385d3, "system_wq" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x4831da6e, "drm_vma_offset_remove" },
	{ 0x53b954a2, "up_read" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x911e4d96, "debugfs_create_dir" },
	{ 0xf6cb582e, "single_open" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xcc328a5c, "reservation_ww_class" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x9746aad8, "dma_resv_test_signaled" },
	{ 0xdbb0b953, "single_release" },
	{ 0xc4e46e21, "seq_puts" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6d7399bf, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0xbc830eb7, "alloc_pages" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x28779e52, "drm_printf" },
	{ 0xaa830fbb, "dma_free_attrs" },
	{ 0x8d9ca0e6, "dma_fence_enable_sw_signaling" },
	{ 0x4a7d75b0, "drm_memcpy_from_wc" },
	{ 0x3b235e89, "debugfs_create_file" },
	{ 0x926155f3, "seq_read" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0x3488ac93, "set_page_dirty" },
	{ 0x592c62ff, "dma_resv_copy_fences" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xf0517d7a, "drm_mm_init" },
	{ 0xdcb764ad, "memset" },
	{ 0x1f27571f, "vmf_insert_pfn_prot" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4f01b587, "dma_resv_add_shared_fence" },
	{ 0x18b48e28, "__memset_io" },
	{ 0xf6b74864, "vmap" },
	{ 0x40cadc0a, "shmem_read_mapping_page_gfp" },
	{ 0x2efa9961, "ww_mutex_lock" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x694f5df8, "debugfs_remove" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0xc56eb497, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x44f7222c, "dma_resv_fini" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0xb6014ba7, "fput" },
	{ 0x4c4d8317, "copy_highpage" },
	{ 0xe01486f, "shmem_file_setup" },
	{ 0x59a3f70f, "mark_page_accessed" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x15095868, "__free_pages" },
	{ 0xc4dce4b6, "unregister_shrinker" },
	{ 0x7c191d0a, "dma_resv_reserve_shared" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x79f403f3, "__drmm_add_action_or_reset" },
	{ 0x3d9ee9f0, "clear_page" },
	{ 0x92997ed8, "_printk" },
	{ 0x6969450e, "dma_map_page_attrs" },
	{ 0xf7acb66, "drm_mm_print" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x98c039dc, "dma_fence_wait_timeout" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4d924f20, "memremap" },
	{ 0xe8a0e334, "drm_vma_offset_add" },
	{ 0xd4423e61, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0x30716d73, "unmap_mapping_range" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb63f89e5, "register_shrinker" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x6ef4b3be, "debugfs_create_atomic_t" },
	{ 0xedc03953, "iounmap" },
	{ 0x481d9493, "ww_mutex_unlock" },
	{ 0xb4032484, "drm_mm_insert_node_in_range" },
	{ 0x6500352a, "dma_unmap_page_attrs" },
	{ 0x57698a50, "drm_mm_takedown" },
	{ 0x81b2cf4b, "dma_resv_wait_timeout" },
	{ 0x7929d09c, "dma_resv_init" },
	{ 0x91e7c66e, "vmalloc_to_page" },
	{ 0xf824c7db, "__drm_printfn_debug" },
	{ 0x4b7ebf95, "drm_mm_remove_node" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x70bd0179, "param_ops_ulong" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xf02e36f, "dma_resv_add_excl_fence" },
	{ 0xf5930f55, "drm_dev_enter" },
	{ 0x45b71080, "ww_mutex_lock_interruptible" },
	{ 0xea919fc2, "__put_page" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
};

MODULE_INFO(depends, "");

