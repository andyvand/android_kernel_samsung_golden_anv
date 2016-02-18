#ifndef LINUX_BCMA_PRIVATE_H_
#define LINUX_BCMA_PRIVATE_H_

#ifndef pr_fmt
#define pr_fmt(fmt)		KBUILD_MODNAME ": " fmt
#endif /* pr_fmt */

#include <linux/bcma/bcma.h>
#include <linux/delay.h>

#ifndef BCMA_CORE_SIZE
#define BCMA_CORE_SIZE		0x1000
#endif /* BCMA_CORE_SIZE */

struct bcma_bus;

/* main.c */
extern int bcma_bus_register(struct bcma_bus *bus);
extern void bcma_bus_unregister(struct bcma_bus *bus);

/* scan.c */
int bcma_bus_scan(struct bcma_bus *bus);

#ifdef CONFIG_BCMA_HOST_PCI
/* host_pci.c */
extern int __init bcma_host_pci_init(void);
extern void __exit bcma_host_pci_exit(void);
#endif /* CONFIG_BCMA_HOST_PCI */

#endif /* LINUX_BCMA_PRIVATE_H_ */

