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
void func_8037EEC4(func_8037EEC4_Struct *arg0, s32 arg1);
extern void func_8037F170();


struct func_8037EBD0_Struct {
    u8 pad[0x90];
    u8 unk90;
    u8 pad91[0x17];
    u8 unkA8;
    u8 padA9[2];
    u8 unkAB;
    u8 padAC[4];
    s16 unkB0;
};

extern s32 D_8037E438(void *, s32, s32, u8, u8, s8 *, s32);

void func_8037EBD0(struct func_8037EBD0_Struct *arg0, s32 arg1) {
    u8 *digits;
    u8 color;
    s8 sp52;

    digits = arg0->unkA8 == 0 ? &D_8017DD7C : &D_8017DD7D;
    sp52 = 0;
    if (arg0->unkB0 < 8) {
        color = (u32)((func_8001EAD0((s16)(arg0->unkB0 << 9)) < 0.0f ? -func_8001EAD0((s16)(arg0->unkB0 << 9)) : func_8001EAD0((s16)(arg0->unkB0 << 9))) * 255.0f);
        TBL[2]->p->e = color;
        TBL[2]->p->d = color;
        TBL[2]->p->c = color;
        arg0->unkB0++;
        return;
    }
    TBL[2]->p->c = TBL[2]->p->d = TBL[2]->p->e = 0;
    if (*digits / 10 != 0) {
        arg1 = 0;
        if (*digits / 10 > 0) {
            do {
                D_8037E438(arg0, 0x32, 0x50, arg0->unkA8, 10, &sp52, arg1);
                arg1 = (arg1 + 1) & 0xFF;
            } while (arg1 < *digits / 10);
        }
        arg0->unkAB = func_80006214(arg0);
        func_800058DC(arg0, func_8037EEC4);
    } else {
        func_8037E438(arg0, 0x32, 0x50, arg0->unkA8, 11, &sp52, arg0->unk90++);
        arg0->unkAB = func_80006214(arg0);
        func_800058DC(arg0, func_8037F170);
    }
    arg0->unkB0 = 0;
}
