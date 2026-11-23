#include "common.h"
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
struct func_80369C7C_Obj3 {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_80369C7C_Obj2 {
    u8 pad0[0x2C];
    struct func_80369C7C_Obj3 *unk2C;
};

extern u16 func_8001EF38(f32, f32);
extern u8 D_8023C280[];

typedef struct func_8036A4AC_StructState {
    u8 pad[0x30];
    u32 unused0 : 9;
    u32 mode : 2;
    u32 unused1 : 5;
    u32 flag : 3;
    u32 unused2 : 13;
} func_8036A4AC_StructState;

typedef struct func_8036A4AC_StructByte {
    u8 pad[0x30];
    u8 flags[4];
} func_8036A4AC_StructByte;

s32 func_8036A4AC(s32 arg0, void *arg1, f32 arg2, f32 arg3, f32 arg4)
{
    func_8036A4AC_StructState *state;
    s32 sector;
    u8 result;
    s16 angle;

    state = (arg0 == D_801BBCCC) ? (func_8036A4AC_StructState *) D_801BC03C : (func_8036A4AC_StructState *) D_801BC3D8;
    angle = (s32)((u32)(u16)(func_8001EF38(arg2, arg3) - (*(struct func_80369C7C_Obj2 **) arg1)->unk2C->unk12) << 16) >> 16;
    sector = (0x1FFF & (s16)(u16)((s16)angle + 0x200)) / 1024;
    result = (u16)sector;
    if (state->mode == 3) {
        result = (u8)((8 - (u8)sector) & 7);
    }
    if (arg4 > 10.0) {
        result = (u8)(result + 8) & 0xFF;
        ((func_8036A4AC_StructByte *)state)->flags[2] = (((func_8036A4AC_StructByte *)state)->flags[2] & 0xFF1F) | 0x40;
    }
    return D_8023C280[result];
}
