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
	{ 0x2d3385d3, "system_wq" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x77e03d23, "driver_register" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x98cf60b3, "strlen" },
	{ 0x81188c30, "match_string" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x94dd71af, "__srcu_read_unlock" },
	{ 0x327f48f9, "platform_bus_type" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x75d968ee, "cleanup_srcu_struct" },
	{ 0x9dbdab82, "driver_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x9166fada, "strncpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf3cf0571, "platform_device_unregister" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x9e047ec0, "__srcu_read_lock" },
	{ 0xe682232, "sysfs_remove_link" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x61e30b70, "init_srcu_struct" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xa9854b90, "sysfs_create_link" },
	{ 0x76c16a6d, "module_put" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0x720bd1a0, "driver_find_device" },
	{ 0x44f81556, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x14523c6e, "platform_device_register" },
	{ 0x10a44c23, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x7587986b, "synchronize_srcu" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x77bc13a0, "strim" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x70bd0179, "param_ops_ulong" },
	{ 0xb61632ee, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x58157cca, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DC269B349FCCF6E8B8A63AB");
