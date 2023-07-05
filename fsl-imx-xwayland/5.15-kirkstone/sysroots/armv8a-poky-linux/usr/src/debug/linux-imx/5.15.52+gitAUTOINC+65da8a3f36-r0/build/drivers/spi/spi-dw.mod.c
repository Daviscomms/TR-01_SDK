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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc30f8a7c, "module_layout" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xa779a555, "spi_register_controller" },
	{ 0x911e4d96, "debugfs_create_dir" },
	{ 0xc4faa47d, "spi_mem_default_supports_op" },
	{ 0x87b8798d, "sg_next" },
	{ 0x80aed05b, "__spi_alloc_controller" },
	{ 0x50bee259, "dma_request_chan" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x694f5df8, "debugfs_remove" },
	{ 0xe26bc11d, "spi_unregister_controller" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x36095f8f, "debugfs_create_regset32" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x14d7f06f, "dma_get_slave_caps" },
	{ 0x62b91460, "device_property_read_u32_array" },
	{ 0x10a44c23, "put_device" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xe2df21d5, "__dma_request_channel" },
	{ 0x486941f2, "spi_finalize_current_transfer" },
	{ 0xe31315a4, "spi_delay_exec" },
	{ 0x2845ecbf, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd64adffd, "pci_get_device" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x34aaa310, "spi_controller_suspend" },
	{ 0xa91b6ba6, "spi_controller_resume" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

