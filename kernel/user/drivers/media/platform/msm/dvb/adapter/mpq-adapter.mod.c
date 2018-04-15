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
	{ 0x5ab4496e, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_free) },
	{ 0xc3c77f8d, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_init) },
	{ 0x8c242cd9, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_pkt_close) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x95f8230b, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0xf23a08e3, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_read_user) },
	{ 0xe1d6b617, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa9db7ccf, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_pkt_dispose) },
	{ 0xe60d865f, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_write) },
	{ 0x3a0aa4da, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x3776d7d2, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xccee388f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7caa224e, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_read) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x68338e17, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_pkt_start) },
	{ 0xb7a60dae, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_pkt_next) },
	{ 0xab56e804, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_avail) },
	{ 0x932e584d, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc09c6727, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x9510a851, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_flush) },
	{ 0xa7b76181, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_pkt_read) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

