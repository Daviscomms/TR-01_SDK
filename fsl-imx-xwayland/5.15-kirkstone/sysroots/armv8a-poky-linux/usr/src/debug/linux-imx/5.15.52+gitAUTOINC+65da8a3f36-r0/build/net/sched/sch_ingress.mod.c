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
	{ 0x23c2bd1, "nla_put" },
	{ 0x162a269b, "mini_qdisc_pair_swap" },
	{ 0x256eb932, "mini_qdisc_pair_block_init" },
	{ 0x2c662db3, "tcf_block_get_ext" },
	{ 0xa850382a, "mini_qdisc_pair_init" },
	{ 0x7be6905, "net_inc_egress_queue" },
	{ 0x2c3054f9, "net_inc_ingress_queue" },
	{ 0x86f85114, "net_dec_egress_queue" },
	{ 0x46013233, "net_dec_ingress_queue" },
	{ 0x9f74e2c, "tcf_block_put_ext" },
};

MODULE_INFO(depends, "");

