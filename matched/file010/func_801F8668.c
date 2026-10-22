#include "context.h"

typedef struct func_801F8668_Pos { u8 pad[0x12]; u16 unk12; } func_801F8668_Pos;
typedef struct func_801F8668_Mid { u8 pad[0x2C]; func_801F8668_Pos *unk2C; } func_801F8668_Mid;
typedef struct func_801F8668_Obj {
    u8 pad0[0x24];
    func_801F8668_Mid *unk24;
    u8 pad1[0x10];
    s32 unk38;
    s16 unk3C;
    u8 unk3E;
    u8 pad3F;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x10];
    s32 unk5C;
} func_801F8668_Obj;
extern func_801F63E0_Struct3 D_80216F0C;
void func_801F8760();
extern void func_80130AA0(s32, u16, s32, f32 *, f32 *, f32 *);

void func_801F8668(func_801F8668_Obj *arg0, volatile s32 arg1) {
    s32 t5C;
    f32 sp38;
    f32 sp34;
    f32 sp30;

    t5C = arg0->unk5C;
    if (D_8012CE9C(arg1, t5C, D_80216F0C, 0xA) == 0) {
        func_801F4620((func_801F4620_Struct *)&sp30, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.5f);
        func_80130AA0(0, arg0->unk24->unk2C->unk12, 0, &sp30, &sp34, &sp38);
        arg0->unk3E = 3;
        arg0->unk40 = sp30;
        arg0->unk48 = sp38;
        arg0->unk3C = 0xA;
        arg0->unk44 = 2.0f;
        func_800058DC(arg0, (s32)func_801F8760);
    }
}
