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
	{ 0x9c95a16e, "register_pernet_subsys" },
	{ 0xeb45e709, "xt_unregister_template" },
	{ 0x256e5af4, "xt_hook_ops_alloc" },
	{ 0x436203fc, "xt_register_template" },
	{ 0x37a0cba, "kfree" },
	{ 0x698e36b0, "ip6t_register_table" },
	{ 0x1761488e, "ip6t_alloc_initial_table" },
	{ 0xb27f91ed, "ip6_route_me_harder" },
	{ 0x288a42a2, "ip6t_do_table" },
	{ 0x36c6795f, "ip6t_unregister_table_pre_exit" },
	{ 0x369e5bf6, "ip6t_unregister_table_exit" },
};

MODULE_INFO(depends, "x_tables,ip6_tables");

