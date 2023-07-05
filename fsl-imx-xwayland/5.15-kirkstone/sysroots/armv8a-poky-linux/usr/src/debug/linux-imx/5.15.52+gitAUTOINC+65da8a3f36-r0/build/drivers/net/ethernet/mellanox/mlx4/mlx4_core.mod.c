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
	{ 0xacd3bc29, "devlink_port_register" },
	{ 0xf0f16526, "dma_map_sg_attrs" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x4ce6272, "device_remove_file" },
	{ 0xdd6bf170, "kmem_cache_alloc_node" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xc08a36bb, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0x25681c7f, "devlink_reload_enable" },
	{ 0x53b954a2, "up_read" },
	{ 0xff7675e7, "pci_enable_sriov" },
	{ 0xa15cd94, "devlink_reload_disable" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb237bacd, "_dev_printk" },
	{ 0xbcde32ad, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x73378e3, "devlink_param_driverinit_value_get" },
	{ 0xc2312a8e, "dma_unmap_sg_attrs" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x799f4159, "dma_set_mask" },
	{ 0x4820ce12, "pci_disable_device" },
	{ 0x24699d7d, "pci_disable_msix" },
	{ 0xe868eab7, "pci_disable_sriov" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xbc830eb7, "alloc_pages" },
	{ 0xab2db8ec, "pcie_print_link_status" },
	{ 0x39419fe7, "pci_release_regions" },
	{ 0xc264d4ce, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8b280097, "devlink_params_register" },
	{ 0xaa830fbb, "dma_free_attrs" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0x4b86495d, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd15d6fff, "devlink_param_value_changed" },
	{ 0xd839b5b3, "devlink_port_type_ib_set" },
	{ 0xece784c2, "rb_first" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9b3f919e, "pci_set_master" },
	{ 0x1fda99f4, "__alloc_pages" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x57e6389f, "dma_sync_single_for_cpu" },
	{ 0xc86d2086, "pci_restore_state" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xaf1f6203, "devlink_params_publish" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x9166fada, "strncpy" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xf5f8c069, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc56eb497, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6626afca, "down" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x949b5176, "devlink_region_snapshot_create" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0xce807a25, "up_write" },
	{ 0x482e3152, "init_net" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa1f5bd55, "devlink_port_unregister" },
	{ 0xe273d75d, "alloc_cpu_rmap" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0xc8890ba5, "devlink_param_driverinit_value_set" },
	{ 0x55d9fa42, "devlink_region_create" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x7732159c, "free_irq_cpu_rmap" },
	{ 0xe523ad75, "synchronize_irq" },
	{  0x93f4d, "device_create_file" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x44f81556, "_dev_info" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x15095868, "__free_pages" },
	{ 0x618911fc, "numa_node" },
	{ 0x718b862, "pci_enable_msix_range" },
	{ 0x605d5bfa, "cache_line_size" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xba7efa6c, "devlink_region_snapshot_id_put" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x12bd1e78, "pci_read_config_dword" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xf3e6402e, "__bitmap_equal" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xc6b35586, "pci_unregister_driver" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x76a72b55, "param_ops_byte" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x44a6e90a, "irq_cpu_rmap_add" },
	{ 0x9e662991, "devlink_free" },
	{ 0xf107a5ee, "devlink_register" },
	{ 0xc763ae18, "pci_sriov_get_totalvfs" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x491c7c3f, "devlink_alloc_ns" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x87c6a96f, "pci_request_regions" },
	{ 0xdd219cdf, "param_array_ops" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x83c2b083, "pci_num_vf" },
	{ 0xedc03953, "iounmap" },
	{ 0x7312ac51, "dma_sync_single_for_device" },
	{ 0xcf2a6966, "up" },
	{ 0x89f5bd06, "devlink_params_unregister" },
	{ 0x8103ee83, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xca9360b5, "rb_next" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x8040173c, "devlink_region_snapshot_id_get" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x80c2a3d2, "pci_enable_device" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x28f26684, "irq_set_affinity_hint" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0xa410a295, "devlink_region_destroy" },
	{ 0x364d397a, "dma_pool_create" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x5b70a98d, "devlink_unregister" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xa1983dd4, "pcie_capability_write_word" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x21784185, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000015B3d00006340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000634Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006354sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006732sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000673Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006368sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006750sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000675Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006764sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006746sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000676Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001010sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2F0C695D3899F5332F0BBFE");
