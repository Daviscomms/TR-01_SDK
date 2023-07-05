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
	{ 0x2d3385d3, "system_wq" },
	{ 0xf0f16526, "dma_map_sg_attrs" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9dd0a52f, "scsi_remove_target" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd396d406, "node_to_cpumask_map" },
	{ 0xd6d29b72, "scsi_change_queue_depth" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x8dc35fbf, "sas_release_transport" },
	{ 0x34afa1bc, "pci_free_irq_vectors" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x911e4d96, "debugfs_create_dir" },
	{ 0x4607f5bd, "scsi_host_alloc" },
	{ 0x2cf0639c, "debugfs_create_u8" },
	{ 0x6b8844f9, "param_get_int" },
	{ 0xb237bacd, "_dev_printk" },
	{ 0xbcde32ad, "param_ops_int" },
	{ 0x98cf60b3, "strlen" },
	{ 0x144172a5, "scsi_add_host_with_dma" },
	{ 0x1d5b7911, "scsi_block_requests" },
	{ 0xe7d2d543, "blk_queue_max_hw_sectors" },
	{ 0x30cff55d, "pci_irq_get_affinity" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xab3697e4, "irq_poll_init" },
	{ 0xc2312a8e, "dma_unmap_sg_attrs" },
	{ 0xa4eb5793, "sbitmap_weight" },
	{ 0xd0187bce, "sas_is_tlr_enabled" },
	{ 0x799f4159, "dma_set_mask" },
	{ 0xa718987, "pci_stop_and_remove_bus_device_locked" },
	{ 0x8129ab38, "sas_phy_add" },
	{ 0x6d0ee033, "scsi_unblock_requests" },
	{ 0x83e5fd95, "sas_disable_tlr" },
	{ 0x4820ce12, "pci_disable_device" },
	{ 0xb633f115, "irq_poll_enable" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x4d4d7b79, "blk_mq_map_queues" },
	{ 0x554ae3a4, "irq_poll_sched" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1dc2a08d, "sas_port_add_phy" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x16e7e2cb, "cpu_all_bits" },
	{ 0x87b8798d, "sg_next" },
	{ 0xf0f9a3c0, "blk_mq_tag_to_rq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x14192ecc, "scmd_printk" },
	{ 0xc264d4ce, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x50651fe7, "sas_port_delete_phy" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0xaa830fbb, "dma_free_attrs" },
	{ 0xb80af216, "param_set_int" },
	{ 0x6f4f9739, "sas_rphy_add" },
	{ 0x3b235e89, "debugfs_create_file" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x8fde4698, "blk_queue_virt_boundary" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0x1d0794c9, "scsi_print_command" },
	{ 0x4b86495d, "dma_set_coherent_mask" },
	{ 0xa6867bd5, "kthread_create_on_node" },
	{ 0x7f7f7bb4, "irq_poll_disable" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8bd5e0f3, "sas_port_delete" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4d14b269, "scsi_host_busy" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xfffacf75, "blk_mq_unique_tag" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1013b0e5, "dma_get_required_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa00f4ff3, "scsi_internal_device_block_nowait" },
	{ 0x8218050a, "raid_class_release" },
	{ 0x28b329f7, "sas_attach_transport" },
	{ 0x9b3f919e, "pci_set_master" },
	{ 0xc78fcbce, "scsi_is_host_device" },
	{ 0x45cfee4c, "misc_register" },
	{ 0x65063e7c, "pci_alloc_irq_vectors_affinity" },
	{ 0xdcb764ad, "memset" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xc86d2086, "pci_restore_state" },
	{ 0xf91fa1c1, "sas_expander_alloc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x7dc069ef, "sas_read_port_mode_page" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x55ebeae9, "sas_end_device_alloc" },
	{ 0xbbe80fdb, "kmalloc_order" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xf1e046cc, "panic" },
	{ 0x9166fada, "strncpy" },
	{ 0x9e75dccf, "fasync_helper" },
	{ 0xf5f8c069, "pci_read_config_word" },
	{ 0x694f5df8, "debugfs_remove" },
	{ 0x618e8570, "scsi_scan_host" },
	{ 0xc56eb497, "dma_alloc_attrs" },
	{ 0x1ae38b1e, "sdev_prefix_printk" },
	{ 0x9d1b2271, "pci_device_is_present" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb3efdabb, "sas_port_add" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x1dadd9d9, "raid_class_attach" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0x9b312e1a, "scsi_host_put" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x54de77c3, "pci_find_capability" },
	{ 0x6f5c9ce9, "attribute_container_find_class_device" },
	{ 0x1bc394c3, "pci_select_bars" },
	{ 0xf8cdb775, "sas_phy_free" },
	{ 0x44f81556, "_dev_info" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0xa5b044af, "pci_disable_link_state" },
	{ 0x7c4a764c, "scsi_add_device" },
	{ 0xcec7990, "blk_queue_flag_set" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x9b740df6, "starget_for_each_device" },
	{ 0x68d554aa, "device_reprobe" },
	{ 0x92997ed8, "_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x620165ec, "blk_mq_pci_map_queues" },
	{ 0xa3a3f229, "cpumask_next_and" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x7f09829d, "scsi_device_set_state" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xa3c0905c, "wake_up_process" },
	{ 0xbd04e649, "sas_phy_alloc" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xa08b961b, "pci_cfg_access_lock" },
	{ 0xc6b35586, "pci_unregister_driver" },
	{ 0xd7d280ad, "irq_poll_complete" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x5838631b, "sas_remove_host" },
	{ 0xd6d5aefa, "__scsi_iterate_devices" },
	{ 0xe4c6fb9b, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0xd7b7a2eb, "scsi_internal_device_unblock_nowait" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x32dc8d19, "scsi_dma_unmap" },
	{ 0x4829a47e, "memcpy" },
	{ 0x91a04903, "sas_port_alloc_num" },
	{ 0xdd219cdf, "param_array_ops" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xedc03953, "iounmap" },
	{ 0x2af36aa7, "scsi_get_vpd_page" },
	{ 0x8103ee83, "__pci_register_driver" },
	{ 0x6105835b, "kill_fasync" },
	{ 0x9cd6b755, "scsi_build_sense" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfce3492c, "param_ops_ushort" },
	{ 0x166e7970, "bsg_job_done" },
	{ 0xbdc6c7e7, "pci_enable_device_mem" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x947b3486, "pci_release_selected_regions" },
	{ 0xcca4898e, "pci_request_selected_regions" },
	{ 0x28f26684, "irq_set_affinity_hint" },
	{ 0x364d397a, "dma_pool_create" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6c8c2e99, "pci_cfg_access_unlock" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xf5b170ab, "misc_deregister" },
	{ 0x3ce51660, "sas_enable_tlr" },
	{ 0xc2e587d1, "reset_devices" },
	{ 0x504b851d, "pcie_capability_read_word" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x21784185, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0x8f304424, "param_ops_ullong" },
	{ 0x753d0526, "scsi_dma_map" },
};

MODULE_INFO(depends, "raid_class");

MODULE_ALIAS("pci:v00001000d00000070sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000072sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000074sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000076sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000077sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000064sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000082sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000083sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000084sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000085sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000086sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000087sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000006Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000002B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000002B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000007Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000096sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000097sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000090sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000094sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000095sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000ADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000AEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000AFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000B2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E7sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D6FF37D49D24EB967D05CC6");
