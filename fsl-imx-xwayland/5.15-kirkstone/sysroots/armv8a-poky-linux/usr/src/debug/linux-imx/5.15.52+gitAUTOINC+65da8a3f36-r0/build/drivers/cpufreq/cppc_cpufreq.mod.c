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
	{ 0xa07af805, "cpufreq_unregister_driver" },
	{ 0x8e16108d, "cpufreq_register_driver" },
	{ 0xd744d2c5, "kthread_destroy_worker" },
	{ 0x27a747c5, "sched_setattr_nocheck" },
	{ 0x1e67203b, "kthread_create_worker" },
	{ 0x92b99a33, "acpi_put_table" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0x8faa800d, "acpi_cpc_valid" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0xbccc7636, "cpufreq_freq_transition_end" },
	{ 0xe9e50fb4, "cpufreq_freq_transition_begin" },
	{ 0x3ac28244, "kthread_cancel_work_sync" },
	{ 0xc672a391, "irq_work_sync" },
	{ 0xb0099f79, "topology_clear_scale_freq_source" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x18e8c440, "arch_freq_scale" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xd6d8f6b3, "topology_set_scale_freq_source" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xd46af5ef, "cppc_get_perf_ctrs" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x37a0cba, "kfree" },
	{ 0x60f99e1b, "cppc_set_perf" },
	{ 0xcde26600, "cppc_get_transition_latency" },
	{ 0x9e005e6f, "cppc_get_perf_caps" },
	{ 0xe5d0164f, "acpi_get_psd_map" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x6643f5bd, "kthread_queue_work" },
	{ 0xe8874a05, "irq_work_queue" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x2817f7fd, "cppc_get_desired_perf" },
	{ 0x42afffb2, "cpufreq_cpu_put" },
	{ 0x9a33c20c, "cpufreq_cpu_get" },
	{ 0xb08a22a3, "cpufreq_show_cpus" },
	{ 0x92997ed8, "_printk" },
	{ 0x1e9bc719, "freq_qos_update_request" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x7c983a5d, "dmi_walk" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ACPI0007:*");
