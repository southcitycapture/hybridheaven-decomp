#include "context.h"

/* Exact context.h declarations for every name used here (the in-file build drops the #include,
   so these must appear in this function's own text). */
extern void func_800058DC(void *, void *);
extern void func_80005700(void *);
extern void func_80005F6C(void *, void *);
extern void func_80006214(void *);
extern void func_8012636C(void *, s32);
extern void func_80126EAC(void);
extern s32 func_80126CC0(void *, void *);
extern s32 func_80133A24(s32);
extern u8 D_80164F40[];
extern s32 D_801BBCD0;
/* Unprototyped form of the context.h prototype for func_80240D74 (compatible with it, and avoids
   pulling in its struct typedefs before this function). */
extern void func_80240D74();

void func_80240CE0(s32 arg0, s32 arg1) {
    if (D_801BBCD0 != 0) {
        if (func_80133A24(0x47) != 0) {
            func_80005700((void *) arg0);
        }
        if (func_80126CC0((void *) arg0, (void *) func_80126EAC) != 0) {
            func_80005F6C((void *) arg0, D_80164F40);
            func_80006214((void *) arg0);
            func_8012636C((void *) arg0, 0);
            func_800058DC((void *) arg0, (void *) func_80240D74);
        }
    }
}
