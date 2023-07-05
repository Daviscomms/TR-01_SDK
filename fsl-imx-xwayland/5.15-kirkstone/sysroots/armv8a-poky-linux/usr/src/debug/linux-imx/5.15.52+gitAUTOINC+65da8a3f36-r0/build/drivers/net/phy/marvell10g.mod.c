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
	{ 0xab20f6aa, "genphy_c45_loopback" },
	{ 0xb6acaa13, "phy_sfp_detach" },
	{ 0x394a1e11, "phy_sfp_attach" },
	{ 0x294dbf2d, "phy_drivers_unregister" },
	{ 0xd15f095f, "phy_drivers_register" },
	{ 0xa52a448d, "genphy_c45_pma_read_abilities" },
	{ 0xb37c0823, "phy_resolve_aneg_pause" },
	{ 0xc6a89281, "genphy_c45_read_lpa" },
	{ 0x46d2713a, "genphy_c45_read_link" },
	{ 0x7cd29282, "genphy_c45_pma_setup_forced" },
	{ 0xa2615720, "genphy_c45_check_and_restart_aneg" },
	{ 0xf7fb3ba4, "genphy_c45_an_config_aneg" },
	{ 0x6ddc84c, "phy_modify_mmd_changed" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x2e526ca4, "phy_sfp_probe" },
	{ 0xd0c830be, "devm_hwmon_device_register_with_info" },
	{ 0x11089ac7, "_ctype" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xff811200, "devm_kstrdup" },
	{ 0x44f81556, "_dev_info" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x3054f28a, "genphy_c45_aneg_done" },
	{ 0x3a7fce6b, "phy_write_mmd" },
	{ 0x4b55cc8e, "phy_modify_mmd" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x4e43244a, "phy_read_mmd" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000000101011000010011010????");
MODULE_ALIAS("mdio:0000000000101011000010011011????");
