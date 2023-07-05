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
	{ 0x80d5e57a, "mpi_free" },
	{ 0x62e850ab, "crypto_register_kpp" },
	{ 0xae7c231d, "mpi_cmp" },
	{ 0x9bece81b, "mpi_cmp_ui" },
	{ 0xd774957d, "mpi_write_to_sgl" },
	{ 0x3224b2a9, "mpi_read_raw_from_sgl" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x98503a63, "mpi_alloc" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x9fe939e1, "mpi_powm" },
	{ 0x4829a47e, "memcpy" },
	{ 0xceb1f126, "mpi_read_raw_data" },
	{ 0x2e477892, "crypto_unregister_kpp" },
};

MODULE_INFO(depends, "");

