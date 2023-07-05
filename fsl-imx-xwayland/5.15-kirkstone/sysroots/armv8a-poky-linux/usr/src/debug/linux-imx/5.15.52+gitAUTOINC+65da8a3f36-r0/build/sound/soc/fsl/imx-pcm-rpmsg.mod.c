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
	{ 0xbb96c8c1, "snd_pcm_set_managed_buffer" },
	{ 0x4b86495d, "dma_set_coherent_mask" },
	{ 0x799f4159, "dma_set_mask" },
	{ 0xe4d31ebc, "of_find_property" },
	{ 0x57654752, "of_find_node_by_name" },
	{ 0x44a36ea3, "snd_soc_lookup_component" },
	{ 0xdd4985f8, "devm_snd_soc_register_component" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x21f3afd8, "rpmsg_send" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc8268547, "snd_pcm_hw_constraint_integer" },
	{ 0x746b57e3, "snd_soc_set_runtime_hwparams" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xaad2bfca, "snd_pcm_period_elapsed" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x22ec5205, "cpu_latency_qos_remove_request" },
	{ 0x28afbb08, "cpu_latency_qos_add_request" },
};

MODULE_INFO(depends, "");

