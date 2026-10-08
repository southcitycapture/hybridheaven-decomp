#include "common.h"

typedef struct func_801C1764_Struct {
    u8 pad[0x3C];
    s16 unk3C;
} func_801C1764_Struct;

extern s32 func_801C1334();
extern void func_800058DC(void *, void *);
extern u8 D_801CC8CC;
extern void func_801C17C8();
extern void func_801C1A30();

void func_801C1764(func_801C1764_Struct *arg0, s32 arg1) {
    if (func_801C1334() & 0xB000) {
        func_800058DC(arg0, func_801C1A30);
    }
    if (D_801CC8CC == 0) {
        arg0->unk3C = 0x30;
        func_800058DC(arg0, func_801C17C8);
    }
}
