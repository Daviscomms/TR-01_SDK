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
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x28b030d2, "of_overlay_notifier_unregister" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x46f359e, "of_overlay_notifier_register" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x3b972b84, "fpga_region_program_fpga" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0xff811200, "devm_kstrdup" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0x1c1d8da8, "fpga_image_info_alloc" },
	{ 0x92997ed8, "_printk" },
	{ 0x2383879c, "of_property_read_string" },
	{ 0x759c600, "of_find_matching_node_and_match" },
	{ 0x10a44c23, "put_device" },
	{ 0x302775fe, "fpga_image_info_free" },
	{ 0x2c8167cf, "fpga_bridges_disable" },
	{ 0x69713055, "fpga_region_class_find" },
	{ 0x61f1aa36, "device_match_of_node" },
	{ 0x44f81556, "_dev_info" },
	{ 0xc00a71d8, "of_platform_populate" },
	{ 0xbbe8066f, "fpga_region_register" },
	{ 0x67270d9e, "devm_fpga_region_create" },
	{ 0x4bb7d757, "of_fpga_mgr_get" },
	{ 0x7afe879e, "of_get_next_parent" },
	{ 0x9fd0b672, "of_device_is_compatible" },
	{ 0x5bf64fd7, "of_node_get" },
	{ 0xb2b884c, "fpga_bridges_put" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0x112e4e55, "of_parse_phandle" },
	{ 0x391ee037, "of_fpga_bridge_get_to_list" },
	{ 0x33595518, "fpga_mgr_put" },
	{ 0x48fa07fc, "fpga_region_unregister" },
};

MODULE_INFO(depends, "fpga-region,fpga-bridge");

MODULE_ALIAS("of:N*T*Cfpga-region");
MODULE_ALIAS("of:N*T*Cfpga-regionC*");
