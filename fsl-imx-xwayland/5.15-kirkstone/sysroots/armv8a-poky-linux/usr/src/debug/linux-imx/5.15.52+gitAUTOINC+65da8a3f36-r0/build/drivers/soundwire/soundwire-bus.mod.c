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
	{ 0xe6c5b2e4, "bus_register" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xa21db26d, "__pm_runtime_idle" },
	{ 0x77e03d23, "driver_register" },
	{ 0x911e4d96, "debugfs_create_dir" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0xf6cb582e, "single_open" },
	{ 0x95879b36, "__pm_runtime_use_autosuspend" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x5dd3aa5a, "__pm_runtime_suspend" },
	{ 0xdbb0b953, "single_release" },
	{ 0x6d7399bf, "seq_printf" },
	{ 0x2f543564, "device_get_named_child_node" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd30755fb, "__pm_runtime_resume" },
	{ 0x3b235e89, "debugfs_create_file" },
	{ 0x5921a5a, "fwnode_property_present" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x926155f3, "seq_read" },
	{ 0xf5ca1375, "devm_kasprintf" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xc8285c32, "device_register" },
	{ 0xbbe80fdb, "kmalloc_order" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x9dbdab82, "driver_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x694f5df8, "debugfs_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x2e49a81f, "bus_unregister" },
	{ 0xed7716aa, "pm_generic_runtime_suspend" },
	{ 0xc6c833a5, "dev_pm_domain_detach" },
	{ 0xfaf93826, "fwnode_property_read_u32_array" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x62b91460, "device_property_read_u32_array" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0x10a44c23, "put_device" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x1810fe3a, "of_get_next_child" },
	{ 0x92997ed8, "_printk" },
	{ 0x2b1ba535, "__pm_runtime_set_status" },
	{ 0xe7661820, "pm_generic_runtime_resume" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x629cfb2a, "of_get_property" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x599c5806, "device_for_each_child" },
	{ 0x5de00742, "devm_device_add_group" },
	{ 0x4f0e6b0f, "dev_pm_domain_attach" },
	{ 0x5bf64fd7, "of_node_get" },
	{ 0xd4423e61, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x8ddd463a, "pm_runtime_set_autosuspend_delay" },
	{ 0xba21afa4, "device_unregister" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xcf6d43ae, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd1369dc1, "of_fwnode_ops" },
	{ 0xc7cf727b, "is_acpi_device_node" },
	{ 0x911cd376, "devm_device_add_groups" },
	{ 0x9b72ce26, "device_property_present" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "");

