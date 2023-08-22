#include <linux/module.h>

int start(void) { return 0; }

void cleanup(void) {}

module_init(start);
module_exit(cleanup);

MODULE_LICENSE("GPL");
