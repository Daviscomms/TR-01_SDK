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
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x815588a6, "clk_enable" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x911e4d96, "debugfs_create_dir" },
	{ 0xebdb8874, "of_device_get_match_data" },
	{ 0xdc9a6fc6, "of_property_read_u32_index" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x3b235e89, "debugfs_create_file" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x50e661c, "default_llseek" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0x694f5df8, "debugfs_remove" },
	{ 0xdd95980, "simple_open" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0x1e8c483e, "of_get_next_available_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x24650ce9, "devm_platform_ioremap_resource" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,imx21-audmux");
MODULE_ALIAS("of:N*T*Cfsl,imx21-audmuxC*");
MODULE_ALIAS("of:N*T*Cfsl,imx31-audmux");
MODULE_ALIAS("of:N*T*Cfsl,imx31-audmuxC*");
