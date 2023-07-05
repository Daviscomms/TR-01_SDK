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
	{ 0xa7bfae19, "__cpuhp_remove_state" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x66b01bc6, "__cpuhp_setup_state" },
	{ 0x44f81556, "_dev_info" },
	{ 0xa6505ec, "perf_pmu_register" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x91c1cdd0, "__cpuhp_state_add_instance" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xf384481, "_dev_notice" },
	{ 0x24650ce9, "devm_platform_ioremap_resource" },
	{ 0x6c0dca5a, "devm_add_action" },
	{ 0xdcc04000, "platform_msi_domain_alloc_irqs" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xf5ca1375, "devm_kasprintf" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0xf8d07858, "bitmap_from_arr32" },
	{ 0xf6735ab0, "platform_get_irq_optional" },
	{ 0xc4e20f3a, "devm_platform_get_and_ioremap_resource" },
	{ 0xdcb764ad, "memset" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x8a88631a, "perf_event_update_userpage" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x1bc85e1c, "irq_set_affinity" },
	{ 0xe4e4eb98, "perf_pmu_migrate_context" },
	{ 0x8daedb79, "cpumask_any_but" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xfb3e3f10, "platform_msi_domain_free_irqs" },
	{ 0xf474c21c, "bitmap_print_to_pagebuf" },
	{ 0xa38c1436, "cpu_bit_bitmap" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x1bc57c3d, "__cpuhp_state_remove_instance" },
	{ 0x80c7eea, "perf_pmu_unregister" },
};

MODULE_INFO(depends, "");

