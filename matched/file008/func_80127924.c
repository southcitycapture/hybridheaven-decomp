#include "context.h"

typedef struct func_80127924_StructB {
    u8 pad0[0x30];
    void *unk30;
} func_80127924_StructB;

typedef struct func_80127924_StructA {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x30 - 0x28];
    func_80127924_StructB *unk30;
} func_80127924_StructA;

extern s32 func_800058DC(s32, void *);
extern void func_80005F6C(s32, void *);
extern void func_80006214(s32);
extern u8 D_80164F40[];
extern u8 D_8017B768[];
extern u8 func_8012798C[];

void func_80127924(s32 arg0, func_80127924_StructA **arg1) {
    func_80005F6C(arg0, D_80164F40);
    func_80006214(arg0);
    (*arg1)->unk30->unk30 = D_8017B768;
    (*arg1)->unk24 = -3;
    func_800058DC(arg0, func_8012798C);
}
