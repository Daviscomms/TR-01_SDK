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
	{ 0xebb2d931, "v4l2_event_unsubscribe" },
	{ 0x37cc1d83, "v4l2_ctrl_subscribe_event" },
	{ 0x50128a87, "v4l2_ctrl_log_status" },
	{ 0xc0c4d487, "vb2_ioctl_streamoff" },
	{ 0x78b64b25, "vb2_ioctl_streamon" },
	{ 0x16d0f3b5, "vb2_ioctl_prepare_buf" },
	{ 0x49c1a955, "vb2_ioctl_create_bufs" },
	{ 0xc6b3a79, "vb2_ioctl_dqbuf" },
	{ 0xf5b5c4f3, "vb2_ioctl_qbuf" },
	{ 0xb9d5a0a2, "vb2_ioctl_querybuf" },
	{ 0x5bdca368, "vb2_ioctl_reqbufs" },
	{ 0x5eceed78, "vb2_fop_release" },
	{ 0xc8cc4aaa, "v4l2_fh_open" },
	{ 0xe6671adb, "vb2_fop_mmap" },
	{ 0xf01ed666, "video_ioctl2" },
	{ 0x63ef73d7, "vb2_fop_poll" },
	{ 0xff0e4e3a, "vb2_fop_read" },
	{ 0x94d09dc3, "video_device_release_empty" },
	{ 0x315a5094, "vb2_ops_wait_finish" },
	{ 0xe461a126, "vb2_ops_wait_prepare" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x4f2a6696, "usb_alloc_urb" },
	{ 0x5ec6ebdb, "usb_alloc_coherent" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x7fdd07ce, "usb_free_urb" },
	{ 0x692ddc79, "usb_kill_urb" },
	{ 0xdd9fb6ed, "usb_free_coherent" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8671fc17, "__v4l2_ctrl_s_ctrl" },
	{ 0x4fa3cce0, "v4l2_ctrl_g_ctrl" },
	{ 0x65b799b9, "v4l2_ctrl_find" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x44f81556, "_dev_info" },
	{ 0xb301a210, "v4l2_ctrl_add_handler" },
	{ 0x13a9d681, "__video_register_device" },
	{ 0xcb5a9f4, "v4l2_device_register" },
	{ 0xb2e9d45, "v4l2_ctrl_auto_cluster" },
	{ 0xc25a7d52, "v4l2_ctrl_new_std" },
	{ 0x61d3a67b, "v4l2_ctrl_handler_init_class" },
	{ 0x6e2fa4f7, "vb2_queue_init" },
	{ 0xc9a07e4a, "vb2_vmalloc_memops" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0x58157cca, "try_module_get" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x1d163a9f, "usb_submit_urb" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd2f0de4c, "vb2_plane_vaddr" },
	{ 0xbd552e4a, "vb2_buffer_done" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xdd64e639, "strscpy" },
	{ 0xf384481, "_dev_notice" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x716eb02c, "regmap_update_bits_base" },
	{ 0x984afbc5, "regmap_write" },
	{ 0x51a7435d, "regmap_bulk_write" },
	{ 0xdcb764ad, "memset" },
	{ 0x73d40331, "v4l2_subdev_call_wrappers" },
	{ 0xf0b85309, "video_devdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x61f34b2, "v4l2_device_unregister" },
	{ 0x8aa6a1a9, "v4l2_ctrl_handler_free" },
	{ 0x76c16a6d, "module_put" },
	{ 0x2c6d2afc, "v4l2_device_put" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa3b8e11a, "video_unregister_device" },
	{ 0xc1e5f3c1, "v4l2_device_disconnect" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "");

