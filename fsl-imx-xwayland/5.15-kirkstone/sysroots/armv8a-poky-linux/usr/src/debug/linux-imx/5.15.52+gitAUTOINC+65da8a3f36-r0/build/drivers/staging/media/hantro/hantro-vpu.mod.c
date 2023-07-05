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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc30f8a7c, "module_layout" },
	{ 0xdbddccd7, "v4l2_m2m_ioctl_prepare_buf" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x96c47d00, "kmalloc_caches" },
	{ 0xebb2d931, "v4l2_event_unsubscribe" },
	{ 0x1410ffac, "v4l2_m2m_ioctl_dqbuf" },
	{ 0x1d121312, "v4l2_m2m_buf_copy_metadata" },
	{ 0x7f3e258, "pm_runtime_force_suspend" },
	{ 0x94d09dc3, "video_device_release_empty" },
	{ 0x702477d5, "__pm_runtime_disable" },
	{ 0x2c620a2d, "v4l2_h264_build_p_ref_list" },
	{ 0xbcde32ad, "param_ops_int" },
	{ 0x95879b36, "__pm_runtime_use_autosuspend" },
	{ 0x6e9acc41, "v4l2_fill_pixfmt_mp" },
	{ 0x421d8958, "media_device_unregister_entity" },
	{ 0x9fef35ac, "v4l2_apply_frmsize_constraints" },
	{ 0x5dd3aa5a, "__pm_runtime_suspend" },
	{ 0x6c5920e4, "v4l2_m2m_ctx_init" },
	{ 0xfa619b2e, "media_devnode_create" },
	{ 0xead5c8e5, "clk_bulk_prepare" },
	{ 0x61f34b2, "v4l2_device_unregister" },
	{ 0x8aa6a1a9, "v4l2_ctrl_handler_free" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0x434f470d, "pm_runtime_force_resume" },
	{ 0xe461a126, "vb2_ops_wait_prepare" },
	{ 0x78a0680d, "devm_ioremap_resource" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x13a9d681, "__video_register_device" },
	{ 0x1bf141de, "vb2_request_validate" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xce46e2c6, "v4l2_m2m_fop_mmap" },
	{ 0xd30755fb, "__pm_runtime_resume" },
	{ 0xaa830fbb, "dma_free_attrs" },
	{ 0xdd64e639, "strscpy" },
	{ 0xf5ca1375, "devm_kasprintf" },
	{ 0x4b86495d, "dma_set_coherent_mask" },
	{ 0xb12f87a7, "__platform_driver_register" },
	{ 0x48142ebb, "v4l2_m2m_ioctl_streamon" },
	{ 0xcb5a9f4, "v4l2_device_register" },
	{ 0x247e393f, "v4l2_m2m_ioctl_create_bufs" },
	{ 0x6df97c43, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xc9a07e4a, "vb2_vmalloc_memops" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xd743c8a1, "v4l2_m2m_ioctl_streamoff" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x553217c9, "of_match_node" },
	{ 0xa3b8e11a, "video_unregister_device" },
	{ 0xa0059b7d, "v4l2_m2m_ioctl_reqbufs" },
	{ 0xad815c91, "media_entity_pads_init" },
	{ 0x4de94385, "v4l2_fh_init" },
	{ 0x37cc1d83, "v4l2_ctrl_subscribe_event" },
	{ 0xd2f0de4c, "vb2_plane_vaddr" },
	{ 0xbd552e4a, "vb2_buffer_done" },
	{ 0xc56eb497, "dma_alloc_attrs" },
	{ 0x2da9c344, "platform_get_resource" },
	{ 0x81a10ad4, "v4l2_ctrl_new_custom" },
	{ 0xe04c476a, "_dev_err" },
	{ 0x68d7f162, "v4l2_ctrl_request_setup" },
	{ 0x4b224860, "v4l2_h264_init_reflist_builder" },
	{ 0xc7a7e770, "clk_bulk_enable" },
	{ 0xaf5e09e7, "media_device_cleanup" },
	{ 0xc07f95f8, "media_device_register_entity" },
	{ 0xf1ff0e22, "vb2_plane_cookie" },
	{ 0xd5c634b, "v4l2_m2m_get_vq" },
	{ 0xbeb162f8, "kmem_cache_alloc" },
	{ 0x65b799b9, "v4l2_ctrl_find" },
	{ 0x39376624, "v4l2_m2m_ioctl_qbuf" },
	{ 0x25dc8e32, "v4l2_ctrl_request_complete" },
	{ 0x3737c6d, "v4l2_m2m_fop_poll" },
	{ 0xb9159e83, "pm_runtime_enable" },
	{ 0x459e133f, "v4l2_m2m_get_curr_priv" },
	{ 0xf0b85309, "video_devdata" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x3bb6399b, "v4l2_m2m_buf_queue" },
	{ 0xf56ebd38, "platform_get_irq_byname" },
	{ 0xc3d485c1, "v4l2_ctrl_handler_setup" },
	{ 0xe9e57211, "v4l2_m2m_request_queue" },
	{ 0xdfd6479b, "devm_clk_bulk_get" },
	{ 0x92997ed8, "_printk" },
	{ 0x43cddcde, "v4l2_m2m_ioctl_querybuf" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xb5716dfc, "media_create_pad_link" },
	{ 0x8a43da2c, "media_entity_remove_links" },
	{ 0x6efe7b1c, "media_create_intf_link" },
	{ 0xc2e95495, "devm_clk_get" },
	{ 0xa732a43d, "v4l2_m2m_ioctl_expbuf" },
	{ 0xd56e619e, "platform_get_resource_byname" },
	{ 0x602c0ff2, "vb2_find_timestamp" },
	{ 0xbf9dc044, "__media_device_register" },
	{ 0x63c08029, "clk_bulk_unprepare" },
	{ 0x2d563a3d, "vb2_dma_contig_memops" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7223fd5, "vb2_dma_contig_set_max_seg_size" },
	{ 0x4829a47e, "memcpy" },
	{ 0x479f7d4b, "clk_bulk_disable" },
	{ 0x61d3a67b, "v4l2_ctrl_handler_init_class" },
	{ 0x8d20e1f7, "v4l2_m2m_buf_done_and_job_finish" },
	{ 0x64dc404b, "v4l2_m2m_buf_remove" },
	{ 0x315a5094, "vb2_ops_wait_finish" },
	{ 0x8baaeb0d, "v4l2_fh_add" },
	{ 0xee319436, "v4l2_m2m_ctx_release" },
	{ 0x8ddd463a, "pm_runtime_set_autosuspend_delay" },
	{ 0x6b520584, "v4l2_fh_del" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd6bb7d88, "media_device_init" },
	{ 0x72072124, "platform_get_irq" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xc4bd72a0, "platform_driver_unregister" },
	{ 0x5150f937, "v4l2_h264_build_b_ref_lists" },
	{ 0x9b70a0e2, "devm_kmalloc" },
	{ 0xf718b910, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xbaaacbf2, "v4l2_m2m_next_buf" },
	{ 0x4771aba4, "media_device_unregister" },
	{ 0xf01ed666, "video_ioctl2" },
	{ 0x45eb8473, "media_devnode_remove" },
	{ 0x4efd875c, "v4l2_fh_exit" },
	{ 0x6e2fa4f7, "vb2_queue_init" },
	{ 0x730f2eae, "v4l2_m2m_init" },
};

MODULE_INFO(depends, "v4l2-h264");

MODULE_ALIAS("of:N*T*Cnxp,imx8mq-vpu");
MODULE_ALIAS("of:N*T*Cnxp,imx8mq-vpuC*");
MODULE_ALIAS("of:N*T*Cnxp,imx8mq-vpu-g2");
MODULE_ALIAS("of:N*T*Cnxp,imx8mq-vpu-g2C*");
