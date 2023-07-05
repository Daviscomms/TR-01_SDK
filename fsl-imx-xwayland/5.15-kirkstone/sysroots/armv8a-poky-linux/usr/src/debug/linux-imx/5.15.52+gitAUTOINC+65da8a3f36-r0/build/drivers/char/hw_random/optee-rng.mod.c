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
	{ 0x2a270af9, "tee_bus_type" },
	{ 0x9dbdab82, "driver_unregister" },
	{ 0x77e03d23, "driver_register" },
	{ 0xf2977675, "devm_hwrng_register" },
	{ 0xe4ac8a3a, "tee_client_open_session" },
	{ 0x696c469c, "tee_client_open_context" },
	{ 0x1fac85cc, "tee_shm_alloc" },
	{ 0xb983f0f5, "tee_shm_free" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4721aac2, "tee_shm_get_va" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x5453920e, "tee_client_invoke_func" },
	{ 0xdcb764ad, "memset" },
	{ 0xc2b74514, "tee_client_close_context" },
	{ 0x6b2e0db0, "tee_client_close_session" },
};

MODULE_INFO(depends, "rng-core");

MODULE_ALIAS("tee:ab7a617c-b8e7-4d8f-8301-d09b61036b64*");
