#include "common.h"
extern u8 D_8017DD7C;
extern u8 D_8017DD7D;
extern u8 *D_8008DA88;
typedef struct func_8037EEC4_Inner { u8 pad[0xC]; u8 c; u8 d; u8 e; } func_8037EEC4_Inner;
typedef struct func_8037EEC4_Obj { u8 pad[0x30]; func_8037EEC4_Inner *p; } func_8037EEC4_Obj;
#define TBL ((func_8037EEC4_Obj **)&D_8008DA88)
extern s32 func_800058DC(void *, void *);
extern s32 func_80006214(void *);
extern f32 func_8001EAD0(s16);
extern s32 func_8037E438(void *, s32, s32, u8, s32, s8 *, s32);
typedef struct func_8037EEC4_Struct {
    u8 pad90[0x90];
    u8 unk90;
    u8 pad91[0xA8 - 0x91];
    u8 unkA8;
    u8 padA9[2];
    u8 unkAB;
    u8 padAC[4];
    s16 unkB0;
} func_8037EEC4_Struct;
void func_8037F3D4(s32 arg0, s32 arg1);


void func_8037F170(func_8037EEC4_Struct *arg0, s32 arg1) {
    u32 count;
    u8 pad2;
    s8 sp42;
    f32 value;

    arg1 = arg0->unkA8 == 0 ? (s32)&D_8017DD7C : (s32)&D_8017DD7D;
    sp42 = 0;
    if (arg0->unkB0 < 4) {
        if (func_8001EAD0((s16)(arg0->unkB0 << 10)) < 0.0f) {
            value = -func_8001EAD0((s16)(arg0->unkB0 << 10));
        } else {
            value = func_8001EAD0((s16)(arg0->unkB0 << 10));
        }
        count = (u32)(value * 255.0f);
        TBL[arg0->unkAB - 1]->p->e = count;
        TBL[arg0->unkAB - 1]->p->d = count;
        TBL[arg0->unkAB - 1]->p->c = count;
        arg0->unkB0++;
    } else {
        TBL[arg0->unkAB - 1]->p->e = 0;
        TBL[arg0->unkAB - 1]->p->c = TBL[arg0->unkAB - 1]->p->d = TBL[arg0->unkAB - 1]->p->e;
        arg0->unkB0 = 0;
        if (arg0->unk90 < *(u8 *)arg1 % 10) {
            count = arg0->unk90;
            pad2 = arg0->unkA8;
            func_8037E438(arg0, 0x32, 0x50, pad2, 0xB, &sp42, ((arg0->unk90++) & 0) | count);
            arg0->unkAB = func_80006214(arg0);
        } else {
            func_800058DC(arg0, func_8037F3D4);
        }
    }
}
