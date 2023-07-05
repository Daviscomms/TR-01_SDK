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
	{ 0xe04c476a, "_dev_err" },
	{ 0xda6d185c, "st_magn_common_probe" },
	{ 0x18d750ab, "st_sensors_power_enable" },
	{ 0x9003f5ee, "st_sensors_spi_configure" },
	{ 0xfc808083, "devm_iio_device_alloc" },
	{ 0x71ebc01, "st_magn_get_settings" },
	{ 0x5a58eee6, "st_sensors_dev_name_probe" },
	{ 0xf6e8c6c0, "st_sensors_power_disable" },
	{ 0xdc64e056, "st_magn_common_remove" },
};

MODULE_INFO(depends, "st_magn,st_sensors,st_sensors_spi");

MODULE_ALIAS("spi:lis3mdl");
MODULE_ALIAS("spi:lsm303agr_magn");
MODULE_ALIAS("spi:lis2mdl");
MODULE_ALIAS("spi:lsm9ds1_magn");
MODULE_ALIAS("spi:iis2mdc");
MODULE_ALIAS("of:N*T*Cst,lis3mdl-magn");
MODULE_ALIAS("of:N*T*Cst,lis3mdl-magnC*");
MODULE_ALIAS("of:N*T*Cst,lsm303agr-magn");
MODULE_ALIAS("of:N*T*Cst,lsm303agr-magnC*");
MODULE_ALIAS("of:N*T*Cst,lis2mdl");
MODULE_ALIAS("of:N*T*Cst,lis2mdlC*");
MODULE_ALIAS("of:N*T*Cst,lsm9ds1-magn");
MODULE_ALIAS("of:N*T*Cst,lsm9ds1-magnC*");
MODULE_ALIAS("of:N*T*Cst,iis2mdc");
MODULE_ALIAS("of:N*T*Cst,iis2mdcC*");
