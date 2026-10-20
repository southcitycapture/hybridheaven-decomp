#include "context.h"
extern void func_80020718(s32);
extern void func_80370500(void *);
extern void func_803709A8();
void func_80370884(void *arg0, s32 arg1);
void func_803709A8(s32 arg0, s32 arg1);

typedef struct func_8037073C_StructS {
    u8 pad0[2];
    s16 unk2;
    u8 pad1[0x30 - 4];
    u32 b0 : 1;
    u32 b1 : 2;
    u32 b3 : 24;
    u32 b27 : 2;
    u32 b29 : 3;
    u8 pad2[0x390 - 0x34];
    u8 unk390;
} func_8037073C_StructS;

void func_8037073C(arg0, arg1) void *arg0; s32 arg1; {
    func_8037073C_StructS *a;
    func_8037073C_StructS *b;

    a = (func_8037073C_StructS *)(DA->unkDC == *(void **)((u8 *)arg0 + 0xC) ? D_801BC03C : D_801BC3D8);
    b = (func_8037073C_StructS *)(DA->unkDC != *(void **)((u8 *)arg0 + 0xC) ? D_801BC03C : D_801BC3D8);
    if ((DA->unk1031 >= 0xB && DA->unk1031 != 0xF) || a->unk2 <= 0 || a->b1 != 0 || b->unk2 <= 0 || b->b1 != 0) {
        func_80020718(0x6B8);
        func_800058DC(arg0, func_803709A8);
        return;
    }
    if (a->unk390 == 5 && a->b27 == 2) {
        func_80020718(0x5C3);
        func_80370500(*(void **)((u8 *)arg0 + 0xC));
        func_80006214(*(void **)((u8 *)arg0 + 0xC));
        func_80372708(*(void **)((u8 *)arg0 + 0xC), D_8008DA88);
        func_80006214(arg0);
        func_800058DC(arg0, func_80370884);
    }
}
