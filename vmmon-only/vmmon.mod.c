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
	{ 0x8c27d13c, "fget" },
	{ 0xd5c3f38c, "up" },
	{ 0xb2fa43dd, "kernel_sigaction" },
	{ 0xfbe7861b, "memcpy" },
	{ 0xf1de9e85, "vunmap" },
	{ 0xbb49014e, "smp_ops" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x86693e87, "schedule_hrtimeout_range" },
	{ 0x5e505530, "kthread_should_stop" },
	{ 0x2352b148, "timer_delete_sync" },
	{ 0x02e1dca7, "free_pages" },
	{ 0x37197a78, "vsnprintf" },
	{ 0x5723059f, "msleep_interruptible" },
	{ 0xd272d446, "__fentry__" },
	{ 0x6d060c9f, "wake_up_process" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0xe8213e80, "_printk" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0x6ac784f4, "schedule_timeout" },
	{ 0xd272d446, "schedule" },
	{ 0xc2aa0f6a, "__tracepoint_sched_set_state_tp" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xf296206e, "cpu_khz" },
	{ 0x8a7140c6, "smp_call_function" },
	{ 0xdfb0fec4, "__free_pages" },
	{ 0x1b60315e, "copy_from_kernel_nofault" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0xbd03ed67, "page_offset_base" },
	{ 0xe5179ac5, "hugetlb_optimize_vmemmap_key" },
	{ 0x76f7b45c, "poll_initwait" },
	{ 0xb1e9a349, "fput" },
	{ 0x8efcc8cd, "down_write" },
	{ 0x8efcc8cd, "up_write" },
	{ 0xa470b7e2, "add_timer" },
	{ 0x76f7b45c, "poll_freewait" },
	{ 0x32feeafc, "mod_timer" },
	{ 0xd5c3f38c, "down" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xd7a59a65, "vmalloc_noprof" },
	{ 0x5a844b26, "__x86_indirect_thunk_rbx" },
	{ 0xdf0f49cb, "const_current_task" },
	{ 0xbd03ed67, "phys_base" },
	{ 0x9f2438ff, "vmap" },
	{ 0x680628e7, "ktime_get_raw_ts64" },
	{ 0xf654f750, "_totalram_pages" },
	{ 0x2548f01a, "kthread_stop" },
	{ 0xa2c25da9, "vmalloc_to_pfn" },
	{ 0x5fc55113, "__default_kernel_pte_mask" },
	{ 0x0e9cab28, "memset" },
	{ 0x4e804fe8, "misc_register" },
	{ 0x56d7bf45, "kernel_read" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x092a35a2, "_copy_to_user" },
	{ 0x888b8f57, "strcmp" },
	{ 0x8efcc8cd, "down_read" },
	{ 0x058c185a, "jiffies" },
	{ 0x2c56d6c6, "kthread_create_on_node" },
	{ 0xbde66a49, "pv_ops" },
	{ 0xbd03ed67, "vmemmap_base" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7ec472ba, "cpu_number" },
	{ 0x7ec472ba, "__preempt_count" },
	{ 0xf296206e, "tsc_khz" },
	{ 0x7851be11, "__get_user_1" },
	{ 0xf1de9e85, "vfree" },
	{ 0x7acf453e, "vm_node_stat" },
	{ 0x21818c3b, "get_user_pages_unlocked" },
	{ 0x62192c3b, "__folio_put" },
	{ 0x7a5d3ece, "__kmalloc_cache_noprof" },
	{ 0x5cb46e6d, "validate_usercopy_range" },
	{ 0x7851be11, "__SCT__cond_resched" },
	{ 0x05c5f69c, "alloc_pages_noprof" },
	{ 0x02f9bbf0, "timer_init_key" },
	{ 0x5a844b26, "__x86_indirect_thunk_r12" },
	{ 0xa9d7de7c, "gdt_page" },
	{ 0x2e5844fe, "schedule_hrtimeout" },
	{ 0x6bded543, "get_free_pages_noprof" },
	{ 0x8efcc8cd, "up_read" },
	{ 0xd272d446, "BUG_func" },
	{ 0x7851be11, "__SCT__might_resched" },
	{ 0x5f878bdd, "kmalloc_caches" },
	{ 0xb2e62cba, "__trace_set_current_state" },
	{ 0x1bdf2bc8, "sme_me_mask" },
	{ 0xfd4adde5, "get_user_pages_fast" },
	{ 0xb6a67cd6, "smp_call_function_single" },
	{ 0xa61fd7aa, "__check_object_size" },
	{ 0x4198ed14, "__init_rwsem" },
	{ 0xf3d07ab4, "misc_deregister" },
	{ 0x092a35a2, "_copy_from_user" },
	{ 0xb6d2afcd, "__num_online_cpus" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0x70d1bcf3, "vmalloc_to_page" },
	{ 0xd272d446, "__SCT__preempt_schedule" },
	{ 0xbd03ed67, "this_cpu_off" },
	{ 0xb0c84d61, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x8c27d13c,
	0xd5c3f38c,
	0xb2fa43dd,
	0xfbe7861b,
	0xf1de9e85,
	0xbb49014e,
	0xcb8b6ec6,
	0x86693e87,
	0x5e505530,
	0x2352b148,
	0x02e1dca7,
	0x37197a78,
	0x5723059f,
	0xd272d446,
	0x6d060c9f,
	0x5a844b26,
	0xe8213e80,
	0xbd03ed67,
	0x6ac784f4,
	0xd272d446,
	0xc2aa0f6a,
	0xd272d446,
	0xf296206e,
	0x8a7140c6,
	0xdfb0fec4,
	0x1b60315e,
	0x90a48d82,
	0xbd03ed67,
	0xe5179ac5,
	0x76f7b45c,
	0xb1e9a349,
	0x8efcc8cd,
	0x8efcc8cd,
	0xa470b7e2,
	0x76f7b45c,
	0x32feeafc,
	0xd5c3f38c,
	0xbd03ed67,
	0xd7a59a65,
	0x5a844b26,
	0xdf0f49cb,
	0xbd03ed67,
	0x9f2438ff,
	0x680628e7,
	0xf654f750,
	0x2548f01a,
	0xa2c25da9,
	0x5fc55113,
	0x0e9cab28,
	0x4e804fe8,
	0x56d7bf45,
	0xd272d446,
	0x092a35a2,
	0x888b8f57,
	0x8efcc8cd,
	0x058c185a,
	0x2c56d6c6,
	0xbde66a49,
	0xbd03ed67,
	0x82fd7238,
	0x7ec472ba,
	0x7ec472ba,
	0xf296206e,
	0x7851be11,
	0xf1de9e85,
	0x7acf453e,
	0x21818c3b,
	0x62192c3b,
	0x7a5d3ece,
	0x5cb46e6d,
	0x7851be11,
	0x05c5f69c,
	0x02f9bbf0,
	0x5a844b26,
	0xa9d7de7c,
	0x2e5844fe,
	0x6bded543,
	0x8efcc8cd,
	0xd272d446,
	0x7851be11,
	0x5f878bdd,
	0xb2e62cba,
	0x1bdf2bc8,
	0xfd4adde5,
	0xb6a67cd6,
	0xa61fd7aa,
	0x4198ed14,
	0xf3d07ab4,
	0x092a35a2,
	0xb6d2afcd,
	0xd710adbf,
	0x70d1bcf3,
	0xd272d446,
	0xbd03ed67,
	0xb0c84d61,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"fget\0"
	"up\0"
	"kernel_sigaction\0"
	"memcpy\0"
	"vunmap\0"
	"smp_ops\0"
	"kfree\0"
	"schedule_hrtimeout_range\0"
	"kthread_should_stop\0"
	"timer_delete_sync\0"
	"free_pages\0"
	"vsnprintf\0"
	"msleep_interruptible\0"
	"__fentry__\0"
	"wake_up_process\0"
	"__x86_indirect_thunk_rax\0"
	"_printk\0"
	"__ref_stack_chk_guard\0"
	"schedule_timeout\0"
	"schedule\0"
	"__tracepoint_sched_set_state_tp\0"
	"__stack_chk_fail\0"
	"cpu_khz\0"
	"smp_call_function\0"
	"__free_pages\0"
	"copy_from_kernel_nofault\0"
	"__ubsan_handle_out_of_bounds\0"
	"page_offset_base\0"
	"hugetlb_optimize_vmemmap_key\0"
	"poll_initwait\0"
	"fput\0"
	"down_write\0"
	"up_write\0"
	"add_timer\0"
	"poll_freewait\0"
	"mod_timer\0"
	"down\0"
	"random_kmalloc_seed\0"
	"vmalloc_noprof\0"
	"__x86_indirect_thunk_rbx\0"
	"const_current_task\0"
	"phys_base\0"
	"vmap\0"
	"ktime_get_raw_ts64\0"
	"_totalram_pages\0"
	"kthread_stop\0"
	"vmalloc_to_pfn\0"
	"__default_kernel_pte_mask\0"
	"memset\0"
	"misc_register\0"
	"kernel_read\0"
	"__x86_return_thunk\0"
	"_copy_to_user\0"
	"strcmp\0"
	"down_read\0"
	"jiffies\0"
	"kthread_create_on_node\0"
	"pv_ops\0"
	"vmemmap_base\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"cpu_number\0"
	"__preempt_count\0"
	"tsc_khz\0"
	"__get_user_1\0"
	"vfree\0"
	"vm_node_stat\0"
	"get_user_pages_unlocked\0"
	"__folio_put\0"
	"__kmalloc_cache_noprof\0"
	"validate_usercopy_range\0"
	"__SCT__cond_resched\0"
	"alloc_pages_noprof\0"
	"timer_init_key\0"
	"__x86_indirect_thunk_r12\0"
	"gdt_page\0"
	"schedule_hrtimeout\0"
	"get_free_pages_noprof\0"
	"up_read\0"
	"BUG_func\0"
	"__SCT__might_resched\0"
	"kmalloc_caches\0"
	"__trace_set_current_state\0"
	"sme_me_mask\0"
	"get_user_pages_fast\0"
	"smp_call_function_single\0"
	"__check_object_size\0"
	"__init_rwsem\0"
	"misc_deregister\0"
	"_copy_from_user\0"
	"__num_online_cpus\0"
	"__kmalloc_noprof\0"
	"vmalloc_to_page\0"
	"__SCT__preempt_schedule\0"
	"this_cpu_off\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D04CBAE67E60F59E1A80F6E");
