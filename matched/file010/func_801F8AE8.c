#include "context.h"

struct func_801F8AE8_Struct2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x12 - 0x10];
    s16 unk12;
};
struct func_801F8AE8_Struct1 {
    u8 pad0[0x2C];
    struct func_801F8AE8_Struct2 *unk2C;
};
struct func_801F8AE8_Struct3 {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_801F8AE8_Struct0 {
    u8 pad0[0x24];
    struct func_801F8AE8_Struct1 *unk24;
    u8 pad1[0x3C - 0x28];
    s16 unk3C;
    u8 pad2[0x5C - 0x3E];
    struct func_801F8AE8_Struct3 *unk5C;
};
extern void func_801FA5C4(void);
extern u8 D_80218A48[];
extern void func_801F8C50();
extern void func_8013A334(f32 *, s32, void *, s32);
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

void func_801F8AE8(struct func_801F8AE8_Struct0 *arg0, s32 arg1) {
    struct func_801F8AE8_Struct3 *sp74;
    f32 sp68[3];
    func_801F467C_Struct sp5C;
    struct func_801F8AE8_Struct2 *v;

    sp74 = arg0->unk5C;
    func_8012A94C(arg0, 0x100);
    func_8013A334(sp68, arg1, sp74, 6);
    func_801F467C(arg0->unk24->unk2C->unk12, &sp5C);
    func_80147768(&sp5C.unk0, 25.0f);
    if (D_8011AAF4(D_80218A48, 0x807, arg0, 0, 2, 3.0f, arg0->unk24->unk2C->unk4 + sp5C.unk0 + VEC->unk0, arg0->unk24->unk2C->unk8 + 8.0f + sp5C.unk4, arg0->unk24->unk2C->unkC + sp5C.unk8 + VEC->unk8, 3.0f, sp68[0], sp68[1], sp68[2], 0.0f, 35.0f, -1, -1) == 0) {
        func_801FA5C4();
        arg0->unk3C = 0x32;
        sp74->unk78 = 1;
        func_800058DC(arg0, (s32)func_801F8C50);
    }
}
