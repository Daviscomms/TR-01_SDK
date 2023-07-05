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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa83588eb, "dm_rh_recovery_end" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf92b8a3d, "dm_rh_get_region_size" },
	{ 0x57e16c3e, "dm_rh_get_state" },
	{ 0xca919e7, "dm_get_device" },
	{ 0x2b27a88f, "dm_io" },
	{ 0x47ec9fcf, "dm_rh_inc_pending" },
	{ 0x2617e53d, "dm_table_get_mode" },
	{ 0x7d5e1815, "dm_rh_get_region_key" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0x8a50a673, "dm_region_hash_create" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffd02855, "dm_register_target" },
	{ 0xaffeb57a, "dm_kcopyd_copy" },
	{ 0xd8aa4284, "dm_rh_region_context" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa53387c7, "dm_rh_flush" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0x1d2f9ac, "dm_rh_recovery_start" },
	{ 0xbe38a431, "dm_rh_recovery_prepare" },
	{ 0xe27052c8, "dm_rh_bio_to_region" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdcbdd20f, "dm_table_event" },
	{ 0x4f015e57, "dm_set_target_max_io_len" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xce3a21c1, "dm_unregister_target" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4ffaaca4, "submit_bio_noacct" },
	{ 0x24d273d1, "add_timer" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7774620f, "dm_rh_stop_recovery" },
	{ 0xc7da3fee, "bio_endio" },
	{ 0x81b689d3, "dm_rh_dirty_log" },
	{ 0x38972f23, "dm_rh_region_to_sector" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd688716b, "dm_kcopyd_client_create" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x38efaf5a, "dm_region_hash_destroy" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x5bed5be7, "dm_rh_mark_nosync" },
	{ 0x9729c823, "dm_dirty_log_destroy" },
	{ 0x96848186, "scnprintf" },
	{ 0x7d053fc5, "dm_rh_start_recovery" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3a18389a, "dm_rh_update_states" },
	{ 0x24f5f47e, "dm_put_device" },
	{ 0x487bdcb4, "dm_per_bio_data" },
	{ 0xdb1f33e, "dm_noflush_suspending" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xfd93482e, "dm_rh_recovery_in_flight" },
	{ 0xc4935efa, "dm_rh_delay" },
	{ 0xb61632ee, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x29fd51ec, "dm_dirty_log_create" },
	{ 0x7e70f280, "bio_associate_blkg" },
	{ 0x5f4a6e61, "dm_rh_dec" },
};

MODULE_INFO(depends, "dm-region-hash,dm-mod,dm-log");

