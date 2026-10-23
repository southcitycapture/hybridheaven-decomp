typedef struct { int id; unsigned short frame; unsigned char pad6[2]; float speed; } AnimEarly;
#define ACAT2(a, b) a##b
#define ACAT(a, b) ACAT2(a, b)
#define func_8036D30C_Anim ACAT(AnimL_, __LINE__)
#define AnimL_58 AnimEarly
#define AnimL_63 AnimEarly
#define AnimL_195 AnimR
#define AnimL_200 AnimR
#define AnimL_203 AnimR
#define AnimL_226 AnimR
#define AnimL_228 AnimR
#define AnimL_259 AnimR
#define AnimL_306 AnimR
#include "context.h"
#undef func_8036D30C_Anim

extern void func_80225540(void *);

typedef struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u32 b80 : 1;
    u32 b60 : 2;
    u32 pad1 : 4;
    u32 b01 : 1;
    u8 pad31[0x2D8 - 0x31];
    u8 unk2D8;
} func_8036D7FC_Struct;

typedef struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8036D7FC_Obj;

void func_8036D7FC(func_8036D7FC_Obj *arg0, s32 arg1) {
    func_8036D7FC_Struct *var_v1;
    func_8036D7FC_Struct *var_a2;
    s32 temp;

    if ((s32)arg0 == D_801BBCCC) {
        var_v1 = (func_8036D7FC_Struct *)D_801BC03C;
    } else {
        var_v1 = (func_8036D7FC_Struct *)D_801BC3D8;
    }
    if ((s32)arg0 != D_801BBCCC) {
        var_a2 = (func_8036D7FC_Struct *)D_801BC03C;
    } else {
        var_a2 = (func_8036D7FC_Struct *)D_801BC3D8;
    }
    temp = arg0->unk5C;
    var_v1->b01 = 1;
    var_v1->b80 = 1;
    if (func_80010550(arg1, temp, var_a2, arg0) != 0) {
        if (var_a2->unk2D8 != 0xC && var_a2->unk2D8 != 0x13) {
            func_80225540(arg0);
        }
        var_v1->b01 = 0;
        if (var_v1->unk2 <= 0 || var_v1->b60 != 0) {
            if (var_v1->b60 == 0) {
                var_v1->b60 = 1;
            }
            func_800058DC((s32)arg0, func_80222E84);
            return;
        }
        var_v1->b80 = 0;
        func_80365FE0(arg0, arg1);
    }
}
