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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x977ede3c, "netdev_info" },
	{ 0xb5402db5, "napi_schedule_prep" },
	{ 0x19604b69, "dev_err_probe" },
	{ 0x2e4d65db, "netif_carrier_on" },
	{ 0xa777c81e, "skb_clone" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf5754987, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xca320b7, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x4ef660c1, "__netdev_alloc_skb" },
	{ 0x4d7183ea, "netif_rx" },
	{ 0x2cb0c220, "skb_queue_purge" },
	{ 0x3f2c4257, "sock_efree" },
	{ 0xdcb764ad, "memset" },
	{ 0xc6f310fe, "netif_rx_ni" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xfdd9e64b, "free_netdev" },
	{ 0xbf8e4c5f, "register_netdev" },
	{ 0x23c2bd1, "nla_put" },
	{ 0xa1bb21e4, "netif_receive_skb" },
	{ 0xd821c71b, "napi_enable" },
	{ 0xdf453004, "netif_napi_add" },
	{ 0x680f833, "rtnl_link_unregister" },
	{ 0x2af0731c, "of_get_child_by_name" },
	{ 0x62b91460, "device_property_read_u32_array" },
	{ 0x2de04136, "__napi_schedule" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0x92997ed8, "_printk" },
	{ 0x3a9b68b8, "alloc_netdev_mqs" },
	{ 0xc40a0b8, "napi_complete_done" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14efd444, "netdev_err" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb003b503, "__netif_napi_del" },
	{ 0xbf5c563f, "devm_gpiod_get_optional" },
	{ 0xc77d8a28, "netdev_warn" },
	{ 0xbebc44df, "rtnl_link_register" },
	{ 0xafa5f04b, "skb_dequeue" },
	{ 0x49d4d739, "unregister_netdev" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x49c23793, "skb_tstamp_tx" },
	{ 0xb95bc595, "gpiod_set_value" },
	{ 0x1a7137b5, "skb_put" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "");

