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
	{ 0x89ae7aa0, "rsa_parse_pub_key" },
	{ 0x3236e70d, "hisi_qm_wait_task_finish" },
	{ 0x911e4d96, "debugfs_create_dir" },
	{ 0xf6cb582e, "single_open" },
	{ 0x6b8844f9, "param_get_int" },
	{ 0xfa1d795a, "hisi_qm_debug_regs_clear" },
	{ 0xbccd1148, "crypto_register_akcipher" },
	{ 0xe182d523, "hisi_qp_send" },
	{ 0xe5e89b90, "crypto_default_rng" },
	{ 0xdbb0b953, "single_release" },
	{ 0x8261eccb, "ecc_get_curve25519" },
	{ 0x11feddca, "hisi_qm_debug_init" },
	{ 0xa91373ce, "hisi_qm_free_qps" },
	{ 0x785fa78d, "no_llseek" },
	{ 0x22dfd131, "hisi_qm_init" },
	{ 0xb2ad7170, "hisi_qm_stop_qp" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x62e850ab, "crypto_register_kpp" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x7665ee72, "crypto_dh_decode_key" },
	{ 0xaa830fbb, "dma_free_attrs" },
	{ 0xb80af216, "param_set_int" },
	{ 0x3b235e89, "debugfs_create_file" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x926155f3, "seq_read" },
	{ 0xab57cbbf, "hisi_qm_stop" },
	{ 0x3f1131f0, "hisi_qm_dev_err_detected" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xb10fc19e, "ecc_get_curve" },
	{ 0x3c105581, "hisi_qm_suspend" },
	{ 0x668402aa, "crypto_put_default_rng" },
	{ 0x33b866ce, "crypto_ecdh_decode_key" },
	{ 0x6ff607b6, "crypto_get_default_rng" },
	{ 0x78303647, "hisi_qm_get_dfx_access" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xa0e906f, "hisi_qm_regs_dump" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x78716b0, "crypto_alloc_akcipher" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x694f5df8, "debugfs_remove" },
	{ 0xc56eb497, "dma_alloc_attrs" },
	{ 0xd75b20aa, "rsa_parse_priv_key" },
	{ 0xf289b6ca, "crypto_unregister_akcipher" },
	{ 0xd7c819c6, "simple_attr_release" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xdd95980, "simple_open" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xa8b851af, "hisi_qm_put_dfx_access" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x334e0f97, "debugfs_attr_read" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x8cebc864, "hisi_qm_sriov_enable" },
	{ 0xe70ac56a, "hisi_qm_reset_done" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x618911fc, "numa_node" },
	{ 0xe84bbc57, "hisi_qm_start_qp" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x3c6a8a, "hisi_qm_alg_unregister" },
	{ 0x1ae595ca, "hisi_qm_dev_err_init" },
	{ 0x6969450e, "dma_map_page_attrs" },
	{ 0xe4d41d88, "crypto_destroy_tfm" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x6fbb1e42, "dev_driver_string" },
	{ 0xc6b35586, "pci_unregister_driver" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0xc75fee44, "hisi_qm_uninit" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
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
	{ 0x4829a47e, "memcpy" },
	{ 0x5fe594e, "hisi_qm_pm_init" },
	{ 0x215ce2a5, "hisi_qm_sriov_disable" },
	{ 0x8103ee83, "__pci_register_driver" },
	{ 0x6500352a, "dma_unmap_page_attrs" },
	{ 0xd64adffd, "pci_get_device" },
	{ 0x972b5c07, "hisi_qm_pm_uninit" },
	{ 0x1f670bdb, "hisi_qm_sriov_configure" },
	{ 0x4a5a8811, "curve25519_null_point" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2e477892, "crypto_unregister_kpp" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x5a1690c8, "hisi_qm_dev_err_uninit" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xf239093c, "debugfs_attr_write" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9c9a1480, "simple_attr_open" },
	{ 0xc7cf727b, "is_acpi_device_node" },
	{ 0x5eb85da7, "hisi_qm_dev_shutdown" },
	{ 0x2f2f8434, "hisi_qm_dev_slot_reset" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
};

MODULE_INFO(depends, "hisi_qm,dh_generic,uacce,libcurve25519-generic");

MODULE_ALIAS("pci:v000019E5d0000A258sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019E5d0000A259sv*sd*bc*sc*i*");
