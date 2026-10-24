#define HZP2(a,b) a##b
#define HZP(a,b) HZP2(a,b)
#define func_8035AFEC HZP(func_8035AFEC_L,__LINE__)
#include "context.h"
#undef func_8035AFEC

typedef struct func_80362A54_Actor {
    u8 pad[0x36];
    u16 f36;
    u8 pad2[0x24];
    void *f5C;
} func_80362A54_Actor;

typedef struct func_80362A54_Entry {
    s32 f0;
    u16 f4;
    u8 pad[2];
    f32 f8;
} func_80362A54_Entry;

typedef struct func_80362A54_Obj {
    u8 pad[0x1C];
    func_80362A54_Entry e;
} func_80362A54_Obj;

typedef struct func_80362A54_Sub {
    u8 pad[0x12];
    s16 f12;
} func_80362A54_Sub;

typedef struct func_80362A54_Holder {
    u8 pad[0x2C];
    func_80362A54_Sub *f2C;
} func_80362A54_Holder;

extern void func_80224E00(void *arg0, s16 arg1);
extern void func_80011380(void *arg0, void *arg1);

void func_80362A54(func_80362A54_Actor *arg0, void **arg1) {
    u8 *sp3C;
    u8 *sp38;
    func_80362A54_Obj *sp34;
    s32 temp_v0;
    func_80360EF8_Struct sp24;
    s16 sp22;
    u8 pad21;
    u8 sp20;
    func_80362A54_Entry *var_v1;

    if ((s32) arg0 == D_801BBCCC) {
        sp3C = D_801BC03C;
    } else {
        sp3C = D_801BC3D8;
    }
    if ((s32) arg0 != D_801BBCCC) {
        sp38 = D_801BC03C;
    } else {
        sp38 = D_801BC3D8;
    }
    sp34 = arg0->f5C;
    sp22 = 0;
    if (arg0->f36 != 0x11D) {
        func_80224AC4(arg0, 0);
    }
    sp20 = func_803626E0((s32) arg0) & 0xF;
    if (func_80010550((s32) arg1, (s32) sp34) != 0) {
        if (sp38[0x394] != 0) {
            if (sp20 == 0) {
                sp22 = 0x800;
            } else if (sp20 == 1) {
                sp22 = 0x1800;
            }
            if (sp34->e.f0 == 0x0190007A) {
                func_80225664((func_8035F544_Copy *) &sp24, arg0, 0x0190007C);
            } else if (sp34->e.f0 == 0x0190007B) {
                func_80225664((func_8035F544_Copy *) &sp24, arg0, 0x0190007D);
            } else {
                func_802256E4(&sp24, (s32) arg0, 0);
            }
            ((func_80362A54_Holder *) *arg1)->f2C->f12 = (s16) (((func_80362A54_Holder *) *arg1)->f2C->f12 + sp22);
            ((func_80362A54_Holder *) *arg1)->f2C->f12 = (s16) (((func_80362A54_Holder *) *arg1)->f2C->f12 & 0x1FFF);
            func_80224E00(arg0, sp22);
            func_8013A28C((s32) arg1, sp24);
            func_80010550((s32) arg1, (s32) sp34);
            func_800058DC(arg0, (void *) func_80362DF4);
        }
    } else {
        var_v1 = (func_80362A54_Entry *) sp34;
        sp34 = NULL;
        temp_v0 = ((func_80362A54_Obj *) var_v1)->e.f0;
        var_v1 = &((func_80362A54_Obj *) var_v1)->e;
        if ((temp_v0 == 0x01900013) || (temp_v0 == 0x01900014)) {
            if (var_v1->f4 == func_80011590((u32) (var_v1->f8 * 7.0f) & 0xFFFF)) {
                goto block_26;
            }
            temp_v0 = var_v1->f0;
        }
        if (temp_v0 == 0x01900015) {
            if (var_v1->f4 == func_80011590((u32) (var_v1->f8 * 10.0f) & 0xFFFF)) {
block_26:
                func_80011380(arg1, (u8 *) var_v1 + 6);
            }
        }
        if (sp38[0x394] != 0) {
            func_800113D0(arg1, (u8 *) var_v1 + 6);
        }
        sp3C[0x392] = 0;
    }
}
