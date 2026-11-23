#include "common.h"
extern u8 D_8008DA88[];
extern u8 D_801BBBF0[];
typedef struct func_80369094_Struct {
    u8 pad0;
    u8 unk1;
    u8 pad2[6];
    s16 unk8;
    u8 pad10[0x2D9 - 0x0A];
    u8 unk2D9;
} func_80369094_Struct;
extern struct func_80369094_Struct D_801BC03C;
extern struct func_80369094_Struct D_801BC3D8;
extern u8 D_80387254;
extern void func_800058DC(s32, void *);
s32 func_80006214();
extern s32 func_8000E634(void *);
extern void func_800112B0(s32, void *);
func_80369094_Struct *func_803677B0(u8);
void func_80367C24(s32 arg0, s32 arg1);
typedef struct func_80367C30_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_80367C30_Struct;
void func_80367C30(func_80367C30_Struct *arg0, void *arg1);
void func_80368020(void *, void *);


typedef struct func_80367914_Copy {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    f32 unk8;
} func_80367914_Copy;

typedef struct func_80367914_Sub {
    u8 pad0[0x1C];
    func_80367914_Copy unk1C;
    u8 pad28[0x7C - 0x28];
    s32 unk7C;
    u16 unk80;
    u16 unk82;
} func_80367914_Sub;

typedef struct func_80367914_Entry {
    u8 pad0[0x30];
    u8 pad30a : 7;
    u8 unk30 : 1;
    u8 pad31;
    u8 pad32a : 3;
    u8 unk32 : 1;
    u8 pad32b : 4;
    u8 pad33;
    u32 pad34;
    u32 pad38a : 3;
    u32 unk38 : 1;
    u32 pad38b : 28;
    u8 pad3C[0x2D4 - 0x3C];
    u8 *unk2D4;
    u8 pad2D8;
    u8 unk2D9;
    u8 pad2DA[0x2FA - 0x2DA];
    u8 unk2FA;
} func_80367914_Entry;

typedef struct func_80367914_Record {
    u8 unk0;
    u8 pad1[0xB];
    s32 unkC;
    s32 unk10;
} func_80367914_Record;

typedef struct func_80367914_Globals {
    u8 pad0[0xDC];
    func_80367C30_Struct *unkDC;
    u8 padE0[0xC];
    func_80367C30_Struct *unkEC;
} func_80367914_Globals;

#define GL ((func_80367914_Globals *)D_801BBBF0)

extern u8 D_801842A0[];

void func_80367914(func_80367C30_Struct *arg0, s32 arg1) {
    s32 other;
    func_80367914_Entry *v1;
    func_80367914_Entry *a3;
    func_80367914_Sub *sub;
    func_80367914_Sub *otherSub;
    func_80367914_Record *rec;
    s32 t;
    func_80367914_Copy *copy;
extern void func_80011198();
extern void func_80011258();

    if (arg0 != GL->unkDC) {
        other = (s32)GL->unkDC;
    } else {
        other = (s32)GL->unkEC;
    }
    if (arg0 == GL->unkDC) {
        v1 = (func_80367914_Entry *)&D_801BC03C;
    } else {
        v1 = (func_80367914_Entry *)&D_801BC3D8;
    }
    if (arg0 != GL->unkDC) {
        a3 = (func_80367914_Entry *)&D_801BC03C;
    } else {
        a3 = (func_80367914_Entry *)&D_801BC3D8;
    }
    sub = (func_80367914_Sub *)arg0->unk5C;
    otherSub = (func_80367914_Sub *)((func_80367C30_Struct *)other)->unk5C;
    copy = &sub->unk1C;
    D_80387254 = 0;
    if (v1->unk38 == 1) {
        t = v1->unk2D9;
        if (t < 0x39 || t >= 0x3E) {
            v1->unk2D9 = 0x39;
            v1->unk2D4 = D_801842A0 + v1->unk2D9 * 0x1C;
        }
    } else {
        t = v1->unk2D9;
        if (t < 0x25 || (t >= 0x39 && t < 0x4D) || t >= 0x4F) {
            v1->unk2D9 = 0x26;
            v1->unk2D4 = D_801842A0 + v1->unk2D9 * 0x1C;
        }
    }
    rec = (func_80367914_Record *)func_803677B0(v1->unk2D9);
    if (rec->unk0 != v1->unk2D9) {
        v1->unk2D9 = rec->unk0;
        v1->unk2D4 = D_801842A0 + v1->unk2D9 * 0x1C;
    }
    v1->unk2FA = 0;
    a3->unk2FA = 0;
    func_80011198(arg1, (s32)sub);
    sub->unk7C = rec->unkC;
    v1->unk32 = 0;
    a3->unk30 = 1;
    a3->unk32 = 1;
    otherSub->unk7C = rec->unk10;
    sub->unk82 = otherSub->unk82 = 0;
    sub->unk80 = otherSub->unk80 = 2;
    switch ((u32)copy->unk0) {
    case 0x1900082:
    case 0x1900083:
    case 0x1900084:
    case 0x1900085:
    case 0x1900086:
    case 0x1900087:
    case 0x1900088:
    case 0x1900089:
    case 0x19000A2:
    case 0x19000A3:
    case 0x19000A4:
    case 0x19000A5:
        func_80011258(arg1, &copy->unk6);
        func_80006214(other);
        func_80011258(D_8008DA88, &otherSub->unk1C.unk6);
        func_80006214((s32)arg0);
        if ((s32)copy->unk4 < (func_8000E634(copy) / 2)) {
            func_800112B0(arg1, &copy->unk6);
            func_80006214(other);
            func_800112B0((s32)D_8008DA88, &otherSub->unk1C.unk6);
            func_80006214((s32)arg0);
        }
        func_800058DC((s32)arg0, func_80367C30);
        func_800058DC(other, func_80367C24);
        return;
    default:
        func_80368020(arg0, (void *)arg1);
        return;
    }
}
