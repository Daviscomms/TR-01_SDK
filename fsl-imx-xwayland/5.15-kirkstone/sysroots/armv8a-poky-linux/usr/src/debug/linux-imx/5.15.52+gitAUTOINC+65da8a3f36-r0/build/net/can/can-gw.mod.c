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
	{ 0x328c4d32, "kmem_cache_destroy" },
	{ 0x1a813094, "can_rx_register" },
	{ 0x7b52e38, "rtnl_unregister" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xa777c81e, "skb_clone" },
	{ 0xb0bf788e, "skb_copy" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xaf80d873, "skb_trim" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xb9d226c1, "unregister_pernet_subsys" },
	{ 0xdece1741, "rtnl_register_module" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x23c2bd1, "nla_put" },
	{ 0xf820c399, "kmem_cache_free" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xfb5fa0f8, "__dev_get_by_index" },
	{ 0xbec46893, "can_send" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x34f485f9, "netlink_capable" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x92997ed8, "_printk" },
	{ 0x9c95a16e, "register_pernet_subsys" },
	{ 0x141626e0, "kmem_cache_create" },
	{ 0x4829a47e, "memcpy" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0xba4eb811, "can_rx_unregister" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xb61632ee, "param_ops_uint" },
	{ 0x44aa8c41, "__nlmsg_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

MODULE_INFO(depends, "can");

