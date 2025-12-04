/*
 * -------------------------------------------------------------
 * OXIDE system type defines
 * Copyright (c) 2025, Ian Moffett and the OXIDE SYSTEMS engineers
 * All rights reserved.
 * Provided under the BSD 3-Clause license.
 * -------------------------------------------------------------
 */

#ifndef _SYS_CDEFS_H_
#define _SYS_CDEFS_H_ 1

#define ASMV            __asm__ __volatile__
#define ATTR(x)         __attribute__((x))
#define PACKED          ATTR(packed)
#define NORETURN        ATTR(noreturn)
#define ALIGN(n)        ATTR(aligned(n))
#define ALWAYS_INLINE   ATTR(always_inline)

#endif  /* !_SYS_CDEFS_H_ */
