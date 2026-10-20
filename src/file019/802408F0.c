#include "common.h"

extern void func_800058DC(void *arg0, void *arg1);

extern s32 func_80133A24();
extern void *func_801505AC();
extern void func_80240994(s32 arg0, s32 arg1);

void func_802408F0(s32 arg0, s32 arg1) {
    void *temp_v0;

    func_80133A24(0x164);
    func_80133A24(0x165);
    func_80133A24(0x166);
    func_80133A24(0x167);
    if ((func_80133A24(0x164) != 0) && (func_80133A24(0x165) != 0) && (func_80133A24(0x166) != 0) && (func_80133A24(0x167) != 0)) {
        temp_v0 = func_801505AC(0);
        if (temp_v0 != NULL) {
            *(u8 *)((u8 *)temp_v0 + 0xA5) = 1;
            func_800058DC((void *)arg0, (void *)&func_80240994);
        }
    }
}


void func_80240994(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


extern s32 func_801C3D90();
extern void func_802409DC();

void func_802409A0(void *arg0, s32 arg1) {
    if (func_801C3D90() != 0) {
        *(s16 *)((u8 *)arg0 + 0x3C) = 0;
        func_800058DC(arg0, func_802409DC);
    }
}


typedef struct { u8 pad[4]; f32 v; } func_802409DC_StructB;
typedef struct { u8 pad[0x2C]; func_802409DC_StructB *p; } func_802409DC_StructA;
typedef struct { u8 pad0[4]; u16 h; u8 pad1[0xDA]; func_802409DC_StructA *a; } func_802409DC_Struct;
extern func_802409DC_Struct D_801BBBF0;
void func_80240A68(s32 arg0, s32 arg1);
extern void func_80020718(s32);
extern void func_8012FE50(s32, s32, s32, s32, s32);

void func_802409DC(s32 arg0, s32 arg1) {
    if (96.0f < D_801BBBF0.a->p->v) {
        func_80020718(0xA);
        D_801BBBF0.h = 0x1E;
        func_8012FE50(0x10, D_801BBBF0.h, 1, 1, 0);
        func_800058DC((void *)arg0, func_80240A68);
    }
}


void func_80240A68(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

