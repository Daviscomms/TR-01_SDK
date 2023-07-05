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
	{ 0xe39c723f, "icc_std_aggregate" },
	{ 0x320b24ce, "dev_pm_qos_remove_request" },
	{ 0x112e4e55, "of_parse_phandle" },
	{ 0xdca56360, "dev_pm_qos_add_request" },
	{ 0x19604b69, "dev_err_probe" },
	{ 0x2ff2302f, "icc_node_create" },
	{ 0x2aca036d, "of_icc_xlate_onecell" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xa81cbb27, "of_device_is_available" },
	{ 0xa20ebe4f, "icc_link_create" },
	{ 0x86f87179, "icc_node_add" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x9f4133f2, "dev_pm_qos_update_request" },
	{ 0x10a44c23, "put_device" },
	{ 0x746fb2bf, "icc_provider_del" },
	{ 0x1d31b003, "icc_provider_add" },
	{ 0xd9304488, "icc_node_del" },
	{ 0xc58a3ee6, "icc_node_destroy" },
	{ 0x65755402, "of_find_device_by_node" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0x9b70a0e2, "devm_kmalloc" },
};

MODULE_INFO(depends, "");

