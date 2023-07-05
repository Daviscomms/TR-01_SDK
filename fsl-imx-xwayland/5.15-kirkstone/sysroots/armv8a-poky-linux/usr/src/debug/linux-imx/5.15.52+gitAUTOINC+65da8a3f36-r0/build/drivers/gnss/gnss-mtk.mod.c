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
	{ 0x1857d1a0, "regulator_disable" },
	{ 0xdf2ea2a, "gnss_serial_free" },
	{ 0x42ffde0d, "__serdev_device_driver_register" },
	{ 0xbd331039, "gnss_serial_allocate" },
	{ 0x9dbdab82, "driver_unregister" },
	{ 0x9b26d69f, "devm_regulator_get" },
	{ 0x9f9a12ab, "gnss_serial_deregister" },
	{ 0xc231191d, "devm_regulator_get_optional" },
	{ 0xbed8fb8a, "gnss_serial_pm_ops" },
	{ 0x6993417b, "gnss_serial_register" },
	{ 0x250ebd23, "regulator_enable" },
};

MODULE_INFO(depends, "gnss-serial");

MODULE_ALIAS("of:N*T*Cglobaltop,pa6h");
MODULE_ALIAS("of:N*T*Cglobaltop,pa6hC*");
