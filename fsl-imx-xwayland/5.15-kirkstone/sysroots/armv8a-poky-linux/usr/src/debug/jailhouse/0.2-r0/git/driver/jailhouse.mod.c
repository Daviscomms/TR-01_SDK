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

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc30f8a7c, "module_layout" },
	{ 0xa3c70928, "kobject_put" },
	{ 0x85bd1608, "__request_region" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x759c600, "of_find_matching_node_and_match" },
	{ 0x8826217f, "sysfs_remove_bin_file" },
	{ 0x3c2b68f7, "of_changeset_apply" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x6bdd324d, "of_find_node_opts_by_path" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x77358855, "iomem_resource" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x95c8f35e, "device_release_driver" },
	{ 0x696f2b63, "of_changeset_init" },
	{ 0x84a8d0eb, "of_changeset_revert" },
	{ 0xa718987, "pci_stop_and_remove_bus_device_locked" },
	{ 0x8dd669c0, "pci_get_slot" },
	{ 0xc9a4c137, "pci_add_dynid" },
	{ 0x83d65e99, "kobject_uevent" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0xad4e6259, "remove_cpu" },
	{ 0xc2e168ab, "caches_clean_inval_pou" },
	{ 0x5790e7a0, "pci_unlock_rescan_remove" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x79f1fb8d, "pci_bus_assign_resources" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7f8ed9b2, "sysfs_remove_group" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x589cd24c, "kobject_create_and_add" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x45cfee4c, "misc_register" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x75dd4ebe, "of_overlay_remove" },
	{ 0x5610897, "of_changeset_destroy" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x91b8044e, "sysfs_create_group" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x419d967b, "kobject_init_and_add" },
	{ 0xd61eeee, "__bitmap_subset" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x65e0d6d7, "memory_read_from_buffer" },
	{ 0xcee88e7a, "of_overlay_fdt_apply" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0xe2583cc9, "pci_get_domain_bus_and_slot" },
	{ 0x779cdec0, "pci_bus_add_devices" },
	{ 0x56be83b1, "of_changeset_action" },
	{ 0x8e1a37f7, "noop_llseek" },
	{ 0x799aeceb, "kobj_sysfs_ops" },
	{ 0x3fe57e41, "pci_find_bus" },
	{ 0x14a64dcf, "__root_device_register" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0x5d9aa1d0, "pci_scan_slot" },
	{ 0xfe5311ad, "kobject_move" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x7eb808d0, "add_cpu" },
	{ 0x76c16a6d, "module_put" },
	{ 0x44f81556, "_dev_info" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x8a8abde2, "root_device_unregister" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x55da2997, "__get_vm_area_caller" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xc6b35586, "pci_unregister_driver" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xddbeeecc, "pci_lock_rescan_remove" },
	{ 0xd7dedaec, "ioremap_page_range" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2b405553, "__hyp_stub_vectors" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xedc03953, "iounmap" },
	{ 0xa01b1ec5, "sysfs_create_bin_file" },
	{ 0x8103ee83, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x8c1743db, "request_firmware" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xbe2fce95, "pci_dev_put" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa339e6e5, "on_each_cpu_cond_mask" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa6e1a69d, "kick_all_cpus_sync" },
	{ 0xf5b170ab, "misc_deregister" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x58157cca, "try_module_get" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7CFBFD0D3D2D412755444F1");
