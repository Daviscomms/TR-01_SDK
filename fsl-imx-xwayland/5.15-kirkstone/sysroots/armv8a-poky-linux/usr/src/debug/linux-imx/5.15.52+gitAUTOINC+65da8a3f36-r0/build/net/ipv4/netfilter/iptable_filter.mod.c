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
	{ 0xc264d4ce, "param_ops_bool" },
	{ 0xb9d226c1, "unregister_pernet_subsys" },
	{ 0x9c95a16e, "register_pernet_subsys" },
	{ 0xeb45e709, "xt_unregister_template" },
	{ 0x256e5af4, "xt_hook_ops_alloc" },
	{ 0x436203fc, "xt_register_template" },
	{ 0x37a0cba, "kfree" },
	{ 0xa141c86c, "ipt_register_table" },
	{ 0xb46c37ce, "ipt_alloc_initial_table" },
	{ 0x8d60a78b, "ipt_do_table" },
	{ 0x8bb34d31, "ipt_unregister_table_pre_exit" },
	{ 0xb0482484, "ipt_unregister_table_exit" },
};

MODULE_INFO(depends, "x_tables,ip_tables");

