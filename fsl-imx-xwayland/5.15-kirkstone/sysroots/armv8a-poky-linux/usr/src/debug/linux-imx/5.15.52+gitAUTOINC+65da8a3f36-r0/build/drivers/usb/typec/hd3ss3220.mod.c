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
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0x44f81556, "_dev_info" },
	{ 0x984afbc5, "regmap_write" },
	{ 0xedd8e147, "usb_role_switch_get" },
	{ 0x8358003, "fwnode_graph_get_remote_port_parent" },
	{ 0xac91fc33, "fwnode_graph_get_next_endpoint" },
	{ 0xc3d256ea, "dev_fwnode" },
	{ 0x6a21e2b5, "fwnode_handle_put" },
	{ 0x156e258c, "i2c_smbus_read_byte_data" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0xddbc72a8, "typec_register_port" },
	{ 0xa5e00cd1, "fwnode_usb_role_switch_get" },
	{ 0x2f543564, "device_get_named_child_node" },
	{ 0x201129d4, "__devm_regmap_init_i2c" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xab6dcbf2, "regmap_read" },
	{ 0x144dcaf5, "typec_set_data_role" },
	{ 0xd5474690, "usb_role_switch_set_role" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0xd78f524f, "typec_get_drvdata" },
	{ 0xc9fd634a, "usb_role_switch_put" },
	{ 0x16e7ac9, "typec_unregister_port" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,hd3ss3220");
MODULE_ALIAS("of:N*T*Cti,hd3ss3220C*");
