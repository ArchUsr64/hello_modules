#include <linux/module.h>
#include <linux/printk.h>

int start(void) {
  pr_info("Hello, World!\n");
  return 0;
}

void cleanup(void) { pr_info("Goodbye, World!\n"); }

module_init(start);
module_exit(cleanup);

MODULE_LICENSE("GPL");
