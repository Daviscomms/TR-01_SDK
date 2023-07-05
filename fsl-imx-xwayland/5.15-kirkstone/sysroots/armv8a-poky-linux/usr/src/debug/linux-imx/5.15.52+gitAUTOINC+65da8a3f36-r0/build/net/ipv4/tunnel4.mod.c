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
	{ 0x3213f038, "mutex_unlock" },
	{ 0xde0b26be, "inet_del_protocol" },
	{ 0xb9ecc087, "__icmp_send" },
	{ 0x2ca474e7, "__pskb_pull_tail" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc515754d, "inet_add_protocol" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0x92997ed8, "_printk" },
};

MODULE_INFO(depends, "");

