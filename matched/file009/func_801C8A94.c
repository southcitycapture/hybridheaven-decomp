#include "context.h"

struct func_801C8A94_Obj {
    u8 pad[0x12];
    s16 unk12;
    u8 pad2[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
};
struct func_801C8A94_Node {
    u8 pad[0x30];
    struct func_801C8A94_Obj *unk30;
};
struct func_801C8BC0_Node;
void func_801C8BC0(s32 arg0, struct func_801C8BC0_Node **arg1);
extern void func_80005E44(void *, void *);
extern void func_8012C89C(void *, s32, u16, u16);
extern u16 D_801E0BE4[];
extern u16 D_801E0C24[];
extern f32 D_801E3020;

void func_801C8A94(void *arg0, struct func_801C8A94_Node **arg1) {
    extern void func_800058DC(void *, void *);
    s8 i;
    u16 *p;
    f32 k;

    for (i = 0; i < 0x10; i++) {
        func_80005E44(arg0, D_801E0BE4);
    }
    func_80006214(arg0);
    for (i = 0; i < 0x10; i++) {
        p = (u16 *)((u8 *)D_801E0C24 + i * 6);
        func_8012C89C(arg0, i, p[0], p[1]);
    }
    k = D_801E3020;
    for (i = 0; i < 0x10; i++) {
        arg1[i]->unk30->unk18 = k;
        arg1[i]->unk30->unk1C = k;
        arg1[i]->unk30->unk20 = k;
        arg1[i]->unk30->unk12 = 0;
    }
    func_800058DC(arg0, func_801C8BC0);
}
