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
	{ 0x81b8106a, "net_ns_type_operations" },
	{ 0x680f833, "rtnl_link_unregister" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x15ed3525, "macvlan_link_register" },
	{ 0x75040063, "tap_destroy_cdev" },
	{ 0x7766ba6f, "class_unregister" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x2a7d4960, "__class_register" },
	{ 0x4884485e, "tap_create_cdev" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xd4bea8d2, "macvlan_common_newlink" },
	{ 0xfb34cc40, "netdev_rx_handler_register" },
	{ 0x33e83596, "tap_handle_frame" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xa9854b90, "sysfs_create_link" },
	{ 0x2997220c, "device_create" },
	{ 0x3a78ac5d, "tap_free_minor" },
	{ 0x3c126119, "device_destroy" },
	{ 0xe682232, "sysfs_remove_link" },
	{ 0xb81946ae, "tap_queue_resize" },
	{ 0x6a855b27, "tap_get_minor" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8439a10c, "macvlan_common_setup" },
	{ 0x3ed4abce, "netdev_update_features" },
	{ 0x59adb4f, "macvlan_dellink" },
	{ 0x8e165433, "tap_del_queues" },
	{ 0x65cdabbb, "netdev_rx_handler_unregister" },
};

MODULE_INFO(depends, "macvlan,tap");

