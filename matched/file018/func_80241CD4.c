#include "common.h"
struct func_80242178_Struct {
    u8 pad0[0x40];
    s32 unk40;
    u8 pad1[0x1088 - 0x44];
    s32 unk1088;
    u8 pad2[0x10A0 - 0x108C];
    s32 unk10A0;
};
extern struct func_80242178_Struct D_801BBBF0;
extern void func_800058DC(s32, void *);
extern u8 func_80127014[];
extern s32 func_802039B0();


typedef struct func_80241CD4_Struct {
    u8 pad[0x1064];
    s32 unk1064;
    s32 unk1068;
    s32 unk106C;
} func_80241CD4_Struct;

extern s32 D_8025C6F0;
extern f32 D_8025C71C;
extern f32 D_8025C720;
extern f32 D_8025C724;

void func_80241CD4(s32 arg0) {
    if (func_802039B0() != 0) {
        func_800058DC(arg0, func_80127014);
    }
    if (D_8025C6F0 == 0) {
        return;
    } else {
        ((func_80241CD4_Struct *)&D_801BBBF0)->unk1064 = (s32)(D_8025C71C * 1000.0f);
        ((func_80241CD4_Struct *)&D_801BBBF0)->unk1068 = (s32)(D_8025C720 * 1000.0f);
        ((func_80241CD4_Struct *)&D_801BBBF0)->unk106C = (s32)(D_8025C724 * 1000.0f);
        return;
    }
    return;
}
