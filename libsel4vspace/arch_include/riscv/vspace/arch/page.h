/*
 * Copyright 2016, NICTA
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(NICTA_BSD)
 */
#ifndef _VSPACE_ARCH_PAGE_H
#define _VSPACE_ARCH_PAGE_H

#include <autoconf.h>
#include <stddef.h>
#include <utils/attribute.h>
#include <sel4/sel4_arch/constants.h>

/* ordered list of page sizes for this architecture */
static const UNUSED size_t sel4_page_sizes[] = {
    seL4_PageBits,
    seL4_LargePageBits,
    seL4_HugePageBits,
};

#define seL4_ARCH_Page_Map             seL4_RISCV_Page_Map
#define seL4_ARCH_Page_Unmap           seL4_RISCV_Page_Unmap
//#define seL4_ARCH_Page_GetAddress      seL4_RISCV_Page_GetAddress /* TODO */
//#define seL4_ARCH_Page_GetAddress_t    seL4_RISCV_Page_GetAddress_t /* TODO */
#define seL4_ARCH_PageTable_Map        seL4_RISCV_PageTable_Map
#define seL4_ARCH_PageTable_Unmap      seL4_RISCV_PageTable_Unmap
#define seL4_ARCH_ASIDPool_Assign      seL4_RISCV_ASIDPool_Assign
#define seL4_ARCH_ASIDControl_MakePool seL4_RISCV_ASIDControl_MakePool
#define seL4_ARCH_PageTableObject      seL4_RISCV_PageTableObject
#define seL4_ARCH_PageDirectoryObject  seL4_RISCV_PageDirectoryObject
#define seL4_ARCH_Default_VMAttributes seL4_RISCV_Default_VMAttributes
#define seL4_ARCH_VMAttributes         seL4_RISCV_VMAttributes
#define seL4_ARCH_4KPage               seL4_RISCV_4K_Page 
#define seL4_ARCH_Uncached_VMAttributes 0
#define seL4_ARCH_LargePageObject      seL4_RISCV_2M_Page 
/* for size of a large page object use seL4_LargePageBits */
/* Remap does not exist on all kernels */
#define seL4_ARCH_Page_Remap           seL4_RISCV_Page_Remap
//#define ARCHPageGetAddress             RISCVPageGetAddress /* TODO */

#endif /* _VSPACE_ARCH_PAGE_H */
