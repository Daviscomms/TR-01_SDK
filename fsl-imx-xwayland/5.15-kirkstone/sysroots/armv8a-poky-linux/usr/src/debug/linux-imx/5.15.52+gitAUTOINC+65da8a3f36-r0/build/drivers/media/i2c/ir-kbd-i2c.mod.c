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
	{ 0xc264d4ce, "param_ops_bool" },
	{ 0xe1ff41f8, "i2c_del_driver" },
	{ 0xe99ab7f4, "i2c_register_driver" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa564c245, "rc_keydown" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x44f81556, "_dev_info" },
	{ 0x1c6da688, "rc_free_device" },
	{ 0x1c52d41f, "rc_allocate_device" },
	{ 0x2b601e26, "rc_register_device" },
	{ 0xdcb764ad, "memset" },
	{ 0x29f1e139, "i2c_new_dummy_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xc3c116d9, "i2c_transfer" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x11a02234, "i2c_transfer_buffer_flags" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4a3f700c, "rc_unregister_device" },
	{ 0xd42ffac4, "i2c_unregister_device" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("i2c:ir_video");
MODULE_ALIAS("i2c:ir_z8f0811_haup");
MODULE_ALIAS("i2c:ir_z8f0811_hdpvr");
