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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x6d045832, "irq_of_parse_and_map" },
	{ 0xa51f16c7, "caam_little_end" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xb73c7cbf, "devm_clk_get_optional" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xbbe80fdb, "kmalloc_order" },
	{ 0x632fa5bc, "of_iomap" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x44f81556, "_dev_info" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf45f18d2, "of_find_compatible_node" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x629cfb2a, "of_get_property" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "error");

MODULE_ALIAS("of:N*T*Cfsl,imx6q-caam-snvs");
MODULE_ALIAS("of:N*T*Cfsl,imx6q-caam-snvsC*");
