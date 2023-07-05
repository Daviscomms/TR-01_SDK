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
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xe466185a, "led_trigger_event" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xa6867bd5, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xb2dc47b0, "input_event" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x9d2703a, "device_del" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7e1a236, "kthread_stop" },
	{ 0x7766ba6f, "class_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xb4c46f9a, "__devres_alloc_node" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xbc73bb15, "device_add" },
	{ 0x2a7d4960, "__class_register" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x76c16a6d, "module_put" },
	{ 0x44f81556, "_dev_info" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x10a44c23, "put_device" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x7a01e352, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x4dd0765b, "input_free_device" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xa3c0905c, "wake_up_process" },
	{ 0x2fa9503d, "devres_add" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xde774571, "__module_get" },
	{ 0xd18b48a8, "led_trigger_unregister_simple" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x32ed83ea, "kobject_get_path" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x74bb8319, "input_unregister_device" },
	{ 0xf40283ee, "device_initialize" },
	{ 0x1057a279, "bsearch" },
	{ 0x6330aa, "led_trigger_register_simple" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xcf6d43ae, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x5d4ee162, "input_allocate_device" },
};

MODULE_INFO(depends, "");

