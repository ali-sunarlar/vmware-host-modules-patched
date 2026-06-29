#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x86d206f6, "__SCT__WARN_trap" },
	{ 0x0c161ddc, "capable" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0xbd03ed67, "page_offset_base" },
	{ 0xe5179ac5, "hugetlb_optimize_vmemmap_key" },
	{ 0x7a5ffe84, "init_wait_entry" },
	{ 0x7128dad5, "init_net" },
	{ 0xd272d446, "__rcu_read_unlock" },
	{ 0x66f7b997, "sk_skb_reason_drop" },
	{ 0x7c668fd0, "dev_remove_pack" },
	{ 0xf79bf296, "sk_free" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0x9aa6980d, "mutex_lock" },
	{ 0xf51381e1, "skb_push" },
	{ 0xdf0f49cb, "const_current_task" },
	{ 0xccdf694f, "register_netdev" },
	{ 0x5a844b26, "__x86_indirect_thunk_r13" },
	{ 0xa90cd3c4, "free_netdev" },
	{ 0xe6111b34, "_raw_read_unlock" },
	{ 0x402db74e, "memcmp" },
	{ 0x3692ab04, "skb_copy_datagram_iter" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0x444885a7, "_raw_spin_unlock_irqrestore" },
	{ 0x8eba1523, "sk_alloc" },
	{ 0x4c608d55, "proc_mkdir" },
	{ 0x0e9cab28, "memset" },
	{ 0x5a844b26, "__x86_indirect_thunk_r10" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x2247bd2b, "default_wake_function" },
	{ 0x092a35a2, "_copy_to_user" },
	{ 0xe804603d, "__init_waitqueue_head" },
	{ 0x83a734c6, "__pskb_pull_tail" },
	{ 0x64750d72, "netif_rx" },
	{ 0xe2c88a3c, "__netdev_alloc_skb" },
	{ 0x1ad25227, "proc_remove" },
	{ 0x7cd8c895, "_raw_write_unlock_irqrestore" },
	{ 0x888b8f57, "strcmp" },
	{ 0xfd285498, "unregister_netdevice_notifier" },
	{ 0x058c185a, "jiffies" },
	{ 0xdd6830c7, "sprintf" },
	{ 0xbd03ed67, "vmemmap_base" },
	{ 0x1d39cfad, "__dev_queue_xmit" },
	{ 0xfbb17c43, "skb_set_owner_w" },
	{ 0x9aa6980d, "mutex_unlock" },
	{ 0x5a844b26, "__x86_indirect_thunk_rcx" },
	{ 0x01cc6b27, "__register_chrdev" },
	{ 0x62192c3b, "__folio_put" },
	{ 0x7851be11, "__get_user_4" },
	{ 0x7a5d3ece, "__kmalloc_cache_noprof" },
	{ 0x5cb46e6d, "validate_usercopy_range" },
	{ 0xfd285498, "register_netdevice_notifier" },
	{ 0xf0f05721, "seq_printf" },
	{ 0x04058ba0, "skb_copy" },
	{ 0x1d7fb09b, "skb_clone" },
	{ 0xe6111b34, "_raw_read_lock" },
	{ 0xd272d446, "rtnl_lock" },
	{ 0xb730487b, "remove_wait_queue" },
	{ 0x792bbff7, "proc_create_single_data" },
	{ 0x5352a048, "_raw_write_lock_irqsave" },
	{ 0x5af09d8b, "_raw_spin_unlock" },
	{ 0x6bded543, "get_free_pages_noprof" },
	{ 0x29cde941, "__skb_gso_segment" },
	{ 0x5a844b26, "__x86_indirect_thunk_r8" },
	{ 0x0ff0d794, "sock_init_data" },
	{ 0x7851be11, "__SCT__might_resched" },
	{ 0x5f878bdd, "kmalloc_caches" },
	{ 0xb2e62cba, "__trace_set_current_state" },
	{ 0x52b15b3b, "__unregister_chrdev" },
	{ 0xfd4adde5, "get_user_pages_fast" },
	{ 0xa61fd7aa, "__check_object_size" },
	{ 0xd272d446, "rtnl_unlock" },
	{ 0xe35a10d5, "param_ops_uint" },
	{ 0x092a35a2, "_copy_from_user" },
	{ 0xf51381e1, "skb_put" },
	{ 0xd272d446, "__rcu_read_lock" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0x5b245fe2, "consume_skb" },
	{ 0x20fe0e51, "csum_partial" },
	{ 0x7c668fd0, "dev_add_pack" },
	{ 0xa90cd3c4, "unregister_netdev" },
	{ 0xfd8ec9ab, "skb_dequeue" },
	{ 0xb730487b, "finish_wait" },
	{ 0xfbe7861b, "memcpy" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0xcc29d841, "dev_set_promiscuity" },
	{ 0xb730487b, "add_wait_queue" },
	{ 0xc281f1fb, "prepare_to_wait_event" },
	{ 0x13ec44d7, "iov_iter_init" },
	{ 0x68a1b6c6, "__wake_up" },
	{ 0x02e1dca7, "free_pages" },
	{ 0x37197a78, "vsnprintf" },
	{ 0x11f4259a, "_raw_spin_lock_irqsave" },
	{ 0x5af09d8b, "_raw_spin_lock" },
	{ 0xb8e5376f, "__dev_get_by_name" },
	{ 0x0771526e, "ether_setup" },
	{ 0xd272d446, "__fentry__" },
	{ 0xfc919af3, "dev_addr_mod" },
	{ 0x9c32b48d, "eth_type_trans" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0x84d906e5, "alloc_netdev_mqs" },
	{ 0xe8213e80, "_printk" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xd272d446, "schedule" },
	{ 0xc2aa0f6a, "__tracepoint_sched_set_state_tp" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xff0106da, "refcount_warn_saturate" },
	{ 0xd272d446, "__put_user_4" },
	{ 0xb0c84d61, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x86d206f6,
	0x0c161ddc,
	0x90a48d82,
	0xbd03ed67,
	0xe5179ac5,
	0x7a5ffe84,
	0x7128dad5,
	0xd272d446,
	0x66f7b997,
	0x7c668fd0,
	0xf79bf296,
	0xbd03ed67,
	0x9aa6980d,
	0xf51381e1,
	0xdf0f49cb,
	0xccdf694f,
	0x5a844b26,
	0xa90cd3c4,
	0xe6111b34,
	0x402db74e,
	0x3692ab04,
	0xe54e0a6b,
	0x444885a7,
	0x8eba1523,
	0x4c608d55,
	0x0e9cab28,
	0x5a844b26,
	0xd272d446,
	0x2247bd2b,
	0x092a35a2,
	0xe804603d,
	0x83a734c6,
	0x64750d72,
	0xe2c88a3c,
	0x1ad25227,
	0x7cd8c895,
	0x888b8f57,
	0xfd285498,
	0x058c185a,
	0xdd6830c7,
	0xbd03ed67,
	0x1d39cfad,
	0xfbb17c43,
	0x9aa6980d,
	0x5a844b26,
	0x01cc6b27,
	0x62192c3b,
	0x7851be11,
	0x7a5d3ece,
	0x5cb46e6d,
	0xfd285498,
	0xf0f05721,
	0x04058ba0,
	0x1d7fb09b,
	0xe6111b34,
	0xd272d446,
	0xb730487b,
	0x792bbff7,
	0x5352a048,
	0x5af09d8b,
	0x6bded543,
	0x29cde941,
	0x5a844b26,
	0x0ff0d794,
	0x7851be11,
	0x5f878bdd,
	0xb2e62cba,
	0x52b15b3b,
	0xfd4adde5,
	0xa61fd7aa,
	0xd272d446,
	0xe35a10d5,
	0x092a35a2,
	0xf51381e1,
	0xd272d446,
	0xd710adbf,
	0x5b245fe2,
	0x20fe0e51,
	0x7c668fd0,
	0xa90cd3c4,
	0xfd8ec9ab,
	0xb730487b,
	0xfbe7861b,
	0xcb8b6ec6,
	0xcc29d841,
	0xb730487b,
	0xc281f1fb,
	0x13ec44d7,
	0x68a1b6c6,
	0x02e1dca7,
	0x37197a78,
	0x11f4259a,
	0x5af09d8b,
	0xb8e5376f,
	0x0771526e,
	0xd272d446,
	0xfc919af3,
	0x9c32b48d,
	0x5a844b26,
	0x84d906e5,
	0xe8213e80,
	0xbd03ed67,
	0xd272d446,
	0xc2aa0f6a,
	0xd272d446,
	0xff0106da,
	0xd272d446,
	0xb0c84d61,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__SCT__WARN_trap\0"
	"capable\0"
	"__ubsan_handle_out_of_bounds\0"
	"page_offset_base\0"
	"hugetlb_optimize_vmemmap_key\0"
	"init_wait_entry\0"
	"init_net\0"
	"__rcu_read_unlock\0"
	"sk_skb_reason_drop\0"
	"dev_remove_pack\0"
	"sk_free\0"
	"random_kmalloc_seed\0"
	"mutex_lock\0"
	"skb_push\0"
	"const_current_task\0"
	"register_netdev\0"
	"__x86_indirect_thunk_r13\0"
	"free_netdev\0"
	"_raw_read_unlock\0"
	"memcmp\0"
	"skb_copy_datagram_iter\0"
	"__fortify_panic\0"
	"_raw_spin_unlock_irqrestore\0"
	"sk_alloc\0"
	"proc_mkdir\0"
	"memset\0"
	"__x86_indirect_thunk_r10\0"
	"__x86_return_thunk\0"
	"default_wake_function\0"
	"_copy_to_user\0"
	"__init_waitqueue_head\0"
	"__pskb_pull_tail\0"
	"netif_rx\0"
	"__netdev_alloc_skb\0"
	"proc_remove\0"
	"_raw_write_unlock_irqrestore\0"
	"strcmp\0"
	"unregister_netdevice_notifier\0"
	"jiffies\0"
	"sprintf\0"
	"vmemmap_base\0"
	"__dev_queue_xmit\0"
	"skb_set_owner_w\0"
	"mutex_unlock\0"
	"__x86_indirect_thunk_rcx\0"
	"__register_chrdev\0"
	"__folio_put\0"
	"__get_user_4\0"
	"__kmalloc_cache_noprof\0"
	"validate_usercopy_range\0"
	"register_netdevice_notifier\0"
	"seq_printf\0"
	"skb_copy\0"
	"skb_clone\0"
	"_raw_read_lock\0"
	"rtnl_lock\0"
	"remove_wait_queue\0"
	"proc_create_single_data\0"
	"_raw_write_lock_irqsave\0"
	"_raw_spin_unlock\0"
	"get_free_pages_noprof\0"
	"__skb_gso_segment\0"
	"__x86_indirect_thunk_r8\0"
	"sock_init_data\0"
	"__SCT__might_resched\0"
	"kmalloc_caches\0"
	"__trace_set_current_state\0"
	"__unregister_chrdev\0"
	"get_user_pages_fast\0"
	"__check_object_size\0"
	"rtnl_unlock\0"
	"param_ops_uint\0"
	"_copy_from_user\0"
	"skb_put\0"
	"__rcu_read_lock\0"
	"__kmalloc_noprof\0"
	"consume_skb\0"
	"csum_partial\0"
	"dev_add_pack\0"
	"unregister_netdev\0"
	"skb_dequeue\0"
	"finish_wait\0"
	"memcpy\0"
	"kfree\0"
	"dev_set_promiscuity\0"
	"add_wait_queue\0"
	"prepare_to_wait_event\0"
	"iov_iter_init\0"
	"__wake_up\0"
	"free_pages\0"
	"vsnprintf\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_lock\0"
	"__dev_get_by_name\0"
	"ether_setup\0"
	"__fentry__\0"
	"dev_addr_mod\0"
	"eth_type_trans\0"
	"__x86_indirect_thunk_rax\0"
	"alloc_netdev_mqs\0"
	"_printk\0"
	"__ref_stack_chk_guard\0"
	"schedule\0"
	"__tracepoint_sched_set_state_tp\0"
	"__stack_chk_fail\0"
	"refcount_warn_saturate\0"
	"__put_user_4\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9A4FCCBCAC3ECFDD07ABCCC");
