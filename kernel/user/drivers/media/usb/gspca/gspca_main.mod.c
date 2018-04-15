#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xbaf6ecfe, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x13005f50, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x833c27b1, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xcce7745c, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x57ec0523, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xdffdda13, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x85afe225, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x4038024e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_g_ctrl) },
	{ 0xc89af14, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x89400fe8, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xe1d6b617, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x8e69ce81, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xf9c0b663, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0x2463459, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x3776d7d2, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xccee388f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8688089, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xc7f1d405, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x1094ba, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x5e8bb85f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6e2993a6, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x4bd81392, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x3107eced, __VMLINUX_SYMBOL_STR(vm_insert_page) },
	{ 0xfb2514b8, __VMLINUX_SYMBOL_STR(__v4l2_ctrl_s_ctrl) },
	{ 0x66fe5a61, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x120012f7, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x8f2778b1, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd30e5705, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x874f9841, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0xbd36165, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x4a1a763f, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xa0b04675, __VMLINUX_SYMBOL_STR(vmalloc_32) },
	{ 0x4ed31a03, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x281000f6, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8ed281fa, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x6a043137, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x31244073, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x2ea9ff03, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xecb54035, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0x474fa61b, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x273df94, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xa4cc81e5, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x203e82a3, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x141c6f4d, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x7453b411, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F5C20D78E083AA5A11E6F23");
