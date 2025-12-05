/*
 * -------------------------------------------------------------
 * OXIDE parameters and helpers
 * Copyright (c) 2025, Ian Moffett and the OXIDE SYSTEMS engineers
 * All rights reserved.
 * Provided under the BSD 3-Clause license.
 * -------------------------------------------------------------
 */

#ifndef _SYS_PARAMS_H_
#define _SYS_PARAMS_H_ 1

#include <sys/types.h>

/* Bit related macros */
#define ISSET(v, f)  ((v) & (f))
#define BIT(n) (1ULL << (n))
#define MASK(n) ((1ULL << n) - 1)

/* Min/max macros */
#define MIN(a,b) (((a) < (b)) ? (a) : (b))
#define MAX(a,b) (((a) > (b)) ? (a) : (b))

/* Align up/down a value */
#define ALIGN_DOWN(value, align)      ((value) & ~((align)-1))
#define ALIGN_UP(value, align)        (((value) + (align)-1) & ~((align)-1))

/* Bitmap helper macros */
#define SETBIT(a, b) ((a)[(b) >> 3] |= BIT(b % 8))
#define CLRBIT(a, b) ((a)[(b) >> 3] &= ~BIT(b % 8))
#define TESTBIT(a, b) (ISSET((a)[(b) >> 3], BIT(b % 8)))

/* Offset a pointer by 'N' */
#define PTR_OFFSET(PTR, N)  (void *)((__uintptr_t)PTR + N)
#define PTR_NOFFSET(PTR, N) (void *)((__uintptr_t)PTR - N)

#define NELEM(a) (sizeof(a) / sizeof(a[0]))

#endif  /* !_SYS_PARAMS_H_ */
