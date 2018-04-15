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
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x364ddf6, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xdc77a433, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xd2b39fea, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x9040cea9, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xe172a60d, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x5489945, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x800e8de6, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xccee388f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xabf42529, __VMLINUX_SYMBOL_STR(smem_find) },
	{ 0xbfe6eaa, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xf5f7ad1c, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcb4cece, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0x90462610, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x6aab78a0, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x1fae2e2f, __VMLINUX_SYMBOL_STR(of_count_phandle_with_args) },
	{ 0x9f60ad8e, __VMLINUX_SYMBOL_STR(of_find_compatible_node) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0xe1d6b617, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x5e8bb85f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc31d4845, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xde434656, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

