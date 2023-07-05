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
	{ 0xa21db26d, "__pm_runtime_idle" },
	{ 0x6d045832, "irq_of_parse_and_map" },
	{ 0x580f69aa, "sdio_writesb" },
	{ 0x3fc93d20, "sdio_enable_func" },
	{ 0x734f73c6, "mmc_hw_reset" },
	{ 0xc264d4ce, "param_ops_bool" },
	{ 0xd30755fb, "__pm_runtime_resume" },
	{ 0xf522f02, "sdio_get_host_pm_caps" },
	{ 0xdcb764ad, "memset" },
	{ 0x553217c9, "of_match_node" },
	{ 0x8440e0b5, "platform_device_alloc" },
	{ 0xc62444f9, "platform_device_add" },
	{ 0xcbfc96c9, "irq_get_irq_data" },
	{ 0xf3cf0571, "platform_device_unregister" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xfd18c12c, "sdio_readsb" },
	{ 0xf92a11cb, "sdio_unregister_driver" },
	{ 0xe7646c3f, "platform_device_add_resources" },
	{ 0x70d2353a, "sdio_f0_writeb" },
	{ 0x20c55c57, "sdio_set_host_pm_flags" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x9324087e, "sdio_f0_readb" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x16cffb1a, "platform_device_add_data" },
	{ 0x8f4d403e, "sdio_memcpy_toio" },
	{ 0xf79748ff, "sdio_register_driver" },
	{ 0xf1ae6558, "sdio_memcpy_fromio" },
	{ 0xef6e22ed, "sdio_claim_host" },
	{ 0x403b6ab7, "of_property_read_variable_u32_array" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2f6ab45f, "sdio_set_block_size" },
	{ 0xc6ae33fd, "sdio_disable_func" },
	{ 0xac9b330c, "sdio_release_host" },
	{ 0x38b64d91, "platform_device_put" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("sdio:c*v0097d4076*");
