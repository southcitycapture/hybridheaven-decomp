#include "context.h"

typedef struct func_802414B0_Struct {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
} func_802414B0_Struct;

typedef struct func_802414B0_StructLocal {
    f32 pos[3];
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    s16 e;
} func_802414B0_StructLocal;

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_801C2FF8(void);
extern void func_80241574(void);

void func_802414B0(void *arg0, void *arg1) {
    register func_802414B0_Struct *obj;
    func_802414B0_StructLocal loc;

    obj = arg0;
    if (func_801C2FF8() != 0) {
        loc.pos[0] = (func_8001EAD0(obj->unk9C) * 8.0f) + obj->unk90;
        loc.pos[1] = (func_8001EB64(obj->unk9C) * 8.0f) + obj->unk98;
        loc.a = 0x1100;
        loc.b = 0x0168003E;
        loc.d = 0;
        loc.e = 0x5A;
        loc.pos[2] = 0.0f;
        loc.c = 1.5f;
        func_801C2F0C(2, loc.pos);
        func_800058DC(obj, &func_80241574);
    }
}
