#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xefc72b87, "module_layout" },
	{ 0x77ba5d1, "cdev_del" },
	{ 0x4998222d, "hrtimer_cancel" },
	{ 0xfe990052, "gpio_free" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x67dc5402, "class_destroy" },
	{ 0xa06673ee, "device_destroy" },
	{ 0x5b586cbc, "hrtimer_init" },
	{ 0xd05ae7ea, "cdev_add" },
	{ 0x681fd752, "cdev_init" },
	{ 0xafb7f488, "device_create" },
	{ 0x25bae955, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x8e8383ad, "gpiod_direction_input" },
	{ 0x3dae19e9, "gpiod_export" },
	{ 0x42086fb8, "gpiod_direction_output_raw" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x5f754e5a, "memset" },
	{ 0x4a16dd15, "hrtimer_start_range_ns" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x97255bdf, "strlen" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x91715312, "sprintf" },
	{ 0xf972999c, "gpiod_get_raw_value" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x697ad648, "kmem_cache_alloc_trace" },
	{ 0x803600d2, "kmalloc_caches" },
	{ 0x1f1e05af, "hrtimer_forward" },
	{ 0x37a0cba, "kfree" },
	{ 0x7c32d0f0, "printk" },
	{ 0xba32bd1b, "gpiod_set_raw_value" },
	{ 0x8b489103, "gpio_to_desc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B948CABDFF94E415E8FD446");
