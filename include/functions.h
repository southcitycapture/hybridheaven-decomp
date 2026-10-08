#ifndef FUNCTIONS_H
#define FUNCTIONS_H
/* Prototypes confirmed by matching. Workers: use these, never redeclare them differently. */

/* Takes ONE 64-bit argument (passed in $a0:$a1), a duration/time value, e.g. func_801C0B8C(3800000).
   Calls that look like func_801C0B8C(0, X) in m2c output are really func_801C0B8C(X). */
s32 func_801C0B8C(u64 time);

#endif
