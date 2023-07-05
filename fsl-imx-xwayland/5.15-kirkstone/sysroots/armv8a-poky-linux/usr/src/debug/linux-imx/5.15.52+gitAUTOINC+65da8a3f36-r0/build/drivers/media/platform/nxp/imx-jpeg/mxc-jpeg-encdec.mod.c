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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xdbddccd7, "v4l2_m2m_ioctl_prepare_buf" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xebb2d931, "v4l2_event_unsubscribe" },
	{ 0x1410ffac, "v4l2_m2m_ioctl_dqbuf" },
	{ 0xa21db26d, "__pm_runtime_idle" },
	{ 0x1d121312, "v4l2_m2m_buf_copy_metadata" },
	{ 0x7f3e258, "pm_runtime_force_suspend" },
	{ 0x815588a6, "clk_enable" },
	{ 0xa039b716, "device_link_add" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0x77db010b, "v4l2_event_queue_fh" },
	{ 0xbcde32ad, "param_ops_int" },
	{ 0x6c5920e4, "v4l2_m2m_ctx_init" },
	{ 0x529a90cf, "video_device_release" },
	{ 0x2114fd3d, "v4l2_m2m_ioctl_try_encoder_cmd" },
	{ 0x7e4212d9, "of_count_phandle_with_args" },
	{ 0x799f4159, "dma_set_mask" },
	{ 0x61f34b2, "v4l2_device_unregister" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x8aa6a1a9, "v4l2_ctrl_handler_free" },
	{ 0xe8f40f9e, "v4l2_jpeg_parse_header" },
	{ 0xc25a7d52, "v4l2_ctrl_new_std" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x434f470d, "pm_runtime_force_resume" },
	{ 0xe461a126, "vb2_ops_wait_prepare" },
	{ 0xe7615478, "v4l2_m2m_update_start_streaming_state" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0x13a9d681, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xce46e2c6, "v4l2_m2m_fop_mmap" },
	{ 0xd30755fb, "__pm_runtime_resume" },
	{ 0xaa830fbb, "dma_free_attrs" },
	{ 0xdd64e639, "strscpy" },
	{ 0x4b86495d, "dma_set_coherent_mask" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x48142ebb, "v4l2_m2m_ioctl_streamon" },
	{ 0xcb5a9f4, "v4l2_device_register" },
	{ 0x751d5ac3, "device_link_del" },
	{ 0x247e393f, "v4l2_m2m_ioctl_create_bufs" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xb998ded2, "video_device_alloc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x750ea3f7, "v4l2_event_subscribe" },
	{ 0xd743c8a1, "v4l2_m2m_ioctl_streamoff" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x553217c9, "of_match_node" },
	{ 0xa3b8e11a, "video_unregister_device" },
	{ 0xa0059b7d, "v4l2_m2m_ioctl_reqbufs" },
	{ 0xf626dd03, "v4l2_m2m_suspend" },
	{ 0x4de94385, "v4l2_fh_init" },
	{ 0x37cc1d83, "v4l2_ctrl_subscribe_event" },
	{ 0xd2f0de4c, "vb2_plane_vaddr" },
	{ 0xbd552e4a, "vb2_buffer_done" },
	{ 0xc56eb497, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x41ebe289, "v4l2_m2m_update_stop_streaming_state" },
	{ 0xe04c476a, "_dev_err" },
	{ 0xf1ff0e22, "vb2_plane_cookie" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xd5c634b, "v4l2_m2m_get_vq" },
	{ 0xc6c833a5, "dev_pm_domain_detach" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x39376624, "v4l2_m2m_ioctl_qbuf" },
	{ 0x3737c6d, "v4l2_m2m_fop_poll" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0x1ee2d089, "v4l2_m2m_ioctl_try_decoder_cmd" },
	{ 0x459e133f, "v4l2_m2m_get_curr_priv" },
	{ 0xf0b85309, "video_devdata" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x3bb6399b, "v4l2_m2m_buf_queue" },
	{ 0xc3d485c1, "v4l2_ctrl_handler_setup" },
	{ 0x92997ed8, "_printk" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x43cddcde, "v4l2_m2m_ioctl_querybuf" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x1621d513, "v4l2_m2m_ioctl_decoder_cmd" },
	{ 0x5352d022, "v4l2_m2m_resume" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0xa732a43d, "v4l2_m2m_ioctl_expbuf" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x2d563a3d, "vb2_dma_contig_memops" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3378f8b4, "v4l2_m2m_last_buffer_done" },
	{ 0x61d3a67b, "v4l2_ctrl_handler_init_class" },
	{ 0x140d1292, "v4l2_src_change_event_subscribe" },
	{ 0x64dc404b, "v4l2_m2m_buf_remove" },
	{ 0x315a5094, "vb2_ops_wait_finish" },
	{ 0x8baaeb0d, "v4l2_fh_add" },
	{ 0xee319436, "v4l2_m2m_ctx_release" },
	{ 0x6b520584, "v4l2_fh_del" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x72072124, "platform_get_irq" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x7cd0707f, "v4l2_m2m_ioctl_encoder_cmd" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xbaaacbf2, "v4l2_m2m_next_buf" },
	{ 0xf01ed666, "video_ioctl2" },
	{ 0x24650ce9, "devm_platform_ioremap_resource" },
	{ 0xc77a5b3, "v4l2_m2m_job_finish" },
	{ 0x4d4b705d, "dev_pm_domain_attach_by_id" },
	{ 0x4efd875c, "v4l2_fh_exit" },
	{ 0x6e2fa4f7, "vb2_queue_init" },
	{ 0x730f2eae, "v4l2_m2m_init" },
};

MODULE_INFO(depends, "v4l2-jpeg");

MODULE_ALIAS("of:N*T*Cnxp,imx8qxp-jpgdec");
MODULE_ALIAS("of:N*T*Cnxp,imx8qxp-jpgdecC*");
MODULE_ALIAS("of:N*T*Cnxp,imx8qxp-jpgenc");
MODULE_ALIAS("of:N*T*Cnxp,imx8qxp-jpgencC*");
