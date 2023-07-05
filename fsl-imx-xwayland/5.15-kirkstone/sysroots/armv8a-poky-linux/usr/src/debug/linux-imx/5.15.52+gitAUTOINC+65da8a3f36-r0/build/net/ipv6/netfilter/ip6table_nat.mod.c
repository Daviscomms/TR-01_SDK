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
	{ 0xb9d226c1, "unregister_pernet_subsys" },
	{ 0xeb45e709, "xt_unregister_template" },
	{ 0x9c95a16e, "register_pernet_subsys" },
	{ 0x436203fc, "xt_register_template" },
	{ 0x288a42a2, "ip6t_do_table" },
	{ 0x4b5670fd, "nf_nat_ipv6_register_fn" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x8a8f2542, "xt_find_table" },
	{ 0x698e36b0, "ip6t_register_table" },
	{ 0x1761488e, "ip6t_alloc_initial_table" },
	{ 0x37a0cba, "kfree" },
	{ 0x2f00c9f2, "nf_nat_ipv6_unregister_fn" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x369e5bf6, "ip6t_unregister_table_exit" },
};

MODULE_INFO(depends, "x_tables,ip6_tables,nf_nat");

