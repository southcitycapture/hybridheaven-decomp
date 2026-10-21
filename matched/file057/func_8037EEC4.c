#include "context.h"

extern f32 func_8001EAD0(s16);
extern u8 D_8017DD7C;
extern u8 D_8017DD7D;
extern void func_8037F170();
void func_8037F3D4(s32 arg0, s32 arg1);

typedef struct func_8037EEC4_Inner { u8 pad[0xC]; u8 c; u8 d; u8 e; } func_8037EEC4_Inner;
typedef struct func_8037EEC4_Obj { u8 pad[0x30]; func_8037EEC4_Inner *p; } func_8037EEC4_Obj;
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

#define TBL ((func_8037EEC4_Obj **)&D_8008DA88)

void func_8037EEC4(func_8037EEC4_Struct *arg0, s32 arg1) {
    u8 *a1;
    u8 i;
    s8 s;
    f32 f;
    u8 v;

    if (arg0->unkA8 == 0) {
        a1 = &D_8017DD7C;
    } else {
        a1 = &D_8017DD7D;
    }
    s = 0;
    if (arg0->unkB0 < 8) {
        for (i = 3; i < arg0->unkAB; i++) {
            if (func_8001EAD0(arg0->unkB0 << 9) < 0.0f) {
                f = -func_8001EAD0(arg0->unkB0 << 9);
            } else {
                f = func_8001EAD0(arg0->unkB0 << 9);
            }
            v = (u32)(f * 255.0f);
            TBL[i]->p->e = v;
            TBL[i]->p->d = v;
            TBL[i]->p->c = v;
        }
        arg0->unkB0++;
        return;
    }
    for (i = 3; i < arg0->unkAB; i++) {
        TBL[i]->p->e = 0;
        TBL[i]->p->c = TBL[i]->p->d = TBL[i]->p->e;
    }
    if (*a1 % 10 != 0) {
        func_8037E438(arg0, 0x32, 0x50, arg0->unkA8, 0xB, (s8 *)&s, arg0->unk90++);
        arg0->unkAB = func_80006214(arg0);
        arg0->unkB0 = 0;
        func_800058DC(arg0, func_8037F170);
        return;
    }
    func_800058DC(arg0, func_8037F3D4);
}
