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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f06bab5, "uacce_alloc" },
	{ 0xf0f16526, "dma_map_sg_attrs" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xc08a36bb, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x53b954a2, "up_read" },
	{ 0xff7675e7, "pci_enable_sriov" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x34afa1bc, "pci_free_irq_vectors" },
	{ 0x911e4d96, "debugfs_create_dir" },
	{ 0x36460f18, "pci_write_config_word" },
	{ 0x349cba85, "strchr" },
	{ 0xf6cb582e, "single_open" },
	{ 0x95879b36, "__pm_runtime_use_autosuspend" },
	{ 0x98cf60b3, "strlen" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x5dd3aa5a, "__pm_runtime_suspend" },
	{ 0xc2312a8e, "dma_unmap_sg_attrs" },
	{ 0x461d16ca, "sg_nents" },
	{ 0x799f4159, "dma_set_mask" },
	{ 0xdbb0b953, "single_release" },
	{ 0x322904ca, "dma_mmap_attrs" },
	{ 0x4820ce12, "pci_disable_device" },
	{ 0x785fa78d, "no_llseek" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xe868eab7, "pci_disable_sriov" },
	{ 0x6d7399bf, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xd30755fb, "__pm_runtime_resume" },
	{ 0xaa830fbb, "dma_free_attrs" },
	{ 0x3b235e89, "debugfs_create_file" },
	{ 0xdd64e639, "strscpy" },
	{ 0x926155f3, "seq_read" },
	{ 0xdcc2aee6, "_dev_emerg" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x4b86495d, "dma_set_coherent_mask" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x9b3f919e, "pci_set_master" },
	{ 0x65063e7c, "pci_alloc_irq_vectors_affinity" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xc86d2086, "pci_restore_state" },
	{ 0x91f44510, "idr_alloc_cyclic" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xf5f8c069, "pci_read_config_word" },
	{ 0xc56eb497, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd7c819c6, "simple_attr_release" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdd95980, "simple_open" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0xce807a25, "up_write" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x334e0f97, "debugfs_attr_read" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x46c47fb6, "__node_distance" },
	{ 0x1bedfa97, "uacce_remove" },
	{ 0x1bc394c3, "pci_select_bars" },
	{ 0x44f81556, "_dev_info" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x6969450e, "dma_map_page_attrs" },
	{ 0x12bd1e78, "pci_read_config_dword" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x6fbb1e42, "dev_driver_string" },
	{ 0xe4c6fb9b, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0xd4423e61, "seq_lseek" },
	{ 0xc763ae18, "pci_sriov_get_totalvfs" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x891331d3, "remap_pfn_range" },
	{ 0x4829a47e, "memcpy" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x83c2b083, "pci_num_vf" },
	{ 0xedc03953, "iounmap" },
	{ 0x96848186, "scnprintf" },
	{ 0x6500352a, "dma_unmap_page_attrs" },
	{ 0x8ddd463a, "pm_runtime_set_autosuspend_delay" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa44bf04a, "pci_vfs_assigned" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xbdc6c7e7, "pci_enable_device_mem" },
	{ 0x947b3486, "pci_release_selected_regions" },
	{ 0xcca4898e, "pci_request_selected_regions" },
	{ 0xf239093c, "debugfs_attr_write" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9c9a1480, "simple_attr_open" },
	{ 0xc7cf727b, "is_acpi_device_node" },
	{ 0x4c61f39e, "pci_find_ext_capability" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x21784185, "pci_save_state" },
};

MODULE_INFO(depends, "uacce");

