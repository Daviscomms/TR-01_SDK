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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x77e03d23, "driver_register" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x5dd3aa5a, "__pm_runtime_suspend" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd30755fb, "__pm_runtime_resume" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xc8285c32, "device_register" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x91f44510, "idr_alloc_cyclic" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x726ec239, "device_find_child" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x9dbdab82, "driver_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x2e49a81f, "bus_unregister" },
	{ 0x19b6a6, "of_match_device" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x10a44c23, "put_device" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x1810fe3a, "of_get_next_child" },
	{ 0x92997ed8, "_printk" },
	{ 0x629cfb2a, "of_get_property" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x599c5806, "device_for_each_child" },
	{ 0x5bf64fd7, "of_node_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xba21afa4, "device_unregister" },
	{ 0xa6257a2f, "complete" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xcf6d43ae, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x20978fb9, "idr_find" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "");

