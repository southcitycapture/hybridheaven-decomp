#include "common.h"
typedef struct func_801F10C8_Struct_Inner2 {
    u8 pad0[0x4];
    u16 unk4;
} func_801F10C8_Struct_Inner2;
typedef struct func_801F10C8_Struct_Inner {
    u8 pad0[0x68];
    func_801F10C8_Struct_Inner2 *unk68;
} func_801F10C8_Struct_Inner;
typedef struct func_801F10C8_Struct {
    u8 pad0[0xDC];
    func_801F10C8_Struct_Inner *unkDC;
    u8 pad1[0xEF0 - 0xE0];
    u16 unkEF0;
} func_801F10C8_Struct;
extern func_801F10C8_Struct D_801BBBF0;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);


typedef struct func_801F152C_Tab { f32 f[4][3]; } func_801F152C_Tab;
typedef struct func_801F152C_In { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad1[2]; s16 unk12; } func_801F152C_In;
typedef struct func_801F152C_Obj { u8 pad[0x22]; u8 unk22; u8 pad1[9]; func_801F152C_In *unk2C; } func_801F152C_Obj;
typedef struct func_801F152C_Struct { u8 pad[0xE0]; func_801F152C_Obj *unkE0; u8 pad1[0xF4 - 0xE4]; u8 unkF4; u8 pad2[2]; u8 unkF7; } func_801F152C_Struct;
extern func_801F152C_Tab D_80216C50;
extern func_801F152C_Tab D_80216C80;
extern f32 D_802187B0;
extern void func_801518D4(s32, s32, s32);
extern void func_801FD97C(f32, f32, f32, f32, f32, f32);
void func_801F152C(s32);

#define G ((func_801F152C_Struct *)&D_801BBBF0)

void func_801F152C(arg0)
u8 arg0;
{
    f32 spCC, spC8, spC4, k, spBC, c, spB4, spB0, spAC, spA8, spA4;
    s16 spA2;
    func_801F152C_Tab t1;
    func_801F152C_Tab t0;

    t1 = D_80216C50;
    t0 = D_80216C80;
    if (G->unkF7 >= 4) {
        G->unkF7 = 0;
    }
    if (arg0 == 0) goto c0;
    if (arg0 == 1) goto c1;
    if (arg0 == 2) goto c2;
    k = spA4;
    goto end;
c0:
    k = D_802187B0;
    spA2 = 0;
    if (1) goto end;
c1:
    k = 5.0f;
    spA2 = 0x2AA;
    if (1) goto end;
c2:
    k = 7.5f;
    spA2 = -0x1C7;
end:
    if (G->unkE0->unk22 != 0) {
        if (G->unkF4 != 0) {
            spB4 = func_8001EAD0(G->unkE0->unk2C->unk12 - 0xB0) * k;
            c = func_8001EB64(G->unkE0->unk2C->unk12 - 0xB0);
        } else {
            spB4 = func_8001EAD0(G->unkE0->unk2C->unk12 - 0x70) * k;
            c = func_8001EB64(G->unkE0->unk2C->unk12 - 0x70);
        }
    } else {
        spB4 = func_8001EAD0(G->unkE0->unk2C->unk12 + 0x18) * k;
        c = func_8001EB64(G->unkE0->unk2C->unk12 + 0x18);
    }
    if (G->unkE0->unk22 != 0) {
        spCC = G->unkE0->unk2C->unk4 + spB4;
        spC8 = t1.f[G->unkF7][arg0] + G->unkE0->unk2C->unk8;
        spC4 = G->unkE0->unk2C->unkC + c * k;
    } else {
        spCC = G->unkE0->unk2C->unk4 + spB4;
        spC8 = t0.f[G->unkF7][arg0] + G->unkE0->unk2C->unk8;
        spC4 = G->unkE0->unk2C->unkC + c * k;
    }
    if (G->unkE0->unk22 != 0) {
        spAC = func_8001EAD0(G->unkE0->unk2C->unk12) * k;
        spA8 = func_8001EB64(G->unkE0->unk2C->unk12) * k;
    } else {
        spAC = func_8001EAD0(G->unkE0->unk2C->unk12 + 0x40) * k;
        spA8 = func_8001EB64(G->unkE0->unk2C->unk12 + 0x40) * k;
    }
    spBC = func_8001EAD0(spA2) * k;
    func_801518D4(0, 7, 3);
    func_801FD97C(spCC, spC8, spC4, spAC, spBC, spA8);
}
