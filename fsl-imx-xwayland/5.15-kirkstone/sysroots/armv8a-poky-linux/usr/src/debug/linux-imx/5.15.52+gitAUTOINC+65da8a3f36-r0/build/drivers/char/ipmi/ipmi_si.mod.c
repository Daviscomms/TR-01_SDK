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
	{ 0xa24f23d8, "__request_module" },
	{ 0x85bd1608, "__request_region" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0xba74370b, "pcim_enable_device" },
	{ 0xb237bacd, "_dev_printk" },
	{ 0xbcde32ad, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x77358855, "iomem_resource" },
	{ 0x98cf60b3, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x6d045832, "irq_of_parse_and_map" },
	{ 0x81188c30, "match_string" },
	{ 0x6280f608, "device_add_groups" },
	{ 0x31cab048, "ipmi_smi_msg_received" },
	{ 0x9f0af03d, "pci_match_id" },
	{ 0x230094ac, "ipmi_smi_watchdog_pretimeout" },
	{ 0xf6735ab0, "platform_get_irq_optional" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x327f48f9, "platform_bus_type" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc264d4ce, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x40f2b10c, "ipmi_alloc_smi_msg" },
	{ 0x2e2c4ddc, "logic_inw" },
	{ 0x67369b42, "ipmi_addr_src_to_str" },
	{ 0xf384481, "_dev_notice" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xa6867bd5, "kthread_create_on_node" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf9de87d7, "param_ops_string" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xe4330a39, "ipmi_unregister_smi" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc2310cdc, "logic_inl" },
	{ 0xdca8c3d4, "logic_outb" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xab2a2b52, "platform_get_mem_or_io" },
	{ 0xa81cbb27, "of_device_is_available" },
	{ 0x7e1a236, "kthread_stop" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x33037fd8, "logic_outl" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf3cf0571, "platform_device_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x195f136d, "device_property_read_u8_array" },
	{ 0x816525aa, "bus_find_device" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x19b6a6, "of_match_device" },
	{ 0x6366ab9e, "ipmi_platform_add" },
	{ 0xa89a1cf1, "ipmi_dmi_get_slave_addr" },
	{ 0x88dd21cc, "ipmi_add_smi" },
	{ 0x44f81556, "_dev_info" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0xf18300ad, "logic_inb" },
	{ 0x10a44c23, "put_device" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xa3c0905c, "wake_up_process" },
	{ 0x629cfb2a, "of_get_property" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xc6b35586, "pci_unregister_driver" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x337930c9, "get_device" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x6d73c95f, "logic_outw" },
	{ 0x13ac463d, "device_remove_groups" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdd219cdf, "param_array_ops" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xedc03953, "iounmap" },
	{ 0xbfff8fa, "set_user_nice" },
	{ 0x8103ee83, "__pci_register_driver" },
	{ 0x154221ae, "of_address_to_resource" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x77bc13a0, "strim" },
	{ 0x70bd0179, "param_ops_ulong" },
	{ 0xb61632ee, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc7cf727b, "is_acpi_device_node" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "ipmi_msghandler");

MODULE_ALIAS("acpi*:IPI0001:*");
MODULE_ALIAS("of:N*Tipmi*Cipmi-kcs");
MODULE_ALIAS("of:N*Tipmi*Cipmi-kcsC*");
MODULE_ALIAS("of:N*Tipmi*Cipmi-smic");
MODULE_ALIAS("of:N*Tipmi*Cipmi-smicC*");
MODULE_ALIAS("of:N*Tipmi*Cipmi-bt");
MODULE_ALIAS("of:N*Tipmi*Cipmi-btC*");
MODULE_ALIAS("pci:v0000103Cd0000121Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc07i00*");
MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc07i01*");
MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc07i02*");
