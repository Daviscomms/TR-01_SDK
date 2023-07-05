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
	{ 0xba7b4aac, "ethtool_op_get_link" },
	{ 0x1aff05fc, "eth_validate_addr" },
	{ 0xf75d67ac, "usb_deregister" },
	{ 0x3082df47, "usb_register_driver" },
	{ 0xc6cbbc89, "capable" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x9c1d1991, "netdev_notice" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xbf8e4c5f, "register_netdev" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x93892abc, "alloc_etherdev_mqs" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x6af771, "usb_control_msg_recv" },
	{ 0xd745e710, "netif_device_attach" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4d7183ea, "netif_rx" },
	{ 0xa97fd475, "eth_type_trans" },
	{ 0x1a7137b5, "skb_put" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xb9b72d0d, "usb_control_msg_send" },
	{ 0x4829a47e, "memcpy" },
	{ 0xfdd9e64b, "free_netdev" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0x49d4d739, "unregister_netdev" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x4f2a6696, "usb_alloc_urb" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4ef660c1, "__netdev_alloc_skb" },
	{ 0x2815f617, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd63ee14b, "__dev_kfree_skb_irq" },
	{ 0xea610d1, "usb_unlink_urb" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x7fdd07ce, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x692ddc79, "usb_kill_urb" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x2e4d65db, "netif_carrier_on" },
	{ 0x6f3c2663, "netif_device_detach" },
	{ 0xf5754987, "netif_carrier_off" },
	{ 0x1d163a9f, "usb_submit_urb" },
	{ 0x44f81556, "_dev_info" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDAp8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3980p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p401Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p401Ad*dc*dsc*dp*ic*isc*ip*in*");
