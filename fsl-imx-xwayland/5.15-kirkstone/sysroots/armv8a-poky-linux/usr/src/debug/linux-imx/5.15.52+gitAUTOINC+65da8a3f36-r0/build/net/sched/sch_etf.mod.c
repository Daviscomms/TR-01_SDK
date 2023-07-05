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
	{ 0xf23af51d, "unregister_qdisc" },
	{ 0xc0bcdbb7, "register_qdisc" },
	{ 0xdfd8b64c, "kfree_skb_list" },
	{ 0x56470118, "__warn_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x97344ecf, "rtnl_kfree_skbs" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xca9360b5, "rb_next" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x73845b0d, "qdisc_watchdog_init_clockid" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xa4e9d2fd, "qdisc_watchdog_schedule_range_ns" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xaf80d873, "skb_trim" },
	{ 0x23c2bd1, "nla_put" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0x9d93d639, "sock_queue_err_skb" },
	{ 0xa777c81e, "skb_clone" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x92997ed8, "_printk" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x7ddf3c46, "qdisc_watchdog_cancel" },
};

MODULE_INFO(depends, "");

