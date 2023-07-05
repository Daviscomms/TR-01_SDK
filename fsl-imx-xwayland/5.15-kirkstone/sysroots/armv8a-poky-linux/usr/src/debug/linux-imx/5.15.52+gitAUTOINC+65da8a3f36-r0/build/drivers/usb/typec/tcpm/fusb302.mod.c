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
	{ 0xdbb0b953, "single_release" },
	{ 0x926155f3, "seq_read" },
	{ 0xd4423e61, "seq_lseek" },
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0xceb50012, "tcpm_vbus_change" },
	{ 0x9e0bd753, "tcpm_pd_hard_reset" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xc37b9769, "tcpm_cc_change" },
	{ 0xa92584e5, "i2c_smbus_write_i2c_block_data" },
	{ 0x4829a47e, "memcpy" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9222bda4, "i2c_smbus_write_byte_data" },
	{ 0x3b84657b, "tcpm_pd_transmit_complete" },
	{ 0xb655342c, "tcpm_pd_receive" },
	{ 0x156e258c, "i2c_smbus_read_byte_data" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x3508f8d7, "i2c_smbus_read_i2c_block_data" },
	{ 0x250ebd23, "regulator_enable" },
	{ 0x1857d1a0, "regulator_disable" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x5792f848, "strlcpy" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x96848186, "scnprintf" },
	{ 0x148653, "vsnprintf" },
	{ 0xd653b126, "sched_clock" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xa917f5a7, "fwnode_create_software_node" },
	{ 0xbebe8185, "gpiod_to_irq" },
	{ 0xc3201a50, "devm_gpiod_get" },
	{ 0xd88651c9, "extcon_get_extcon_dev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x53e7cc5c, "tcpm_register_port" },
	{ 0x2f543564, "device_get_named_child_node" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x9b26d69f, "devm_regulator_get" },
	{ 0x21527159, "device_property_read_string" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x6d7399bf, "seq_printf" },
	{ 0xf6cb582e, "single_open" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x3b235e89, "debugfs_create_file" },
	{ 0x911e4d96, "debugfs_create_dir" },
	{ 0x9b6ddde, "usb_debug_root" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc0f489bc, "extcon_get_state" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x694f5df8, "debugfs_remove" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6a21e2b5, "fwnode_handle_put" },
	{ 0x76eeda4b, "tcpm_unregister_port" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:typec_fusb302");
MODULE_ALIAS("of:N*T*Cfcs,fusb302");
MODULE_ALIAS("of:N*T*Cfcs,fusb302C*");
