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
	{ 0x7a1f75b2, "can_change_mtu" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xfc09ea22, "can_rx_offload_add_fifo" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xe56546e0, "can_rx_offload_enable" },
	{ 0x2364ac22, "can_rx_offload_add_timestamp" },
	{ 0x250ebd23, "regulator_enable" },
	{ 0xbd6f26b2, "open_candev" },
	{ 0x509ec2a8, "pinctrl_pm_select_default_state" },
	{ 0xd745e710, "netif_device_attach" },
	{ 0xc77d8a28, "netdev_warn" },
	{ 0x18b48e28, "__memset_io" },
	{ 0xd732eb5f, "of_node_put" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x2f333aab, "imx_scu_get_handle" },
	{ 0x14efd444, "netdev_err" },
	{ 0xd0293f05, "of_can_transceiver" },
	{ 0x9e707a, "syscon_node_to_regmap" },
	{ 0x1d3d750c, "of_find_node_by_phandle" },
	{ 0xdee89049, "register_candev" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0x2b1ba535, "__pm_runtime_set_status" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0x4ccadfa6, "alloc_candev_mqs" },
	{ 0x19b6a6, "of_match_device" },
	{ 0x24650ce9, "devm_platform_ioremap_resource" },
	{ 0x72072124, "platform_get_irq" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0x2772b215, "of_property_read_variable_u8_array" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0xc231191d, "devm_regulator_get_optional" },
	{ 0x4403bbd0, "imx_sc_misc_set_control" },
	{ 0xfa8acaa5, "pinctrl_pm_select_sleep_state" },
	{ 0x6f3c2663, "netif_device_detach" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xc1d224fd, "kfree_skb" },
	{ 0x34c6dec2, "can_put_echo_skb" },
	{ 0x6047ede6, "can_fd_len2dlc" },
	{ 0xa16e38d0, "close_candev" },
	{ 0x1857d1a0, "regulator_disable" },
	{ 0x13b245f8, "can_rx_offload_del" },
	{ 0xd503cd76, "napi_disable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa21db26d, "__pm_runtime_idle" },
	{ 0xd30755fb, "__pm_runtime_resume" },
	{ 0x752a1d92, "can_bus_off" },
	{ 0x3d1322a0, "can_change_state" },
	{ 0xd0537dd9, "can_rx_offload_irq_offload_fifo" },
	{ 0x2df02b1c, "can_rx_offload_queue_sorted" },
	{ 0xb4ea1e33, "alloc_can_err_skb" },
	{ 0x10fbdadf, "can_rx_offload_irq_finish" },
	{ 0x2815f617, "netif_tx_wake_queue" },
	{ 0x33acdde1, "can_rx_offload_get_echo_skb" },
	{ 0x7cb87065, "can_rx_offload_irq_offload_timestamp" },
	{ 0x7f3e258, "pm_runtime_force_suspend" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xf12d9387, "can_fd_dlc2len" },
	{ 0xf3223415, "alloc_canfd_skb" },
	{ 0xbe9d5ab2, "alloc_can_skb" },
	{ 0xeac55480, "free_candev" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0x17a4441d, "unregister_candev" },
	{ 0x16e8c4bf, "device_set_wakeup_capable" },
	{ 0xf0ba9bb8, "device_set_wakeup_enable" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x434f470d, "pm_runtime_force_resume" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("platform:flexcan-mcf5441x");
MODULE_ALIAS("of:N*T*Cfsl,imx8qm-flexcan");
MODULE_ALIAS("of:N*T*Cfsl,imx8qm-flexcanC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8mp-flexcan");
MODULE_ALIAS("of:N*T*Cfsl,imx8mp-flexcanC*");
MODULE_ALIAS("of:N*T*Cfsl,imx6q-flexcan");
MODULE_ALIAS("of:N*T*Cfsl,imx6q-flexcanC*");
MODULE_ALIAS("of:N*T*Cfsl,imx28-flexcan");
MODULE_ALIAS("of:N*T*Cfsl,imx28-flexcanC*");
MODULE_ALIAS("of:N*T*Cfsl,imx53-flexcan");
MODULE_ALIAS("of:N*T*Cfsl,imx53-flexcanC*");
MODULE_ALIAS("of:N*T*Cfsl,imx35-flexcan");
MODULE_ALIAS("of:N*T*Cfsl,imx35-flexcanC*");
MODULE_ALIAS("of:N*T*Cfsl,imx25-flexcan");
MODULE_ALIAS("of:N*T*Cfsl,imx25-flexcanC*");
MODULE_ALIAS("of:N*T*Cfsl,p1010-flexcan");
MODULE_ALIAS("of:N*T*Cfsl,p1010-flexcanC*");
MODULE_ALIAS("of:N*T*Cfsl,vf610-flexcan");
MODULE_ALIAS("of:N*T*Cfsl,vf610-flexcanC*");
MODULE_ALIAS("of:N*T*Cfsl,ls1021ar2-flexcan");
MODULE_ALIAS("of:N*T*Cfsl,ls1021ar2-flexcanC*");
MODULE_ALIAS("of:N*T*Cfsl,lx2160ar1-flexcan");
MODULE_ALIAS("of:N*T*Cfsl,lx2160ar1-flexcanC*");
MODULE_ALIAS("of:N*T*Cfsl,s32v234-flexcan");
MODULE_ALIAS("of:N*T*Cfsl,s32v234-flexcanC*");
