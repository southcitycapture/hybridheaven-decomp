#include "common.h"
extern u8 D_801BBBF0[];
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern f32 func_8002FC20(f32);


typedef struct func_801F13B8_Struct_B {
    u8 pad[0x4];
    f32 unk4;
    u8 pad8[0x4];
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_801F13B8_Struct_B;
typedef struct func_801F13B8_Struct_C {
    u8 pad[0x2C];
    func_801F13B8_Struct_B *unk2C;
} func_801F13B8_Struct_C;
typedef struct func_801F13B8_Struct_Global {
    u8 pad[0xE0];
    func_801F13B8_Struct_C *unkE0;
} func_801F13B8_Struct_Global;
#define OBJ (((func_801F13B8_Struct_Global *)&D_801BBBF0)->unkE0->unk2C)

void func_801F13B8(f32 arg0, f32 arg1, f32 arg2, f32 arg3, s16 arg4) {
    f32 x;
    f32 z;
    f32 sn;
    f32 cs;
    s32 r;
    s16 v;
    s16 h;

    sn = func_8001EAD0(arg4);
    x = arg0 - sn * arg3;
    cs = func_8001EB64(arg4);
    z = arg2 - cs * arg3;
    OBJ->unk4 = OBJ->unk4 + (x - OBJ->unk4) * 0.25;
    OBJ->unkC = OBJ->unkC + (z - OBJ->unkC) * 0.25;
    func_8002FC20((x - OBJ->unk4) * (x - OBJ->unk4) + (z - OBJ->unkC) * (z - OBJ->unkC));
    h = OBJ->unk12;
    v = arg4 - h;
    if (v & 0x1000) {
        r = (v & 0x1FFF) - 0x2000;
    } else {
        r = v & 0x1FFF;
    }
    OBJ->unk12 = h + r * 0.25;
    v = arg4 - OBJ->unk12;
    r = (v & 0x1000) ? (v & 0x1FFF) - 0x2000 : v & 0x1FFF;
}
