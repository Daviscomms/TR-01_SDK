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
	{ 0xdd219cdf, "param_array_ops" },
	{ 0x27b75f22, "param_ops_short" },
	{ 0x9dbdab82, "driver_unregister" },
	{ 0xa9d7752b, "__spi_register_driver" },
	{ 0x8c54b0f8, "dvb_dmx_swfilter" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xec0e50fd, "spi_write_then_read" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa3c0905c, "wake_up_process" },
	{ 0xa6867bd5, "kthread_create_on_node" },
	{ 0xbbe80fdb, "kmalloc_order" },
	{ 0x7e1a236, "kthread_stop" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4829a47e, "memcpy" },
	{ 0x568b421, "spi_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x98037143, "dvb_dmxdev_init" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0x5a1d9db5, "dvb_register_frontend" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x1875b536, "dvb_register_adapter" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x250ebd23, "regulator_enable" },
	{ 0xc231191d, "devm_regulator_get_optional" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x92997ed8, "_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x1857d1a0, "regulator_disable" },
	{ 0xb7f28d92, "dvb_unregister_adapter" },
	{ 0x641f3957, "dvb_frontend_detach" },
	{ 0x2b98c6a7, "dvb_unregister_frontend" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0xc5482628, "dvb_dmxdev_release" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:cxd2880");
MODULE_ALIAS("of:N*T*Csony,cxd2880");
MODULE_ALIAS("of:N*T*Csony,cxd2880C*");
