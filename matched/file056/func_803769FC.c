#include "context.h"

struct func_803769FC_Sub {
    u8 pad0[0xC];
    s16 unkC;
    u8 pad2[2];
    u32 unk10;
};

struct func_803769FC_Obj2 {
    u8 pad0[0x78];
    s16 unk78;
};

struct func_803769FC_Obj {
    u8 pad0[0x38];
    struct func_803769FC_Sub *unk38;
    u8 pad3C[0x20];
    struct func_803769FC_Obj2 *unk5C;
};

extern s32 func_803757E0(void *, s32, s32, s32);
extern s32 func_8012A774(void *, s16, s32);
extern s16 D_801BBD84;
extern void func_800058DC(void *, void *);
extern void func_80376A80(void);

void func_803769FC(struct func_803769FC_Obj *arg0, s32 arg1) {
    struct func_803769FC_Obj2 *sp1C;

    sp1C = arg0->unk5C;
    if (func_803757E0(arg0, arg1, 1, (arg0->unk38->unk10 >> 8) & 0xFF) == 0) {
        if (func_8012A774(arg0, arg0->unk38->unkC, 0x80) != 0) {
            sp1C->unk78 = 1;
            D_801BBD84 = 2;
            func_800058DC(arg0, &func_80376A80);
        }
    }
}
