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
	{ 0x9dbdab82, "driver_unregister" },
	{ 0xa9d7752b, "__spi_register_driver" },
	{ 0x44f81556, "_dev_info" },
	{ 0x9b72ce26, "device_property_present" },
	{ 0x1af267f8, "int_pow" },
	{ 0x62b91460, "device_property_read_u32_array" },
	{ 0x9166fada, "strncpy" },
	{ 0x26ab82b2, "devm_nvmem_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x1eece884, "device_property_match_string" },
	{ 0x37a0cba, "kfree" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xf9a482f9, "msleep" },
	{ 0xec0e50fd, "spi_write_then_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x568b421, "spi_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe783e261, "sysfs_emit" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:at25");
MODULE_ALIAS("spi:fm25");
MODULE_ALIAS("of:N*T*Catmel,at25");
MODULE_ALIAS("of:N*T*Catmel,at25C*");
MODULE_ALIAS("of:N*T*Ccypress,fm25");
MODULE_ALIAS("of:N*T*Ccypress,fm25C*");
