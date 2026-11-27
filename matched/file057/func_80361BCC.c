#include "common.h"
extern void D_8013AE20(void *, s32, s32);
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern s8 D_80360588(s32, s32);
extern void func_800058DC();
extern u16 func_80011590();
extern s32 func_801DB480(void *, s32, f32, u8);
extern void func_802237B0();
extern void func_802254F8(void *, s32, u8);
void func_8035FEC0(s32 arg0);
extern void *func_8035FFA8(void *arg0);
s32 func_80360090(void *arg0, u8 arg1);
typedef struct func_80360588_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80360588_Struct;
void func_80360400(struct func_80360588_Struct *arg0, s32 arg1, s32 arg2);
typedef struct func_8036153C_Obj {
    u8 pad0[0x5C];
    u8 *unk5C;
} func_8036153C_Obj;
f32 func_8036153C(func_8036153C_Obj *arg0);
void func_80361910(void *arg0, s32 arg1, void *arg2, void *arg3, void *arg4);
typedef struct func_80361B50_Struct {
    u8 pad0[0x2DE];
    u8 unk2DE;
    u8 pad1[0x2EC - 0x2DF];
    f32 unk2EC;
} func_80361B50_Struct;
void func_80361B50(s32 arg0, s32 arg1, func_80361B50_Struct *arg2);
typedef struct func_80361B7C_StructA {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 pad1[2];
    u8 unk2DB;
} func_80361B7C_StructA;
typedef struct func_80361B7C_StructB {
    u8 pad0[0x7C];
    s32 unk7C;
    s16 unk80;
    u8 pad1[2];
    u8 unk84;
} func_80361B7C_StructB;
typedef struct func_80361B7C_StructC {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad1[4];
    s32 unk1C;
} func_80361B7C_StructC;
void func_80361B7C(func_80361B7C_StructA *arg0, func_80361B7C_StructB *arg1, func_80361B7C_StructC *arg2);
void func_803621A8(u8 *arg0, s32 arg1);
extern void func_803622EC();
extern void func_80364D2C();
extern void func_803673B4(void *, s32, s32);
extern void func_80374F04(void *, f32);


typedef struct func_80361BCC_Val {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    f32 unk8;
} func_80361BCC_Val;

typedef struct func_80361BCC_Sub {
    u8 pad0[0x1C];
    func_80361BCC_Val unk1C;
    u8 pad28[0x74 - 0x28];
    u8 unk74;
    u8 pad75[0x7C - 0x75];
    s32 unk7C;
    u16 unk80;
    u8 pad82[2];
    u8 unk84;
} func_80361BCC_Sub;

typedef struct func_80361BCC_Obj {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    func_80361BCC_Sub *unk5C;
} func_80361BCC_Obj;

typedef struct func_80361BCC_Res {
    u8 pad0[6];
    u16 unk6;
    u8 pad8[8];
    s32 unk10;
    u8 pad14[4];
    s32 unk18;
} func_80361BCC_Res;

typedef struct func_80361BCC_Eff {
    u8 pad0[0x5C];
    u16 unk5C;
} func_80361BCC_Eff;

typedef struct func_80361BCC_State {
    u8 pad0[0x10];
    f32 unk10;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    u8 pad20[0x10];
    u32 pad30a : 9;
    u32 mode : 2;
    u32 pad30c : 21;
    u8 pad34[0x2D8 - 0x34];
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2DA;
    u8 unk2DB;
    u8 pad2DC[0x2E8 - 0x2DC];
    u8 unk2E8;
    u8 pad2E9[0x300 - 0x2E9];
    u16 unk300;
    u8 pad302[0x314 - 0x302];
    u8 unk314[0xC];
    u8 unk320;
    u8 pad321[0x32C - 0x321];
    u8 unk32C;
    u8 pad32D[0x392 - 0x32D];
    u8 unk392;
} func_80361BCC_State;

typedef struct func_80361BCC_Globals {
    u8 pad0[0x1B];
    u8 unk1B;
    u8 pad1C[0xDC - 0x1C];
    func_80361BCC_Obj *unkDC;
    u8 padE0[0xEC - 0xE0];
    func_80361BCC_Obj *unkEC;
    u8 padF0[0x1030 - 0xF0];
    u8 unk1030;
    u8 pad1031[0x1118 - 0x1031];
    func_80361BCC_Eff *unk1118;
} func_80361BCC_Globals;

#define GL ((func_80361BCC_Globals *)D_801BBBF0)
extern s32 func_8012C6B4();
extern s32 D_80367288(void *, s32, s32);
extern void D_800112B0(s32, void *);

void func_80361BCC(func_80361BCC_Obj *arg0, s32 arg1) {
    func_80361BCC_Obj *sp5C;
    func_80361BCC_Sub *sp58;
    func_80361BCC_Val *v;
    func_80361BCC_State *s;
    func_80361BCC_State *sp4C;
    func_80361BCC_Res *sp48;
    f32 f;
    s32 flag;
    s32 done;

    if (arg0 == GL->unkDC) {
        sp5C = GL->unkEC;
    } else {
        sp5C = GL->unkDC;
    }
    sp58 = arg0->unk5C;
    if (arg0 == GL->unkDC) {
        s = (func_80361BCC_State *)D_801BC03C;
    } else {
        s = (func_80361BCC_State *)D_801BC3D8;
    }
    if (arg0 != GL->unkDC) {
        sp4C = (func_80361BCC_State *)D_801BC03C;
    } else {
        sp4C = (func_80361BCC_State *)D_801BC3D8;
    }
    GL->unk1030 = (arg0 == GL->unkDC) ? 0 : 1;
    sp48 = func_8035FFA8(s);
    if (GL->unk1B != 0 && arg0->unk36 != 0x11D && GL->unk1118 == NULL &&
        (v = &sp58->unk1C, sp58->unk7C == sp48->unk10) && v->unk4 == 1 && s->unk300 >= 100) {
        if (sp58->unk74 == 0 || sp58->unk74 == 1 || func_8012C6B4(3) <= 0) {
            if (func_80360090(arg0, s->unk2D9) != 0) {
                func_80374F04(arg0, 1.0f);
                if (GL->unk1118 != NULL) {
                    GL->unk1118->unk5C = (u32)((f32)(u32)sp48->unk6 * v->unk8 + 5.0f);
                }
            }
        }
    } else {
        func_802237B0(arg0, 1);
    }
    func_80361910(arg0, arg1, sp48, s, sp4C);
    if (s->unk2E8 >= 2) {
        if (s->unk32C == 0) {
            s->unk32C = 1;
            func_80361B50((s32)arg0, arg1, (void *)s);
            sp4C->unk320 = D_80360588((s32)arg0, arg1);
            func_802254F8(arg0, 5, (u32)(func_8036153C((void *)arg0) * 7.0f));
            func_8035FEC0((s32)arg0);
            if (v = &sp58->unk1C, sp58->unk7C == sp48->unk10) {
                if (v->unk4 < func_80011590((u16)(u32)((f32)(u32)sp48->unk6 * v->unk8)) && s->unk300 < 100) {
                    D_800112B0(arg1, &v->unk6);
                    func_800058DC(arg0, func_803621A8);
                }
            }
            if (sp4C->unk2D8 == 0xD && sp4C->unk2DB != 0) {
                func_803673B4(arg0, arg1, 0xA);
            } else {
                D_80367288(arg0, arg1, 0xF);
                func_800058DC(sp5C, func_80364D2C);
            }
        }
    }
    func_80360400((void *)s->unk314, (s32)arg0, arg1);
    f = (s->unk2D9 < 0xE) ? s->unk18 : s->unk1C;
    if (f == 0.0) {
        f = s->unk10;
    }
    done = func_801DB480(arg0, arg1, f, flag = (s->mode == 3) ? 1 : 0);
    if (done != 0) {
        if (s->unk2E8 >= 2) {
            func_80361B50((s32)arg0, arg1, (void *)s);
            D_8013AE20(arg0, arg1, 0);
            func_80361B7C((void *)sp4C, (void *)sp58, (void *)sp48);
            func_800058DC(arg0, func_803622EC);
        } else {
            sp58->unk84 = 2;
            sp58->unk80 = 2;
            sp58->unk7C = sp48->unk18;
            func_800058DC(arg0, func_803622EC);
        }
    }
    s->unk392 = 4;
}
