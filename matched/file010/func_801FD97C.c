#include "common.h"
extern u8 D_801BBBF0[];
extern f32 func_8001EB64(s16);
extern s16 func_8001EF38(f32, f32);
extern f32 func_8002FC20(f32);
extern s32 (*D_802171F0[])();
struct func_801FD168_Src {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};
void *func_8012C4D0(s32, struct func_801FD168_Src, s32);


extern struct func_801FD168_Src D_802172B8;
extern f32 D_8001EAD0(s16);

struct func_801FD97C_Struct {
    u8 pad0[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad1[0x90 - 0x4C];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 pad2[0xA4 - 0xA0];
    f32 unkA4;
    f32 unkA8;
    f32 unkAC;
};

void *func_801FD97C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    struct func_801FD97C_Struct *o;
    u16 a;
    s32 i;
    f32 d;

    for (i = 0; i < 4; i++) {
        if (((void **)(D_801BBBF0 + 0x20C))[i] == NULL) {
            o = func_8012C4D0(*(s32 *)(D_801BBBF0 + 0x3C), D_802172B8, 3);
            if (o != NULL) {
                o->unk90 = arg0;
                o->unk94 = arg1;
                o->unk98 = arg2;
                a = func_8001EF38(arg3, arg5);
                o->unkA4 = arg0 - D_8001EAD0(a) * 3.0f;
                o->unkA8 = arg1;
                o->unkAC = arg2 - func_8001EB64(a) * 3.0f;
                d = func_8002FC20(arg3 * arg3 + arg4 * arg4 + arg5 * arg5);
                o->unk40 = arg3 / d * 15.0f;
                o->unk44 = arg4 / d * 15.0f;
                o->unk48 = arg5 / d * 15.0f;
                o->unk9C = 15.0f;
                ((void **)(D_801BBBF0 + 0x20C))[i] = o;
                return o;
            }
        }
    }
    return NULL;
}
