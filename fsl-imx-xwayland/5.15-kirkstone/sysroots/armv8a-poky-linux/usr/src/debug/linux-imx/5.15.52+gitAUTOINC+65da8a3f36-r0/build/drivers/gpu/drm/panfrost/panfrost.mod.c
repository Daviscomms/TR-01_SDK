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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xecdec901, "drm_release" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xa21db26d, "__pm_runtime_idle" },
	{ 0xcd723c3e, "drm_dev_register" },
	{ 0x354f3f52, "drm_compat_ioctl" },
	{ 0x7f3e258, "pm_runtime_force_suspend" },
	{ 0x815588a6, "clk_enable" },
	{ 0xa039b716, "device_link_add" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x891b144c, "devfreq_resume_device" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0xcf5cda4b, "drm_dev_alloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x95879b36, "__pm_runtime_use_autosuspend" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x5dd3aa5a, "__pm_runtime_suspend" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0xc2312a8e, "dma_unmap_sg_attrs" },
	{ 0xc5ac049c, "alloc_io_pgtable_ops" },
	{ 0x7e4212d9, "of_count_phandle_with_args" },
	{ 0x799f4159, "dma_set_mask" },
	{ 0xdde1fc13, "drm_gem_shmem_mmap" },
	{ 0x6bf2953c, "drm_gem_shmem_purge_locked" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x57038f04, "drm_sched_resubmit_jobs" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x86ee476d, "drm_gem_shmem_get_pages_sgt" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x5961b8b3, "devm_devfreq_add_device" },
	{ 0xce145ada, "drm_gem_unlock_reservations" },
	{ 0x87b8798d, "sg_next" },
	{ 0x434f470d, "pm_runtime_force_resume" },
	{ 0x8fa25c24, "xa_find" },
	{ 0x78a0680d, "devm_ioremap_resource" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc264d4ce, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x51027faa, "devfreq_suspend_device" },
	{ 0x25fecfd4, "dma_map_sgtable" },
	{ 0xd30755fb, "__pm_runtime_resume" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xb73c7cbf, "devm_clk_get_optional" },
	{ 0x745a981, "xa_erase" },
	{ 0x4b86495d, "dma_set_coherent_mask" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xcef889ce, "drm_sched_increase_karma" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x4cbe04ee, "devm_regulator_bulk_get" },
	{ 0x5508ddd9, "regulator_bulk_enable" },
	{ 0x751d5ac3, "device_link_del" },
	{ 0xb1734fa1, "devm_pm_opp_of_add_table" },
	{ 0x1c7ee8bb, "drm_gem_shmem_pin" },
	{ 0x1a411479, "drm_syncobj_free" },
	{ 0x1c9a6f3f, "drm_dev_put" },
	{ 0xf0517d7a, "drm_mm_init" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xa12ac326, "drm_gem_shmem_prime_import_sg_table" },
	{ 0xa8744af9, "drm_gem_shmem_print_info" },
	{ 0x380c2bb1, "sg_alloc_table_from_pages_segment" },
	{ 0xf037da32, "drm_sched_stop" },
	{ 0x49b7afb3, "drm_dev_unregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x16dee44d, "dma_fence_init" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdc96e963, "drm_gem_shmem_free_object" },
	{ 0x43efd458, "drm_gem_handle_create" },
	{ 0x7429075f, "drm_gem_objects_lookup" },
	{ 0x40cadc0a, "shmem_read_mapping_page_gfp" },
	{ 0x210a3ce3, "drm_sched_fini" },
	{ 0x3e192420, "drm_sched_init" },
	{ 0x50674de7, "drm_timeout_abs_to_jiffies" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x56e41a93, "dev_pm_opp_set_rate" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x2da9c344, "platform_get_resource" },
	{ 0x170a16e2, "drm_read" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0x8e1a37f7, "noop_llseek" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xae9bbcca, "device_get_dma_attr" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xbd3460ad, "drm_sched_entity_destroy" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0xf57740c4, "drm_gem_shmem_vunmap" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xe9279079, "drm_gem_prime_fd_to_handle" },
	{ 0x12c995e, "drm_gem_shmem_put_pages" },
	{ 0xb5de9672, "drm_dev_printk" },
	{ 0xf3d0638, "drm_ioctl" },
	{ 0xc6c833a5, "dev_pm_domain_detach" },
	{ 0x44f81556, "_dev_info" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0xd791bab4, "drm_gem_mmap" },
	{ 0x3e50b109, "drm_gem_fence_array_add" },
	{ 0x64575cd5, "regulator_bulk_disable" },
	{ 0xc4dce4b6, "unregister_shrinker" },
	{ 0x7cdef8ef, "drm_gem_fence_array_add_implicit" },
	{ 0x1ea76970, "drm_syncobj_replace_fence" },
	{ 0x46c807df, "dev_pm_opp_put" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0x4116c791, "drm_sched_start" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xf56ebd38, "platform_get_irq_byname" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2b1ba535, "__pm_runtime_set_status" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x473069dd, "devm_reset_control_array_get" },
	{ 0xa036707b, "drm_gem_object_lookup" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x6fbb1e42, "dev_driver_string" },
	{ 0x7eb461dc, "dev_pm_domain_attach_by_name" },
	{ 0xae5ad19f, "drm_sched_fault" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x54f24595, "drm_gem_prime_handle_to_fd" },
	{ 0xcf547d9e, "drm_sched_job_init" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8768f142, "drm_gem_create_mmap_offset" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0xb63f89e5, "register_shrinker" },
	{ 0xf399b25e, "devfreq_recommended_opp" },
	{ 0x6a4f795b, "drm_sched_job_cleanup" },
	{ 0x6295f99b, "drm_gem_shmem_unpin" },
	{ 0x4e092cd9, "pm_runtime_get_if_active" },
	{ 0xb4032484, "drm_mm_insert_node_in_range" },
	{ 0x2936c0e1, "drm_gem_lock_reservations" },
	{ 0x8faf9b98, "drm_gem_shmem_create" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x57698a50, "drm_mm_takedown" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x8ddd463a, "pm_runtime_set_autosuspend_delay" },
	{ 0x81b2cf4b, "dma_resv_wait_timeout" },
	{ 0x40fbdf12, "drm_gem_prime_mmap" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x11b24592, "devm_pm_opp_set_regulators" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x902e36af, "drm_syncobj_find_fence" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x4b7ebf95, "drm_mm_remove_node" },
	{ 0x53d1d0e1, "drm_gem_shmem_madvise" },
	{ 0xb1acde5c, "drm_sched_entity_init" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xf02e36f, "dma_resv_add_excl_fence" },
	{ 0x3487e145, "drm_syncobj_find" },
	{ 0x8a111c5f, "drm_gem_shmem_get_sg_table" },
	{ 0x4a6bf172, "free_io_pgtable_ops" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x426b2955, "drm_gem_shmem_vmap" },
	{ 0xc71329f7, "drm_poll" },
	{ 0x3d02cd70, "dma_fence_signal_locked" },
	{ 0xe3fe0bfa, "drm_sched_entity_push_job" },
	{ 0x32fcf7a0, "drm_open" },
};

MODULE_INFO(depends, "gpu-sched");

MODULE_ALIAS("of:N*T*Camlogic,meson-gxm-mali");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxm-maliC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-mali");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-maliC*");
MODULE_ALIAS("of:N*T*Carm,mali-t604");
MODULE_ALIAS("of:N*T*Carm,mali-t604C*");
MODULE_ALIAS("of:N*T*Carm,mali-t624");
MODULE_ALIAS("of:N*T*Carm,mali-t624C*");
MODULE_ALIAS("of:N*T*Carm,mali-t628");
MODULE_ALIAS("of:N*T*Carm,mali-t628C*");
MODULE_ALIAS("of:N*T*Carm,mali-t720");
MODULE_ALIAS("of:N*T*Carm,mali-t720C*");
MODULE_ALIAS("of:N*T*Carm,mali-t760");
MODULE_ALIAS("of:N*T*Carm,mali-t760C*");
MODULE_ALIAS("of:N*T*Carm,mali-t820");
MODULE_ALIAS("of:N*T*Carm,mali-t820C*");
MODULE_ALIAS("of:N*T*Carm,mali-t830");
MODULE_ALIAS("of:N*T*Carm,mali-t830C*");
MODULE_ALIAS("of:N*T*Carm,mali-t860");
MODULE_ALIAS("of:N*T*Carm,mali-t860C*");
MODULE_ALIAS("of:N*T*Carm,mali-t880");
MODULE_ALIAS("of:N*T*Carm,mali-t880C*");
MODULE_ALIAS("of:N*T*Carm,mali-bifrost");
MODULE_ALIAS("of:N*T*Carm,mali-bifrostC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-mali");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-maliC*");
