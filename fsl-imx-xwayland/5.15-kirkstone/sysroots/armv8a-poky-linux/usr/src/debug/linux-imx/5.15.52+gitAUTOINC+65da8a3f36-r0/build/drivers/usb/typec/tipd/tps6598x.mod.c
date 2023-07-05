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
	{ 0x8196cf89, "regmap_raw_write" },
	{ 0x6a21e2b5, "fwnode_handle_put" },
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0x81188c30, "match_string" },
	{ 0xac5fb858, "typec_set_pwr_role" },
	{ 0xef7c293e, "fw_devlink_purge_absent_suppliers" },
	{ 0xca9bb8c5, "typec_partner_set_identity" },
	{ 0xd78f524f, "typec_get_drvdata" },
	{ 0x2f543564, "device_get_named_child_node" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf5ca1375, "devm_kasprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9397e201, "power_supply_changed" },
	{ 0xddbc72a8, "typec_register_port" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x3ef97b8b, "power_supply_get_drvdata" },
	{ 0x16e7ac9, "typec_unregister_port" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc9fd634a, "usb_role_switch_put" },
	{ 0x144dcaf5, "typec_set_data_role" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd5474690, "usb_role_switch_set_role" },
	{ 0xd50b6d9b, "typec_set_vconn_role" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0x5c041c36, "typec_set_orientation" },
	{ 0x2889da01, "typec_set_pwr_opmode" },
	{ 0x739ae3e2, "typec_unregister_partner" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x201129d4, "__devm_regmap_init_i2c" },
	{ 0x9681373c, "devm_power_supply_register" },
	{ 0xa5e00cd1, "fwnode_usb_role_switch_get" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc3d256ea, "dev_fwnode" },
	{ 0xcb1f50e9, "regmap_raw_read" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0xab56dee1, "typec_register_partner" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,tps6598x");
MODULE_ALIAS("of:N*T*Cti,tps6598xC*");
MODULE_ALIAS("i2c:tps6598x");
