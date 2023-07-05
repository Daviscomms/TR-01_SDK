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
	{ 0x34b77d3b, "pwm_set_chip_data" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x22962091, "pwmchip_add" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x3a113a37, "cros_ec_cmd_xfer_status" },
	{ 0xdcb764ad, "memset" },
	{ 0xd4ec7506, "pwm_get_chip_data" },
	{ 0x75711621, "pwm_request_from_chip" },
	{ 0x1ecb587e, "pwmchip_remove" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgoogle,cros-ec-pwm");
MODULE_ALIAS("of:N*T*Cgoogle,cros-ec-pwmC*");
