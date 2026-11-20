#include "common.h"
typedef struct func_8001E4C0_StructState {
    u8 pad[0x154];
    u16 unk154;
    u16 unk156;
    u16 unk158;
    u8 unk15A;
    u8 unk15B;
    u8 unk15C;
    u8 unk15D;
    u8 unk15E;
    u8 pad15F;
    s32 unk160;
    u8 unk164;
} func_8001E4C0_StructState;
struct func_8001EA48_Struct {
    u8 pad[0x156];
    s16 unk156;
    u8 pad2[0x15D - 0x158];
    u8 unk15D;
};


extern struct func_8001EA48_Struct D_801BBBF0;
extern void func_80005700();
extern void func_801170DC(s32 arg0);
extern s16 D_80089354;
extern s32 D_801BBD50;

void func_8001E830(s32 arg0, s32 arg1) {
    D_80089354 = 2;
    ((func_8001E4C0_StructState *)&D_801BBBF0)->unk15D = 0;
    ((func_8001E4C0_StructState *)&D_801BBBF0)->unk164 = 0;
    func_80005700(arg0);
    D_801BBD50 = 0;
    func_801170DC(4);
}
