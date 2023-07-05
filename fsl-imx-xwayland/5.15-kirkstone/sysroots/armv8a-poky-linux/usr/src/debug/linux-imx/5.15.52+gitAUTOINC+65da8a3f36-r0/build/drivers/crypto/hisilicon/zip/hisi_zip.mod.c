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
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x28686316, "hisi_qm_reset_prepare" },
	{ 0x3236e70d, "hisi_qm_wait_task_finish" },
	{ 0x911e4d96, "debugfs_create_dir" },
	{ 0xf6cb582e, "single_open" },
	{ 0x6b8844f9, "param_get_int" },
	{ 0xfa1d795a, "hisi_qm_debug_regs_clear" },
	{ 0xe182d523, "hisi_qp_send" },
	{ 0x461d16ca, "sg_nents" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xdbb0b953, "single_release" },
	{ 0x6ec8be72, "crypto_register_acomp" },
	{ 0x11feddca, "hisi_qm_debug_init" },
	{ 0xa91373ce, "hisi_qm_free_qps" },
	{ 0x785fa78d, "no_llseek" },
	{ 0x22dfd131, "hisi_qm_init" },
	{ 0xb2ad7170, "hisi_qm_stop_qp" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb80af216, "param_set_int" },
	{ 0x3b235e89, "debugfs_create_file" },
	{ 0x38000e95, "hisi_acc_sg_buf_map_to_hw_sgl" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x926155f3, "seq_read" },
	{ 0x61a075a3, "crypto_unregister_acomp" },
	{ 0xab57cbbf, "hisi_qm_stop" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3f1131f0, "hisi_qm_dev_err_detected" },
	{ 0x3c105581, "hisi_qm_suspend" },
	{ 0x7f793c50, "hisi_acc_free_sgl_pool" },
	{ 0x78303647, "hisi_qm_get_dfx_access" },
	{ 0x70a8bf0a, "hisi_qm_release_qp" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xdcb764ad, "memset" },
	{ 0xa0e906f, "hisi_qm_regs_dump" },
	{ 0x53a38a7e, "hisi_acc_create_sgl_pool" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x694f5df8, "debugfs_remove" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe5cb089b, "hisi_acc_sg_buf_unmap" },
	{ 0xd7c819c6, "simple_attr_release" },
	{ 0xdd95980, "simple_open" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xa8b851af, "hisi_qm_put_dfx_access" },
	{ 0x334e0f97, "debugfs_attr_read" },
	{ 0x8cebc864, "hisi_qm_sriov_enable" },
	{ 0xe70ac56a, "hisi_qm_reset_done" },
	{ 0x44f81556, "_dev_info" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x618911fc, "numa_node" },
	{ 0xe84bbc57, "hisi_qm_start_qp" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x3c6a8a, "hisi_qm_alg_unregister" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x1ae595ca, "hisi_qm_dev_err_init" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xc6b35586, "pci_unregister_driver" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0xc75fee44, "hisi_qm_uninit" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x6173611a, "hisi_qm_alg_register" },
	{ 0x6907c8d0, "hisi_qm_start" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0xd4423e61, "seq_lseek" },
	{ 0x643730d5, "hisi_qm_alloc_qps_node" },
	{ 0xc7e37d79, "uacce_register" },
	{ 0x37a0cba, "kfree" },
	{ 0xfc828b3a, "hisi_qm_resume" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x5fe594e, "hisi_qm_pm_init" },
	{ 0x215ce2a5, "hisi_qm_sriov_disable" },
	{ 0x8103ee83, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0xd64adffd, "pci_get_device" },
	{ 0x972b5c07, "hisi_qm_pm_uninit" },
	{ 0x1f670bdb, "hisi_qm_sriov_configure" },
	{ 0x5a1690c8, "hisi_qm_dev_err_uninit" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xf239093c, "debugfs_attr_write" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x9c9a1480, "simple_attr_open" },
	{ 0x5eb85da7, "hisi_qm_dev_shutdown" },
	{ 0x2f2f8434, "hisi_qm_dev_slot_reset" },
};

MODULE_INFO(depends, "hisi_qm,uacce");

MODULE_ALIAS("pci:v000019E5d0000A250sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019E5d0000A251sv*sd*bc*sc*i*");
