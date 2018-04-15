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
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x95d9014c, __VMLINUX_SYMBOL_STR(regulator_set_voltage) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xcf8cc5ee, __VMLINUX_SYMBOL_STR(msm_bus_scale_unregister_client) },
	{ 0xbedade9d, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0xdf904ecf, __VMLINUX_SYMBOL_STR(irq_to_desc) },
	{ 0x66d68ae9, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x78eab3e3, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0x90462610, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x9837482e, __VMLINUX_SYMBOL_STR(platform_bus_type) },
	{ 0x6d990714, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x78f062cb, __VMLINUX_SYMBOL_STR(msm_bus_scale_client_update_request) },
	{ 0x8b2627a6, __VMLINUX_SYMBOL_STR(subsystem_restart_dev) },
	{ 0xfb64dd2c, __VMLINUX_SYMBOL_STR(msm_pcie_pm_control) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xf0a9ba28, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x60d898c9, __VMLINUX_SYMBOL_STR(arm_iommu_create_mapping) },
	{ 0xd8d4d1c4, __VMLINUX_SYMBOL_STR(msm_dump_data_register) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x2a3e5257, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x8a8e033e, __VMLINUX_SYMBOL_STR(regulator_count_voltages) },
	{ 0x3424b043, __VMLINUX_SYMBOL_STR(subsys_unregister) },
	{ 0x3e6ae931, __VMLINUX_SYMBOL_STR(subsys_register) },
	{ 0x9f0ca2b7, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x7d65c56e, __VMLINUX_SYMBOL_STR(msm_bus_cl_get_pdata) },
	{ 0xc31d4845, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x80b7e472, __VMLINUX_SYMBOL_STR(pci_store_saved_state) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2f06dfa3, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xfadf2436, __VMLINUX_SYMBOL_STR(memstart_addr) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x228f4555, __VMLINUX_SYMBOL_STR(kimage_voffset) },
	{ 0x9e6c4547, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x41fac243, __VMLINUX_SYMBOL_STR(subsystem_get) },
	{ 0x5e746e68, __VMLINUX_SYMBOL_STR(devm_clk_put) },
	{ 0xd71f745e, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0x58cb0ce5, __VMLINUX_SYMBOL_STR(pci_load_saved_state) },
	{ 0x144cb4fd, __VMLINUX_SYMBOL_STR(iommu_domain_set_attr) },
	{ 0x4cdf9e0b, __VMLINUX_SYMBOL_STR(regulator_set_load) },
	{ 0x3c8f6800, __VMLINUX_SYMBOL_STR(create_ramdump_device) },
	{ 0x2fbc3afe, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xa0e7be1f, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0xf31360b3, __VMLINUX_SYMBOL_STR(msm_bus_cl_clear_pdata) },
	{ 0x78b307aa, __VMLINUX_SYMBOL_STR(arch_setup_dma_ops) },
	{ 0xcad077ee, __VMLINUX_SYMBOL_STR(arm_iommu_attach_device) },
	{ 0x7129fa1b, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x579fbcd2, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x7522f3ba, __VMLINUX_SYMBOL_STR(irq_modify_status) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x6aab78a0, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x2f8a7780, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xb08e0bf0, __VMLINUX_SYMBOL_STR(arm_iommu_release_mapping) },
	{ 0xf07edf22, __VMLINUX_SYMBOL_STR(arm_iommu_detach_device) },
	{ 0x69172e7f, __VMLINUX_SYMBOL_STR(destroy_ramdump_device) },
	{ 0xbd4b41bd, __VMLINUX_SYMBOL_STR(msm_pcie_shadow_control) },
	{ 0x93cbcd9b, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7ded90b3, __VMLINUX_SYMBOL_STR(msm_bus_scale_register_client) },
	{ 0xba4235f0, __VMLINUX_SYMBOL_STR(core_ctl_set_boost) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x3a0d61bc, __VMLINUX_SYMBOL_STR(subsystem_put) },
	{ 0x33f0768c, __VMLINUX_SYMBOL_STR(cpufreq_quick_get_max) },
	{ 0x8f5d6f17, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0x6e17a5b6, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x6af6e993, __VMLINUX_SYMBOL_STR(do_ramdump) },
	{ 0xb017557a, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x64f13aa5, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x9380fc83, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x4511f3a9, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xa0208e02, __VMLINUX_SYMBOL_STR(irq_set_affinity_hint) },
	{ 0x8dda4754, __VMLINUX_SYMBOL_STR(msm_pcie_enumerate) },
	{ 0xc24d3d45, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0xfe2ea7cc, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xda7c567b, __VMLINUX_SYMBOL_STR(devm_regulator_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

