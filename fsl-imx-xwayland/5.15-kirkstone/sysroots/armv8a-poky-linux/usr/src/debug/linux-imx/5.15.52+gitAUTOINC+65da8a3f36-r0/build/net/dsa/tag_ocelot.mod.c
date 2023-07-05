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
	{ 0x8beef524, "dsa_tag_drivers_unregister" },
	{ 0x4c3221ab, "dsa_tag_drivers_register" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf2e35000, "br_vlan_get_pvid_rcu" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x66a73f08, "br_vlan_get_proto" },
	{ 0xb89ba9d8, "br_vlan_enabled" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x8ce1364e, "skb_pull_rcsum" },
	{ 0x768ff8b1, "__skb_vlan_pop" },
	{ 0x59a2f0ee, "packing" },
	{ 0x9d127634, "skb_pull" },
	{ 0x890342b2, "skb_push" },
};

MODULE_INFO(depends, "dsa_core");

