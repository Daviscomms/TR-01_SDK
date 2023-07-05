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
	{ 0x8e519b5e, "bcm_phy_cable_test_get_status_rdb" },
	{ 0xc2ee0bc5, "bcm_phy_cable_test_start_rdb" },
	{ 0xab97e477, "genphy_resume" },
	{ 0xe9f427a, "genphy_suspend" },
	{ 0x94c319ac, "genphy_soft_reset" },
	{ 0x8effb505, "phy_gbit_features" },
	{ 0x294dbf2d, "phy_drivers_unregister" },
	{ 0xd15f095f, "phy_drivers_register" },
	{ 0xa1a21ba, "__mdiobus_read" },
	{ 0xb86d83b8, "__mdiobus_write" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xd0c830be, "devm_hwmon_device_register_with_info" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x59474a6b, "devm_phy_package_join" },
	{ 0xa94b659c, "mdiobus_read" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x7e9d3a4, "phy_modify" },
	{ 0x89887806, "bcm_phy_write_rdb" },
	{ 0xa26ef3af, "bcm_phy_modify_rdb" },
	{ 0xdda6cf99, "phy_error" },
	{ 0xd4003b02, "phy_trigger_machine" },
	{ 0x1dd9273c, "bcm_phy_read_rdb" },
};

MODULE_INFO(depends, "bcm-phy-lib");

MODULE_ALIAS("mdio:101011100000001001010000000?1???");
