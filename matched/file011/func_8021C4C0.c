#include "common.h"
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern s32 func_80005670(void *, void *);
extern void func_800058DC(void *obj, void *fn);
void func_8021B790(void);
void func_8021C928(s32 arg0, s32 arg1);
void func_8021C934(u8 *arg0, s32 arg1);
typedef struct func_8021CC30_Struct2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_8021CC30_Struct2;
typedef struct func_8021CC30_Struct3 {
    u8 pad[0x2C];
    func_8021CC30_Struct2 *unk2C;
} func_8021CC30_Struct3;
typedef struct func_8021CC30_Struct4 {
    u8 pad[0x24];
    func_8021CC30_Struct3 *unk24;
} func_8021CC30_Struct4;
typedef struct func_8021CC30_Struct5 {
    func_8021CC30_Struct4 *unk0;
} func_8021CC30_Struct5;


typedef struct func_8021C4C0_Actor {
    u8 pad0[0x9A]; u16 unk9A;
    u8 pad1[0x2D8 - 0x9C]; u8 unk2D8; u8 unk2D9; u8 unk2DA; u8 unk2DB;
    u8 pad2[0x2E0 - 0x2DC]; u8 unk2E0[8];
    u8 pad3[0x2FD - 0x2E8]; u8 unk2FD;
    u8 pad4[0x312 - 0x2FE]; s16 unk312;
    u8 pad5[0x375 - 0x314]; u8 unk375;
} func_8021C4C0_Actor;
typedef struct func_8021C4C0_Obj {
    u8 pad0[0x9C]; s32 unk9C; f32 unkA0; f32 unkA4; f32 unkA8; s16 unkAC;
    u8 pad1[0xB3 - 0xAE]; u8 unkB3;
} func_8021C4C0_Obj;
typedef struct func_8021C4C0_Ret {
    u8 pad0[0x96]; u8 unk96;
} func_8021C4C0_Ret;
typedef struct func_8021C4C0_Ret2 {
    u8 pad0[0xAC]; u8 unkAC;
} func_8021C4C0_Ret2;
typedef struct func_8021C4C0_Glob {
    u8 pad0[0x448]; func_8021CC30_Struct5 *unk448;
    u8 pad1[0x47C - 0x44C]; u8 unk47C;
    u8 pad2[0x72A - 0x47D]; u8 unk72A;
    u8 pad3[0x734 - 0x72B]; u8 unk734;
    u8 pad4[0x818 - 0x735]; u8 unk818;
    u8 pad5[0xAC6 - 0x819]; u8 unkAC6;
    u8 pad6[0xAD0 - 0xAC7]; u8 unkAD0;
    u8 pad7[0x1030 - 0xAD1]; u8 unk1030; u8 unk1031;
} func_8021C4C0_Glob;
#define GL ((func_8021C4C0_Glob *)D_801BBBF0)
extern void func_8022F558();
extern void func_80379054();
extern s32 func_80378B48();
extern void func_8037F410();
extern s32 func_8022B66C();
extern void func_8022BBB0();
extern s32 func_8022BA44();
extern s32 func_8022BB28();
extern s32 func_8022C1B4();
extern u8 func_80378764();
extern void func_8022F680();
extern u8 func_8037797C();
extern u8 func_80378020();
extern void func_8022F424();
extern u8 D_803896A0[];
extern u8 D_803896C8[];

void func_8021C4C0(func_8021C4C0_Obj *arg0, s32 arg1) {
    func_8021C4C0_Ret *ret;
    s32 pad;
    func_8021C4C0_Actor *b;
    u8 val;
    func_8021C4C0_Actor *a;
    u8 v;
    u8 i;

    ret = NULL;
    if (GL->unk1030 == 0) {
        a = (func_8021C4C0_Actor *)D_801BC03C;
    } else {
        a = (func_8021C4C0_Actor *)D_801BC3D8;
    }
    if ((u32)GL >= 0 && GL->unk1030 == 0) {
        b = (func_8021C4C0_Actor *)D_801BC3D8;
    } else {
        b = (func_8021C4C0_Actor *)D_801BC03C;
    }
    val = 0;
    func_8021B790();
    if (!(GL->unk47C & 1) && !(GL->unk818 & 1)) {
        GL->unkAD0 = 0;
        GL->unkAC6 = GL->unkAD0;
        GL->unk734 = GL->unkAC6;
        GL->unk72A = GL->unk734;
        if (arg0->unk9C != 0) {
            func_8022F558(b);
            v = a->unk2FD;
            if (v < 0xFF) {
                a->unk2FD = v + 1;
            }
            if (a->unk2D8 == 0xC || a->unk2D8 == 0x13) {
                func_80379054(a);
            }
        } else {
            b->unk312 = 0;
            b->unk2DB = 1;
            func_80005670(arg0, D_803896C8);
        }
        if (a->unk2D8 >= 2 && a->unk2D8 < 8 && a->unk2DA == 0) {
            b->unk312 = 0;
            func_80378B48();
        }
        arg0->unkA0 = GL->unk448->unk0->unk24->unk2C->unk4;
        arg0->unkA4 = GL->unk448->unk0->unk24->unk2C->unk8;
        arg0->unkA8 = GL->unk448->unk0->unk24->unk2C->unkC;
        arg0->unkAC = GL->unk448->unk0->unk24->unk2C->unk12;
        if (a->unk2D8 == 9 && a->unk375 > 0) {
            func_8037F410();
            func_800058DC(arg0, func_8021C928);
            return;
        }
        func_800058DC(arg0, func_8021C934);
        GL->unk1031 = 8;
        return;
    }
    if (a->unk2D8 < 2 || a->unk2D8 == 8 || a->unk2D8 == 9 || a->unk2D8 == 0xA) {
        ret = (func_8021C4C0_Ret *)func_8022B66C(arg0);
        func_8022BBB0(arg0);
    } else if (a->unk2D8 == 2 || (a->unk2D8 >= 4 && a->unk2D8 < 8)) {
        ret = (func_8021C4C0_Ret *)func_8022BA44(arg0);
    } else if (a->unk2D8 == 0xC || a->unk2D8 == 0x13) {
        ret = (func_8021C4C0_Ret *)func_8022BB28(arg0);
    } else if (a->unk2D8 == 0xF) {
        ret = (func_8021C4C0_Ret *)func_8022C1B4(arg0);
    }
    if (ret != NULL) {
        arg0->unk9C = (s32)ret;
        if (arg0->unkB3 == 0) {
            ret = (func_8021C4C0_Ret *)func_80005670(arg0, D_803896C8);
        }
        if (GL->unk1030 != 0 && arg0->unkB3 == 0 && a->unk2D8 < 9) {
            ret->unk96 = func_80378764(arg0, ret);
        }
        if (a->unk2D8 < 9 || a->unk2D8 >= 0xB) {
            arg0->unkB3++;
        }
        if (a->unk2D8 < 0xB || a->unk2D8 == 0xF) {
            func_8022F680(arg0, a);
            func_8022F680(arg0, b);
            if (GL->unk1030 == 0) {
                val = func_8037797C(a);
            } else {
                func_8037797C(a);
                if (b->unk9A != 0) {
                    val = func_80378020();
                }
            }
            if (val != 0) {
                ((func_8021C4C0_Ret2 *)func_80005670(arg0, D_803896A0))->unkAC = val;
            }
            func_8022F424();
            func_80378B48();
            for (i = 0; i < 8; i++) {
                b->unk2E0[i] = 0;
                a->unk2E0[i] = b->unk2E0[i];
            }
        }
    }
}
