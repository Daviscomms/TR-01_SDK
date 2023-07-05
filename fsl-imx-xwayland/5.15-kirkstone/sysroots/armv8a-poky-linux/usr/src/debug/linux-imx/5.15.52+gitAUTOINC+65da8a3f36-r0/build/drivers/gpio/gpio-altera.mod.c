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
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x272741e1, "generic_handle_domain_irq" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xc4a2ee9a, "handle_level_irq" },
	{ 0x3b1e5f7a, "handle_simple_irq" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xae52cc19, "of_mm_gpiochip_add_data" },
	{ 0x9a828b12, "handle_bad_irq" },
	{ 0xf6735ab0, "platform_get_irq_optional" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x638c2907, "gpiochip_get_data" },
	{ 0x90e0b11b, "of_mm_gpiochip_remove" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Caltr,pio-1.0");
MODULE_ALIAS("of:N*T*Caltr,pio-1.0C*");
