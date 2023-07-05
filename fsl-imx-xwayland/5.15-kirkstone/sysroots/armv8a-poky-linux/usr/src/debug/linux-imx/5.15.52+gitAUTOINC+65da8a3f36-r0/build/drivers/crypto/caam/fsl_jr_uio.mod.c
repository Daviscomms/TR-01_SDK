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
	{ 0x92997ed8, "_printk" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xaf4db83c, "uio_event_notify" },
	{ 0xa51f16c7, "caam_little_end" },
	{ 0x44f81556, "_dev_info" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xe102fe8f, "__uio_register_device" },
	{ 0x6d045832, "irq_of_parse_and_map" },
	{ 0x6969510b, "devm_ioremap" },
	{ 0x2da9c344, "platform_get_resource" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xd460f86d, "uio_unregister_device" },
};

MODULE_INFO(depends, "error");

MODULE_ALIAS("of:N*T*Cfsl,sec-v4.0-job-ring");
MODULE_ALIAS("of:N*T*Cfsl,sec-v4.0-job-ringC*");
MODULE_ALIAS("of:N*T*Cfsl,sec-v4.4-job-ring");
MODULE_ALIAS("of:N*T*Cfsl,sec-v4.4-job-ringC*");
MODULE_ALIAS("of:N*T*Cfsl,sec-v5.0-job-ring");
MODULE_ALIAS("of:N*T*Cfsl,sec-v5.0-job-ringC*");
MODULE_ALIAS("of:N*T*Cfsl,sec-v6.0-job-ring");
MODULE_ALIAS("of:N*T*Cfsl,sec-v6.0-job-ringC*");
