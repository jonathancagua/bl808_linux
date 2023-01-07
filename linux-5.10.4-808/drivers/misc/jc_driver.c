#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int __init hellowolrd_init(void) {
    pr_info("init driver jc!\n");
    return 0;
}

static void __exit hellowolrd_exit(void) {
    pr_info("end driver jc\n");
}

module_init(hellowolrd_init);
module_exit(hellowolrd_exit);
MODULE_AUTHOR("Jonathan Cagua<jonathan.cagua@gmail.com>");
MODULE_LICENSE("GPL");
