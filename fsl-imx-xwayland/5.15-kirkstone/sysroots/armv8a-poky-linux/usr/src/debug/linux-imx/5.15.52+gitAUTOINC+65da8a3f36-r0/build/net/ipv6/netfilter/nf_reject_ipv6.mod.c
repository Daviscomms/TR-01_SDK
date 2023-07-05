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
	{ 0x4174a03f, "dst_release" },
	{ 0x34a480f2, "nf_ct_attach" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0x2ca474e7, "__pskb_pull_tail" },
	{ 0xdcb764ad, "memset" },
	{ 0x645f857, "__alloc_skb" },
	{ 0xc72d48e8, "ip6_route_output_flags" },
	{ 0x5b2edf64, "ipv6_skip_exthdr" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xee462174, "__nf_ip6_route" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x93a989e5, "ip6_local_out" },
	{ 0x5469d765, "ip6_dst_hoplimit" },
	{ 0x1a7137b5, "skb_put" },
	{ 0xb2f181d6, "skb_copy_bits" },
	{ 0x3b17dac1, "nf_ip6_checksum" },
	{ 0x8a13a408, "icmp6_send" },
	{ 0xd542439, "__ipv6_addr_type" },
};

MODULE_INFO(depends, "");

