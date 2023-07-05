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
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7f8ed9b2, "sysfs_remove_group" },
	{ 0xa6867bd5, "kthread_create_on_node" },
	{ 0xf9052fc7, "input_set_abs_params" },
	{ 0xb2dc47b0, "input_event" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x91b8044e, "sysfs_create_group" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0x89beed27, "input_set_capability" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa30b6120, "input_mt_init_slots" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0xec02c0bc, "sysfs_remove_file_ns" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x7a01e352, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x4dd0765b, "input_free_device" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xa3c0905c, "wake_up_process" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x11a02234, "i2c_transfer_buffer_flags" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x74bb8319, "input_unregister_device" },
	{ 0x8e06ada6, "input_mt_report_slot_state" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x66c4e518, "sysfs_create_file_ns" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x5d4ee162, "input_allocate_device" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:synaptics_dsx");
MODULE_ALIAS("of:N*T*Csynaptics_dsx");
MODULE_ALIAS("of:N*T*Csynaptics_dsxC*");
