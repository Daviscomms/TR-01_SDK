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
	{ 0xf9a482f9, "msleep" },
	{ 0xe3f349cb, "sched_set_fifo" },
	{ 0x93e01ac4, "crypto_dequeue_request" },
	{ 0xd744d2c5, "kthread_destroy_worker" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xa408c55b, "crypto_enqueue_request_head" },
	{ 0x643a357c, "crypto_enqueue_request" },
	{ 0x44f81556, "_dev_info" },
	{ 0x6643f5bd, "kthread_queue_work" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x1e67203b, "kthread_create_worker" },
};

MODULE_INFO(depends, "");

