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
	{ 0x5abfd7a4, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x46ad3a45, __VMLINUX_SYMBOL_STR(ip_do_fragment) },
	{ 0x462c660f, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x9272acdc, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x7f6669f7, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0xef4e6ce8, __VMLINUX_SYMBOL_STR(nf_hook_slow) },
	{ 0x31f28bc6, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x835e8ca8, __VMLINUX_SYMBOL_STR(br_dev_queue_push_xmit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x743a1a3b, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x2db00249, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xb6d907c, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x9eb5121d, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xdda5f95d, __VMLINUX_SYMBOL_STR(br_forward_finish) },
	{ 0x30b35ea6, __VMLINUX_SYMBOL_STR(ip_route_input_noref) },
	{ 0xb3e2b852, __VMLINUX_SYMBOL_STR(nf_ipv6_ops) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe44aa4c8, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7df86e45, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x4ed31a03, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2d312c15, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0x78f80bde, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x314974db, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x1e99c885, __VMLINUX_SYMBOL_STR(nf_br_ops) },
	{ 0xbafd13aa, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x50e0af4a, __VMLINUX_SYMBOL_STR(br_handle_frame_finish) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xaf6eb8eb, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

