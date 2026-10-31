#include "common.h"
extern u8 D_8008DA88[];
extern void func_800058DC(void *arg0, s32 arg1);
extern s32 func_80006214(void *);
void func_801CD878(void *arg0, void **arg1);
typedef struct func_801CE5B0_Struct {
    u8 pad[0x94];
    u8 unk94;
} func_801CE5B0_Struct;
void func_801CE5B0(func_801CE5B0_Struct *arg0, s32 *arg1);
typedef struct func_801CE898_StructInner {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801CE898_StructInner;
typedef struct func_801CE898_StructOuter {
    u8 pad0[0xC];
    func_801CE898_StructInner *unkC;
} func_801CE898_StructOuter;
void func_801CE898(func_801CE898_StructOuter *arg0, s32 arg1);
typedef struct func_801D35BC_StructPos {
    u8 pad[4];
    f32 x, y, z;
} func_801D35BC_StructPos;
typedef struct func_801D35BC_StructObj {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_801D35BC_StructPos *unk30;
} func_801D35BC_StructObj;
extern void func_801D3060(f32 *, void *, struct func_801D35BC_StructObj **);


typedef struct func_801D36C0_StructInner {
    u8 pad0[0xC];
    void *unkC;
    u8 pad10[0x2E];
    u16 unk3E;
    u8 pad40[0xC];
    u16 unk4C;
} func_801D36C0_StructInner;
typedef struct func_801D36C0_Struct {
    u8 pad0[0xC];
    func_801D36C0_StructInner *unkC;
    u8 pad10[0x80];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D36C0_Struct;
typedef struct func_801D36C0_StructPos {
    u8 pad0[4];
    f32 x, y, z;
    u8 pad10[4];
    s16 angle;
} func_801D36C0_StructPos;
typedef struct func_801D36C0_StructObj {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_801D36C0_StructPos *unk30;
} func_801D36C0_StructObj;
extern f64 D_801E3650;

void func_801D36C0(func_801D36C0_Struct *arg0, func_801D36C0_StructObj **arg1) {
    f64 scale;
    f32 pos[3];
    s32 pad;
    s32 index;
    u8 i;
    u16 timer;
    func_801D36C0_StructObj *obj;
    func_801D36C0_StructPos *p;
    void *parent;

    parent = arg0->unkC->unkC;
    func_801CD878(arg0, (void **)arg1);
    if (arg0->unkC->unk3E == 1) {
        arg0->unk92 = 1;
    }
    for (i = 0; i < arg0->unk94; i++) {
        pad = (u8)((arg0->unk92 + i / 2) % 20);
        obj = arg1[i];
        p = obj->unk30;
        if (pad == 0) {
            obj->unk22 = 1;
            func_80006214(parent);
            func_801D3060(pos, parent, (struct func_801D35BC_StructObj **)D_8008DA88);
            func_80006214(arg0);
            p->x = pos[0];
            p->y = pos[1];
            p->z = pos[2];
        }
        p->y += 1.0 - (f32)(u32)arg0->unk92 * 0.1;
        p->angle += 4096.0 * ((i - arg0->unk94 / 2) - 0.5);
        p->angle &= 0x1FFF;
    }
    if (arg0->unk90 < arg0->unk92++ ||(arg0->unkC->unk4C & 0x8000)) {
        func_801CE5B0((func_801CE5B0_Struct *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}
