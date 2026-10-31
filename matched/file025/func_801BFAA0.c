#include "common.h"
extern s32 D_801D8C00[];
extern s32 D_801D8CE4;
extern s32 D_801D8CE8;
extern s32 D_801D8CF0;
extern s32 D_801D8CF4;
extern s32 D_801D8CF8;
extern void (*D_801D8D28[])(void);
void func_801BFF20(void);
void func_801BFFAC(void);


typedef struct func_801BFAA0_Args {
    s32 a;
    s32 b;
    s32 c;
} func_801BFAA0_Args;

typedef struct func_801BFAA0_Struct {
    u64 time;
    u32 flags;
    func_801BFAA0_Args args;
} func_801BFAA0_Struct;

#define TBL ((func_801BFAA0_Struct **)((s32 *)D_801D8C00[D_801D8CE4] + D_801D8CE8))

extern s32 D_801BF7A0();

s32 func_801BFAA0(void) {
    func_801BFAA0_Struct *e;
    u8 pad[0x18];
    u64 t;
    s32 v;
    s32 i;
    s32 m;
    func_801BFAA0_Struct *base;

    v = (s32)*TBL;
    if (v) {
        t = (*TBL + D_801D8CF0)->time;
        v = (t & 0x80000000) ? 1 : 0;
        if (v == 0) {
            if (func_801C0B8C(t) != 0) {
                do {
                    m = 1;
                    for (i = 0; i != 9; i++) {
                        e = *TBL + D_801D8CF0;
                        if (e->flags & m) {
                            D_801BF7A0(i, e->args);
                        }
                        m <<= 1;
                    }
                    D_801D8CF0 = D_801D8CF0 + 1;
                } while (func_801C0B8C((*TBL + D_801D8CF0)->time) != 0);
                return 1;
            }
        } else if (func_801C0B8C(t & 0x7FFFFFFF) != 0) {
            func_801BFF20();
            D_801D8CF4 = (*TBL + D_801D8CF0)->flags;
            func_801BFFAC();
            D_801D8CF8 = *TBL == 0;
            return 0;
        }
    }
    return 1;
}
