#include "context.h"

typedef struct func_8035D660_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x30 - 4];
    u32 p0 : 1;
    u32 m30 : 2;
    u32 p1 : 6;
    u32 c30 : 2;
    u32 p2 : 5;
    u16 f32 : 3;
    u16 r32 : 13;
    u8 pad34[4];
    u32 q0 : 1;
    u32 m38 : 2;
    u32 flag38 : 1;
    u32 q2 : 28;
    u8 pad3C[0x2D8 - 0x3C];
    u8 unk2D8;
    u8 pad2D9;
    u8 unk2DA;
} func_8035D660_Struct;

typedef struct func_8035D660_Vec {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8035D660_Vec;

typedef struct func_8035D660_Sub {
    u8 pad0[0x1C];
    func_8035D660_Vec unk1C;
} func_8035D660_Sub;

typedef struct func_8035D660_Obj {
    u8 pad0[0x5C];
    func_8035D660_Sub *unk5C;
} func_8035D660_Obj;

extern s32 func_80225540(void *);
extern void func_80367914(void *, s32);
extern void D_8035DF80(void);
extern void D_8013A28C(s32, func_8035D660_Vec);
extern u8 D_80385650[];
extern void func_8035DD80();

void func_8035D660(func_8035D660_Obj *arg0, s32 arg1) {
    func_8035D660_Obj *sp4C;
    func_8035D660_Sub *sp48;
    func_8035D660_Sub *sp44;
    func_8035D660_Struct *t0;
    func_8035D660_Struct *a2;
    func_8035D660_Vec *v1;
    func_8035D660_Vec *t1;
    u8 sp33;
    func_8035D660_Vec sp24;

    if (arg0 != (func_8035D660_Obj *)GL->unkDC) {
        sp4C = (func_8035D660_Obj *)GL->unkDC;
    } else {
        sp4C = (func_8035D660_Obj *)GL->unkEC;
    }
    sp48 = arg0->unk5C;
    sp44 = sp4C->unk5C;
    if (arg0 == (func_8035D660_Obj *)GL->unkDC) {
        t0 = (func_8035D660_Struct *)D_801BC03C;
    } else {
        t0 = (func_8035D660_Struct *)D_801BC3D8;
    }
    if (arg0 != (func_8035D660_Obj *)GL->unkDC) {
        a2 = (func_8035D660_Struct *)D_801BC03C;
    } else {
        a2 = (func_8035D660_Struct *)D_801BC3D8;
    }
    if (t0->unk2 <= 0 || t0->m30 != 0) {
        func_802233B0(arg0, arg1);
        func_80006214(sp4C);
        func_8022310C(sp4C, (s32)D_8008DA88);
        func_80006214(arg0);
        return;
    }
    if (a2->unk2 <= 0 || a2->m30 != 0) {
        func_80006214(sp4C);
        func_802233B0(sp4C, D_8008DA88);
        func_80006214(arg0);
        func_8022310C(arg0, arg1);
        return;
    }
    if (GL->unk1031 != 0xF) {
        sp33 = func_80010550(arg1, (s32)sp48);
        func_80006214(sp4C);
        v1 = (func_8035D660_Vec *)func_80010550((u32)D_8008DA88, (s32)sp44);
        sp33 += (s32)v1;
        func_8035DD80(sp4C, 1);
        func_80006214(arg0);
        if (sp33 == 2) {
            func_80225540(sp4C);
            t0->m38 = 0;
            a2->m38 = t0->m38;
            t0->f32 = 0;
            a2->f32 = t0->f32;
            sp24 = *(func_8035D660_Vec *)D_80385650;
            sp48->unk1C = sp24;
            v1 = &sp48->unk1C;
            sp44->unk1C = sp24;
            t1 = &sp44->unk1C;
            if (t0->flag38 == 1) {
                v1->unk0 = 0x019000C9;
                t1->unk0 = 0x019000CA;
            }
            if (t0->c30 == 3) {
                ((u16 *)t1)[3] = ((u16 *)v1)[3] ^= 0x10;
            }
            D_8013A28C(arg1, *v1);
            func_80006214(sp4C);
            D_8013A28C((s32)D_8008DA88, *t1);
            func_80006214(arg0);
            if (D_801BCC21 == 7 && t0->unk2D8 == 2) {
                t0->unk2DA = 1;
                func_80367914(arg0, arg1);
                return;
            }
            func_800058DC(arg0, (void *)D_8035DF80);
            func_800058DC(sp4C, (void *)D_8035DF80);
        }
    }
}
