#include "context.h"

struct func_801F9EC4_Pos { u8 pad0[4]; f32 x; f32 y; f32 z; };
struct func_801F9EC4_Mid { u8 pad0[0x12]; s16 unk12; u8 pad1[0x18]; struct func_801F9EC4_Pos *unk2C; };
struct func_801F9EC4_Mid2 { u8 pad0[0x2C]; struct func_801F9EC4_Pos *unk2C; };
struct func_801F9EC4_Obj { u8 pad0[0x24]; struct func_801F9EC4_Mid2 *unk24; u8 pad1[0x34]; s32 unk5C; };
extern u8 D_80218C28[];

void func_801F9EC4(struct func_801F9EC4_Obj *arg0, s32 arg1) {
    s32 sp74;
    f32 sp68[3];
    func_801F467C_Struct sp5C;
    s8 sp5B;

    sp74 = arg0->unk5C;
    func_8013A334(sp68, arg1, (void *)sp74, 6);
    func_8012A94C(arg0, 0x100);
    if (D_8012CE9C(arg1, sp74, *(func_801F63E0_Struct3 *)&D_80216EE8, 0xA) == 0) {
        func_801FA2E0();
        func_801F467C(((struct func_801F9EC4_Mid *)arg0->unk24->unk2C)->unk12, &sp5C);
        func_80147768((f32 *)&sp5C, 22.0f);
        sp5B = D_8011AAF4(D_80218C28, 0x9A6, arg0, 0, 2, 1.0f,
            arg0->unk24->unk2C->x + sp5C.unk0 + VEC->unk0,
            arg0->unk24->unk2C->y + 5.0f + sp5C.unk4 + VEC->unk4,
            arg0->unk24->unk2C->z + sp5C.unk8 + VEC->unk8,
            1.0f, sp68[0], sp68[1], sp68[2], 3.0f, 35.0f, -1, -1);
        if (func_80010550(arg1, sp74) != 0 && sp5B == 0) {
            func_800058DC(arg0, (s32)func_801F5F5C);
        }
    }
}
