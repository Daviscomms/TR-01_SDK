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
	{ 0x5d2a551, "unregister_rpmsg_driver" },
	{ 0xc2d15cdb, "__register_rpmsg_driver" },
	{ 0x3cb6fed, "tty_register_driver" },
	{ 0x4298c574, "tty_port_init" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xce5f324, "__tty_alloc_driver" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xfcb1a37d, "tty_port_install" },
	{ 0x90b9d40e, "tty_port_open" },
	{ 0x9683dd1f, "tty_port_close" },
	{ 0x92997ed8, "_printk" },
	{ 0x21f3afd8, "rpmsg_send" },
	{ 0x41c7d889, "tty_port_destroy" },
	{ 0x93170190, "tty_driver_kref_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a686303, "tty_unregister_driver" },
	{ 0x44f81556, "_dev_info" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x9a418284, "tty_flip_buffer_push" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6e14ddfa, "tty_prepare_flip_string" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x167c5967, "print_hex_dump" },
};

MODULE_INFO(depends, "");

