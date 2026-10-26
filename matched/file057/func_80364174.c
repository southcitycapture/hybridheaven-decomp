#include "common.h"
#include "common.h"
typedef struct func_8035F544_Copy { s32 a; s32 b; s32 c; } func_8035F544_Copy;
typedef struct func_8035CDA8_Obj { s32 a; } func_8035CDA8_Obj;
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
void func_800058DC(void *arg0, void *arg1);
extern void func_8022C0A0(s32 arg0);
typedef struct func_80360020_Struct0 {
    u8 pad[0x36];
    u16 unk36;
} func_80360020_Struct0;
typedef struct func_80360020_Struct1 {
    u8 pad[0x2D9];
    u8 unk2D9;
} func_80360020_Struct1;
void func_80360020(func_80360020_Struct0 *arg0, func_80360020_Struct1 *arg1);
extern void func_80360818(s32 arg0, s32 arg1);
typedef struct func_80361B50_Struct {
    u8 pad0[0x2DE];
    u8 unk2DE;
    u8 pad1[0x2EC - 0x2DF];
    f32 unk2EC;
} func_80361B50_Struct;
void func_80361B50(s32 arg0, s32 arg1, func_80361B50_Struct *arg2);
typedef struct func_8036265C_Inner {
    u8 pad[0x7C];
    u8 *unk7C;
} func_8036265C_Inner;
typedef struct func_8036265C_Arg {
    u8 pad[0x5C];
    func_8036265C_Inner *unk5C;
} func_8036265C_Arg;
void func_8036265C(func_8036265C_Arg *arg0, s32 arg1);


typedef struct func_80364174_StructInner {
    u8 pad0[0x80];
    u16 unk80;
    u8 pad82[2];
    u8 unk84;
} func_80364174_StructInner;
typedef struct func_80364174_StructArg {
    u8 pad0[0x5C];
    func_80364174_StructInner *unk5C;
} func_80364174_StructArg;
typedef struct func_80364174_StructA {
    u8 pad0[0x30];
    u16 unk30;
    u8 pad32[0x2D8 - 0x32];
    u8 unk2D8;
    u8 pad2D9[2];
    u8 unk2DB;
    u8 pad2DC[0x2F4 - 0x2DC];
    f32 unk2F4;
    u8 pad2F8[0x375 - 0x2F8];
    u8 unk375;
    u8 unk376;
} func_80364174_StructA;
extern void func_8013D09C();
extern void func_80364D2C();
extern void func_803622EC();

void func_80364174(func_80364174_StructArg *arg0, s32 arg1) {
    func_80364174_StructA *a;
    func_80364174_StructA *b;
    func_80364174_StructInner *sp24;

    if ((void *)arg0 == ((void **)(D_801BBBF0 + 0xDC))[0]) {
        a =(func_80364174_StructA *)D_801BC03C;
    } else {
        a = (func_80364174_StructA *)D_801BC3D8;
    }
    if ((void *)arg0 != ((void **)(D_801BBBF0 + 0xDC))[0]) {
        b = (func_80364174_StructA *)D_801BC03C;
    } else {
        b = (func_80364174_StructA *)D_801BC3D8;
    }
    sp24 = arg0->unk5C;
    if (!(a->unk30 & 7) && (((u8 *)a)[0x30] & 1)) {
        if (a->unk375 < a->unk376) {
            ((u8 *)a)[0x31] = ((u8 *)a)[0x31] & 0xFF7F;
            func_8013D09C(a);
            {
                extern void func_8022C0A0();
                func_8022C0A0();
            }
            func_80360818((s32)arg0, arg1);
            return;
        }
        if (sp24->unk84 == 2) {
            func_80361B50((s32)arg0, arg1, (void *)a);
            {
                extern void func_8013AE20();
                func_8013AE20(arg0, arg1, 0);
            }
            func_80360020((void *)arg0, (void *)a);
            a->unk2F4 = 0.0f;
        } else if (b->unk2D8 != 0xD || b->unk2DB == 0) {
            void *v;
            if ((void *)arg0 == ((void **)(D_801BBBF0 + 0xDC))[0]) {
                v = ((void **)(D_801BBBF0 + 0xEC))[0];
            } else {
                v = ((void **)(D_801BBBF0 + 0xDC))[0];
            }
            func_800058DC(v, func_80364D2C);
        }
        if (sp24->unk80 == 2) {
            func_80361B50((s32)arg0, arg1, (void *)a);
            func_800058DC(arg0, func_803622EC);
            return;
        }
        func_800058DC(arg0, func_8036265C);
    }
}
