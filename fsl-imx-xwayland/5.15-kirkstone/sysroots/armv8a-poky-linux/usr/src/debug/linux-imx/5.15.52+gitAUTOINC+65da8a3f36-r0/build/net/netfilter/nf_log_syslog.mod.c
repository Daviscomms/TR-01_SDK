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
	{ 0x92997ed8, "_printk" },
	{ 0xb4654ba5, "nf_log_unregister" },
	{ 0xcfe73d6e, "nf_log_register" },
	{ 0x9c95a16e, "register_pernet_subsys" },
	{ 0x80c68137, "nf_log_buf_close" },
	{ 0xd4961de, "nf_log_buf_open" },
	{ 0x9aaeefce, "sysctl_nf_log_all_netns" },
	{ 0x482e3152, "init_net" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xb2f181d6, "skb_copy_bits" },
	{ 0x260a6fd6, "nf_log_set" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xcd6f2dc9, "nf_log_buf_add" },
	{ 0x64a1044e, "from_kgid_munged" },
	{ 0x8425c044, "from_kuid_munged" },
	{ 0xd942f7c7, "init_user_ns" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x80603311, "nf_log_unset" },
};

MODULE_INFO(depends, "");

