#include "common.h"
#define HHCAT2(a, b) a##b
#define HHCAT(a, b) HHCAT2(a, b)
extern s32 func_8012D918(void *, s32, s16, s32, s32);

extern s16 D_802473C4[];
extern void func_80005700(void *);
typedef struct func_80246360_Struct { u8 pad[0x3C]; u16 unk3C; } func_80246360_Struct;
void func_80246360(func_80246360_Struct *arg0, s32 arg1) {
    s32 t = arg0->unk3C;
    s16 v;
    arg0->unk3C++;
    if (t % 2) {
        return;
    }
    v = D_802473C4[t / 2];
    if (v >= 0) {
        func_8012D918(arg0, 0x2DD, v, 0, 0);
    } else {
        func_80005700(arg0);
    }
}
