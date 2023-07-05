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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xa8b3f5b7, "crypto_alloc_skcipher" },
	{ 0x4994345c, "dpaa2_io_store_destroy" },
	{ 0xf0f16526, "dma_map_sg_attrs" },
	{ 0x328c4d32, "kmem_cache_destroy" },
	{ 0x51fd26a3, "__fsl_mc_driver_register" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0xcc52eab1, "mc_send_command" },
	{ 0x911e4d96, "debugfs_create_dir" },
	{ 0xf6cb582e, "single_open" },
	{ 0xd503cd76, "napi_disable" },
	{ 0x331713c, "__napi_schedule_irqoff" },
	{ 0xb5402db5, "napi_schedule_prep" },
	{ 0x4d0a05f6, "fsl_mc_portal_free" },
	{ 0xc2312a8e, "dma_unmap_sg_attrs" },
	{ 0x19604b69, "dev_err_probe" },
	{ 0xd36bacda, "cnstr_shdsc_rfc4106_encap" },
	{ 0x799f4159, "dma_set_mask" },
	{ 0xdbb0b953, "single_release" },
	{ 0xa51f16c7, "caam_little_end" },
	{ 0x1fa748c, "cnstr_shdsc_skcipher_encap" },
	{ 0xf1e6cbd4, "cnstr_shdsc_gcm_encap" },
	{ 0x6a89c7f5, "caam_strstatus" },
	{ 0x6d7399bf, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3616e00c, "dpaa2_io_store_create" },
	{ 0x87b8798d, "sg_next" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x71954f0c, "cnstr_shdsc_gcm_decap" },
	{ 0x13d535f, "dpaa2_io_service_register" },
	{ 0xdeaf4d06, "cnstr_shdsc_tls_encap" },
	{ 0x3b235e89, "debugfs_create_file" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x926155f3, "seq_read" },
	{ 0xa8fb743d, "des_expand_key" },
	{ 0x4b86495d, "dma_set_coherent_mask" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x57e6389f, "dma_sync_single_for_cpu" },
	{ 0xb71dbd0a, "dpaa2_io_service_deregister" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x7290b552, "cnstr_shdsc_tls_decap" },
	{ 0x5fca5a8f, "crypto_unregister_skcipher" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x4086e133, "crypto_register_ahash" },
	{ 0xd821c71b, "napi_enable" },
	{ 0x694f5df8, "debugfs_remove" },
	{ 0xf820c399, "kmem_cache_free" },
	{ 0x78e8ced9, "cnstr_shdsc_aead_givencap" },
	{ 0xdf453004, "netif_napi_add" },
	{ 0xe70b1694, "cnstr_shdsc_xts_skcipher_encap" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x682bbbda, "crypto_register_skcipher" },
	{ 0xe53f0591, "cnstr_shdsc_aead_decap" },
	{ 0x53182802, "cnstr_shdsc_rfc4106_decap" },
	{ 0xb7a41123, "iommu_get_domain_for_dev" },
	{ 0x1b7c4023, "dpaa2_io_service_rearm" },
	{ 0x1f5a6976, "cnstr_shdsc_aead_encap" },
	{ 0x44f81556, "_dev_info" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x261cd01, "dpaa2_io_store_next" },
	{ 0xfcf15497, "crypto_skcipher_decrypt" },
	{ 0xb9e81961, "dpaa2_io_query_fq_count" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x30f2d6c, "dpaa2_io_service_enqueue_fq" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xad9c2873, "cnstr_shdsc_chachapoly" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0xc40a0b8, "napi_complete_done" },
	{ 0x6969450e, "dma_map_page_attrs" },
	{ 0x53d0fc97, "caam_ptr_sz" },
	{ 0x3d01f417, "dpaa2_io_service_pull_fq" },
	{ 0xe4d41d88, "crypto_destroy_tfm" },
	{ 0x690cedcc, "crypto_unregister_ahash" },
	{ 0x6fbb1e42, "dev_driver_string" },
	{ 0x8f4e08, "cnstr_shdsc_ahash" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x141626e0, "kmem_cache_create" },
	{ 0xb003b503, "__netif_napi_del" },
	{ 0x80d432ce, "crypto_skcipher_setkey" },
	{ 0xb8b45450, "cnstr_shdsc_skcipher_decap" },
	{ 0xd4423e61, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x6f5afbc6, "crypto_unregister_aead" },
	{ 0xcc550a06, "crypto_register_aead" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7312ac51, "dma_sync_single_for_device" },
	{ 0x2f10852c, "dpaa2_io_service_select" },
	{ 0x8b4639e7, "fsl_mc_driver_unregister" },
	{ 0x6c0f66ce, "cnstr_shdsc_rfc4543_decap" },
	{ 0x6500352a, "dma_unmap_page_attrs" },
	{ 0xec7ce216, "cnstr_shdsc_rfc4543_encap" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x5396b57a, "iommu_iova_to_phys" },
	{ 0xd25da602, "caam_dump_sg" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbeeb1416, "fsl_mc_portal_allocate" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xd9d54479, "cnstr_shdsc_xts_skcipher_decap" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xbd67c092, "caam_imx" },
	{ 0xf234f2db, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "caamalg_desc,error,libdes,authenc,caamhash_desc");

MODULE_ALIAS("fsl-mc:v00001957ddpseci");
