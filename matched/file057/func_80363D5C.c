#include "context.h"
void func_8035FEC0(s32 arg0);
void func_80360020(func_80360020_Struct0 *arg0, func_80360020_Struct1 *arg1);
void func_80361B50(s32 arg0, s32 arg1, func_80361B50_Struct *arg2);
void func_80361B7C(func_80361B7C_StructA *arg0, func_80361B7C_StructB *arg1, func_80361B7C_StructC *arg2);
void func_80363FFC(s32 arg0, s32 arg1);
extern void func_80364D2C();
extern void func_803622EC();

typedef struct func_80363D5C_StructA {
    u8 pad0[0x5C];
    u8 *unk5C;
} func_80363D5C_StructA;
typedef struct func_80363D5C_StructS {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x30 - 4];
    u32 pad30a : 1;
    u32 f30 : 2;
    u32 pad30b : 29;
    u8 pad34[0x2D8 - 0x34];
    u8 unk2D8;
    u8 pad2D9[2];
    u8 unk2DB;
    u8 pad2DC[0x2E8 - 0x2DC];
    u8 unk2E8;
    u8 pad2E9[0x2F4 - 0x2E9];
    f32 unk2F4;
    u8 pad2F8[0x314 - 0x2F8];
    u8 unk314[0xC];
    u8 unk320;
    u8 pad321[0x32C - 0x321];
    u8 unk32C;
    u8 pad32D[0x392 - 0x32D];
    u8 unk392;
} func_80363D5C_StructS;
extern f32 D_8036153C(void *);
extern s8 D_80360588(s32, s32);
extern void D_8013AE20(void *, s32, s32);
extern s32 func_80367288(void *, s32, s32, void *);
extern void func_803673B4(void *, s32, s32);

void func_80363D5C(func_80363D5C_StructA *arg0, s32 arg1) {
    u8 *sp34;
    func_80363D5C_StructS *s1;
    func_80363D5C_StructS *sp2C;
    s32 pad;
    void *sp20;
    void *a3;

    sp34 = arg0->unk5C;
    if (arg0 == (void *)D_801BBCCC) {
        s1 = (void *)D_801BC03C;
    } else {
        s1 = (void *)D_801BC3D8;
    }
    if (arg0 != (void *)D_801BBCCC) {
        sp2C = (void *)D_801BC03C;
    } else {
        sp2C = (void *)D_801BC3D8;
    }
    if (sp34[0x84] == 2) {
        if (s1->unk2E8 >= 2 && s1->unk32C == 0) {
            s1->unk32C = 1;
            func_802254F8(arg0, 5, (u8)(u32)(D_8036153C(arg0) * 7.0f));
            func_8035FEC0((s32)arg0);
            sp2C->unk320 = D_80360588((s32)arg0, arg1);
            if (sp2C->unk2D8 == 0xD && sp2C->unk2DB != 0) {
                func_803673B4(arg0, arg1, 0xA);
            } else {
                if ((void *)arg0 == *(void **)(D_801BBBF0 + 0xDC)) {
                    a3 = *(void **)(D_801BBBF0 + 0xEC);
                } else {
                    a3 = *(void **)(D_801BBBF0 + 0xDC);
                }
                sp20 = a3;
                func_80367288(arg0, arg1, 0xF, a3);
                func_800058DC(sp20, func_80364D2C);
            }
            func_80361B7C((void *)sp2C, (void *)sp34, func_8035FFA8(s1));
            if (sp2C->unk2 <= 0 || sp2C->f30 != 0) {
                func_800058DC(arg0, func_803622EC);
            }
        } else {
            sp34[0x84] = 2;
            func_80360020((void *)arg0, (void *)s1);
            s1->unk2F4 = 0.0f;
        }
        func_80361B50((s32)arg0, arg1, (void *)s1);
        D_8013AE20(arg0, arg1, 0);
        func_80360400((void *)s1->unk314, (s32)arg0, arg1);
    }
    s1->unk392 = 4;
    func_800058DC(arg0, func_80363FFC);
}
