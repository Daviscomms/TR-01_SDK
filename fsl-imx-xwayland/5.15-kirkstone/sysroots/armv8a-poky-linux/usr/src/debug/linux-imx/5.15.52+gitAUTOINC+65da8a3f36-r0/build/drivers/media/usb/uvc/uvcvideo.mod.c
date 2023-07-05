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
	{ 0x5bdca368, "vb2_ioctl_reqbufs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xebb2d931, "v4l2_event_unsubscribe" },
	{ 0x3fe2ccbe, "memweight" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x911e4d96, "debugfs_create_dir" },
	{ 0x77db010b, "v4l2_event_queue_fh" },
	{ 0xb237bacd, "_dev_printk" },
	{ 0x98cf60b3, "strlen" },
	{ 0xf950f552, "vb2_mmap" },
	{ 0x9b6ddde, "usb_debug_root" },
	{ 0x61f34b2, "v4l2_device_unregister" },
	{ 0x785fa78d, "no_llseek" },
	{ 0xe1f2a52b, "vb2_create_bufs" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x63ef73d7, "vb2_fop_poll" },
	{ 0x78b64b25, "vb2_ioctl_streamon" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x692ddc79, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xe461a126, "vb2_ops_wait_prepare" },
	{ 0x13a9d681, "__video_register_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x24a9bdb3, "usb_autopm_get_interface" },
	{ 0x2ed1c431, "usb_enable_autosuspend" },
	{ 0x3b235e89, "debugfs_create_file" },
	{ 0x82737e8, "v4l2_ctrl_merge" },
	{ 0xe1574695, "dma_alloc_noncontiguous" },
	{ 0xdd64e639, "strscpy" },
	{ 0xc422ad57, "dma_free_noncontiguous" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcb5a9f4, "v4l2_device_register" },
	{ 0xb2dc47b0, "input_event" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xe63ede8d, "dma_sync_sg_for_device" },
	{ 0xc9a07e4a, "vb2_vmalloc_memops" },
	{ 0x95f3b57d, "usb_string" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe6671adb, "vb2_fop_mmap" },
	{ 0xf5b5c4f3, "vb2_ioctl_qbuf" },
	{ 0xf75d67ac, "usb_deregister" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x750ea3f7, "v4l2_event_subscribe" },
	{ 0xbbe80fdb, "kmalloc_order" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb77b0159, "v4l2_prio_init" },
	{ 0xa3b8e11a, "video_unregister_device" },
	{ 0xad815c91, "media_entity_pads_init" },
	{ 0xef65ab5e, "usb_set_interface" },
	{ 0x4de94385, "v4l2_fh_init" },
	{ 0xd2f0de4c, "vb2_plane_vaddr" },
	{ 0xbd552e4a, "vb2_buffer_done" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x69257e56, "usb_poison_urb" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xdaf7c20b, "usb_control_msg" },
	{ 0x694f5df8, "debugfs_remove" },
	{ 0xb89f39b2, "usb_driver_claim_interface" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa0b7c8b1, "vb2_qbuf" },
	{ 0x16d0f3b5, "vb2_ioctl_prepare_buf" },
	{ 0x49c1a955, "vb2_ioctl_create_bufs" },
	{ 0xa3aa4f04, "dma_vmap_noncontiguous" },
	{ 0xebab63bd, "vb2_querybuf" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xc6b3a79, "vb2_ioctl_dqbuf" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xaf5e09e7, "media_device_cleanup" },
	{ 0x6fff261f, "__arch_clear_user" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x44f81556, "_dev_info" },
	{ 0x1d163a9f, "usb_submit_urb" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0xf50fecbc, "v4l2_ctrl_replace" },
	{ 0xc503523d, "vb2_streamon" },
	{ 0x6a5d6b2, "usb_get_dev" },
	{ 0x5eceed78, "vb2_fop_release" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xf0b85309, "video_devdata" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x789e8c8a, "vb2_expbuf" },
	{ 0x7a01e352, "input_register_device" },
	{ 0xb84a53f8, "usb_put_dev" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x39548913, "usb_clear_halt" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xe8da5127, "usb_driver_release_interface" },
	{ 0x4dd0765b, "input_free_device" },
	{ 0x884e8490, "v4l2_device_register_subdev" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xb5716dfc, "media_create_pad_link" },
	{ 0x4d29fe5a, "vb2_reqbufs" },
	{ 0x5e39716, "usb_get_intf" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc8cc4aaa, "v4l2_fh_open" },
	{ 0xbf5c563f, "devm_gpiod_get_optional" },
	{ 0x6fa90177, "v4l2_subdev_init" },
	{ 0xb9d5a0a2, "vb2_ioctl_querybuf" },
	{ 0xbf9dc044, "__media_device_register" },
	{ 0x85239c03, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x74bb8319, "input_unregister_device" },
	{ 0xbebe8185, "gpiod_to_irq" },
	{ 0xef78d4b8, "usb_match_one_id" },
	{ 0x610a513d, "dma_sync_sg_for_cpu" },
	{ 0x96848186, "scnprintf" },
	{ 0x3082df47, "usb_register_driver" },
	{ 0x315a5094, "vb2_ops_wait_finish" },
	{ 0x8baaeb0d, "v4l2_fh_add" },
	{ 0xc9a60c3c, "dma_vunmap_noncontiguous" },
	{ 0x6b520584, "v4l2_fh_del" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xfdb48708, "usb_ifnum_to_if" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd82977c8, "vb2_poll" },
	{ 0xd6bb7d88, "media_device_init" },
	{ 0x77f57505, "usb_get_current_frame_number" },
	{ 0x28b12cc9, "v4l2_format_info" },
	{ 0xc0c4d487, "vb2_ioctl_streamoff" },
	{ 0x93a2de7, "vb2_queue_release" },
	{ 0xb61632ee, "param_ops_uint" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xbf9510ca, "vb2_streamoff" },
	{ 0x7fdd07ce, "usb_free_urb" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x4771aba4, "media_device_unregister" },
	{ 0xf01ed666, "video_ioctl2" },
	{ 0xbace84ba, "usb_autopm_put_interface" },
	{ 0x4f2a6696, "usb_alloc_urb" },
	{ 0x7187bea0, "usb_put_intf" },
	{ 0xe914e41e, "strcpy" },
	{ 0x691166c5, "gpiod_get_value_cansleep" },
	{ 0x4efd875c, "v4l2_fh_exit" },
	{ 0x5d4ee162, "input_allocate_device" },
	{ 0x6e2fa4f7, "vb2_queue_init" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0416pA91Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0458p706Ed*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep00F8d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0721d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0723d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C1d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C2d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C3d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C5d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C6d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C7d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp082Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v04F2pB071d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v058Fp3820d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2640d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2641d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2643d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p264Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p7670d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8501d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8600d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05C8p0403d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05E3p0505d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v06F8p300Cd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p332Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3410d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3420d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0BD3p0555d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0E8Dp0004d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v13D3p5103d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v152Dp0310d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5212d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5931d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A12d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A31d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A33d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A34d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17DCp0202d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17EFp480Bd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0306d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0516d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v18CDpCAFEd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3188d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3288d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3290d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v199Ep8102d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d012[0-6]dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d01[0-1]*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d00*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Bp2951d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Fp2002d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1BCFp0B40d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1C4Fp3000d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0201d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0211d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v29FEp4D53d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B03d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip01in*");

MODULE_INFO(srcversion, "18D809600E7D1E107042647");
