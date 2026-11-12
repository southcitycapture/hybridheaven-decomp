#include "common.h"
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_80385630[];
extern u8 D_80385640[];
void func_800058DC(void *arg0, void *arg1);
extern u16 func_80011590(s32);
void func_80020718(s32 arg0);
extern void func_802254F8(void *, s32, s32);
typedef struct func_8035991C_Globals {
    u8 pad0[0xDC];
    void *unkDC;
    u8 pad1[0xEC - 0xE0];
    void *unkEC;
} func_8035991C_Globals;
void func_8035A7D4(s32 arg0, s32 arg1);


typedef struct func_8035C230_StructSub {
    s32 w;
    u16 id;
    u8 pad[2];
    f32 f;
} func_8035C230_StructSub;

typedef struct func_8035C230_StructInner {
    u8 pad0[0x1C];
    func_8035C230_StructSub sub;
    u8 pad2[0x7C - 0x28];
    void *unk7C;
    u16 unk80;
    u16 unk82;
} func_8035C230_StructInner;

typedef struct func_8035C230_StructObj {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x5C - 0x38];
    func_8035C230_StructInner *unk5C;
} func_8035C230_StructObj;

typedef struct func_8035C230_StructFlags {
    u8 pad0[0x10];
    s32 unk10;
    u8 pad1[0x30 - 0x14];
    u32 b0 : 11;
    u32 bf2 : 2;
    u32 b1 : 14;
    u32 bf1 : 2;
    u32 b2 : 3;
    u8 pad2[0x2D9 - 0x34];
    u8 unk2D9;
    u8 pad3[0x32D - 0x2DA];
    u8 unk32D;
    u8 pad4[0x390 - 0x32E];
    u8 unk390;
    u8 pad5[0x392 - 0x391];
    u8 unk392;
} func_8035C230_StructFlags;

typedef struct func_8035C230_StructByte {
    u8 pad[3];
    u8 b;
} func_8035C230_StructByte;
extern s32 func_801DB480(void *, s32, s32, s32);
extern void func_8035C4C0();

void func_8035C230(func_8035C230_StructObj *arg0, s32 arg1) {
    func_8035C230_StructInner *t0;
    func_8035C230_StructFlags *v1;
    s32 var;
    u8 sp23;
    func_8035C230_StructSub *a1;

    t0 = arg0->unk5C;
    if (arg0 == ((func_8035991C_Globals *) D_801BBBF0)->unkDC) {
        v1 = (func_8035C230_StructFlags *) D_801BC03C;
    } else {
        v1 = (func_8035C230_StructFlags *) D_801BC3D8;
    }
    sp23 = v1->unk2D9;
    v1->unk392 = 0;
    a1 = &t0->sub;
    if (((t0->sub.w == 0x0190000A) || (a1->w == 0x019100AF)) && (t0->unk80 == 0)) {
        if (a1->id == func_80011590((u16) (u32) (a1->f * 3.0f))) {
            if (v1->unk32D & 1) {
                var = 0x3A7;
            } else {
                var = 0x3A6;
            }
            func_80020718((u16) var);
            func_802254F8(arg0, 5, 7);
            v1->unk32D = (u8) (v1->unk32D + 1);
            func_8035A7D4((s32) arg0, arg1);
        }
    }
L3CC:
    if (func_801DB480(arg0, arg1, v1->unk10, 0) != 0) {
        switch (sp23) {
        case 21:
        case 23:
        case 25:
        case 27:
        case 29:
            var = 3;
            break;
        case 20:
        default:
            var = 1;
            break;
        }
        if (var == v1->unk32D) {
            if ((v1->unk390 == 5) && (v1->bf1 != 0)) {
                v1->unk390 = 0;
                v1->bf1 = 0;
            }
            func_800058DC(arg0, &func_8035C4C0);
            return;
        }
        if (arg0->unk36 == 0x31) {
            t0->unk7C = &D_80385640;
        } else {
            t0->unk7C = &D_80385630;
        }
        t0->unk82 = 0;
        t0->unk80 = 2;
    }
}
