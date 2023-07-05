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
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0xca87efa2, "gpiochip_remove" },
	{ 0x679fc59, "gpiochip_add_data_with_key" },
	{ 0x638c2907, "gpiochip_get_data" },
	{ 0x6c0dca5a, "devm_add_action" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xb0fb42ce, "gpiochip_irqchip_add_domain" },
	{ 0x37a0cba, "kfree" },
	{ 0x984afbc5, "regmap_write" },
	{ 0xd1369dc1, "of_fwnode_ops" },
};

MODULE_INFO(depends, "");

