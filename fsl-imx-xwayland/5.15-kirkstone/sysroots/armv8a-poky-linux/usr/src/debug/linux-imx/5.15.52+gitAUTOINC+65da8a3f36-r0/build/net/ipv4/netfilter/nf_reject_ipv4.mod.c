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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc30f8a7c, "module_layout" },
	{ 0x95491fc5, "pskb_trim_rcsum_slow" },
	{ 0xd701dc9d, "ip_local_out" },
	{ 0x2124474, "ip_send_check" },
	{ 0x34a480f2, "nf_ct_attach" },
	{ 0xb9ecc087, "__icmp_send" },
	{ 0xf1f6cea9, "nf_ip_route" },
	{ 0x82428c39, "nf_ip_checksum" },
	{ 0x2ca474e7, "__pskb_pull_tail" },
	{ 0xdcb764ad, "memset" },
	{ 0xe885819c, "ip_route_me_harder" },
	{ 0x645f857, "__alloc_skb" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0xd25bc5d4, "csum_tcpudp_nofold" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x1a7137b5, "skb_put" },
	{ 0xb2f181d6, "skb_copy_bits" },
};

MODULE_INFO(depends, "");

