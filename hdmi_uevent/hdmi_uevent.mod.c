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

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe0e8752b, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xa6e2b694, __VMLINUX_SYMBOL_STR(gpiod_unexport) },
	{ 0xa2ca9664, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x15baa267, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x23496c84, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0xa5d3879d, __VMLINUX_SYMBOL_STR(gpiod_export) },
	{ 0xde7fd271, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0xc6e61f6f, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0x519874b1, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xccc7a2eb, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0xa5f49124, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4C684DD8FF4D98025E583CE");