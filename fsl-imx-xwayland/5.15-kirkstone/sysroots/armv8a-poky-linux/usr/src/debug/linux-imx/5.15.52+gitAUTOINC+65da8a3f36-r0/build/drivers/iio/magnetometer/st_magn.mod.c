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
	{ 0x9063c91, "st_sensors_set_dataready_irq" },
	{ 0x360b3e0c, "st_sensors_set_enable" },
	{ 0x74d7047, "st_sensors_trigger_handler" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf17e5d83, "st_sensors_deallocate_trigger" },
	{ 0xb5786d4c, "st_sensors_sysfs_sampling_frequency_avail" },
	{ 0xa508b315, "st_sensors_allocate_trigger" },
	{ 0x3f0a4018, "iio_device_unregister" },
	{ 0xe1aadde7, "st_sensors_set_fullscale_by_gain" },
	{ 0x77a443d2, "st_sensors_validate_device" },
	{ 0x58250e08, "iio_read_mount_matrix" },
	{ 0xbef7068d, "st_sensors_init_sensor" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc537c69e, "__iio_device_register" },
	{ 0xf49468a6, "iio_show_mount_matrix" },
	{ 0x44f81556, "_dev_info" },
	{ 0xb641e55a, "st_sensors_debugfs_reg_access" },
	{ 0xf766bba3, "st_sensors_get_settings_index" },
	{ 0xc388100d, "st_sensors_set_odr" },
	{ 0x3fc5ec0d, "devm_iio_triggered_buffer_setup_ext" },
	{ 0x53b75b1e, "st_sensors_sysfs_scale_avail" },
	{ 0x3d1abda0, "st_sensors_verify_id" },
	{ 0x90b884f7, "st_sensors_read_info_raw" },
};

MODULE_INFO(depends, "st_sensors");

