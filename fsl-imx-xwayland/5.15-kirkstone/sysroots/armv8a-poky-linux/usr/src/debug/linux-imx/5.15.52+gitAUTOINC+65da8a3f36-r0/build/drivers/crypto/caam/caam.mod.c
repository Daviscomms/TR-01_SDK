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
	{ 0xd31ccb06, "of_machine_is_compatible" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x911e4d96, "debugfs_create_dir" },
	{ 0x9f1233d7, "of_root" },
	{ 0xdc9a6fc6, "of_property_read_u32_index" },
	{ 0xead5c8e5, "clk_bulk_prepare" },
	{ 0x799f4159, "dma_set_mask" },
	{ 0xa51f16c7, "caam_little_end" },
	{ 0x785fa78d, "no_llseek" },
	{ 0x78a0680d, "devm_ioremap_resource" },
	{ 0x9fd0b672, "of_device_is_compatible" },
	{ 0x2f4e43f, "platform_device_register_full" },
	{ 0x3b235e89, "debugfs_create_file" },
	{ 0x4b86495d, "dma_set_coherent_mask" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xc575722d, "soc_device_match" },
	{ 0x553217c9, "of_match_node" },
	{ 0x694f5df8, "debugfs_remove" },
	{ 0xcae7ce5d, "fsl_mc_get_version" },
	{ 0xf3cf0571, "platform_device_unregister" },
	{ 0xd7c819c6, "simple_attr_release" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xbf08bd0b, "devm_kmemdup" },
	{ 0x334e0f97, "debugfs_attr_read" },
	{ 0xb7a41123, "iommu_get_domain_for_dev" },
	{ 0xc7a7e770, "clk_bulk_enable" },
	{ 0x6c0dca5a, "devm_add_action" },
	{ 0x44f81556, "_dev_info" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x62b91460, "device_property_read_u32_array" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xdfd6479b, "devm_clk_bulk_get" },
	{ 0x53d0fc97, "caam_ptr_sz" },
	{ 0xf45f18d2, "of_find_compatible_node" },
	{ 0x1e8c483e, "of_get_next_available_child" },
	{ 0x5d5d4f2a, "devm_remove_action" },
	{ 0x63c08029, "clk_bulk_unprepare" },
	{ 0x37a0cba, "kfree" },
	{ 0x17d2f13, "debugfs_create_blob" },
	{ 0x479f7d4b, "clk_bulk_disable" },
	{ 0x154221ae, "of_address_to_resource" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xf239093c, "debugfs_attr_write" },
	{ 0x9c9a1480, "simple_attr_open" },
	{ 0x1e9c8137, "devm_of_platform_populate" },
	{ 0xbd67c092, "caam_imx" },
	{ 0xed328fa8, "devm_of_iomap" },
};

MODULE_INFO(depends, "error");

MODULE_ALIAS("of:N*T*Cfsl,sec-v4.0");
MODULE_ALIAS("of:N*T*Cfsl,sec-v4.0C*");
MODULE_ALIAS("of:N*T*Cfsl,sec4.0");
MODULE_ALIAS("of:N*T*Cfsl,sec4.0C*");
