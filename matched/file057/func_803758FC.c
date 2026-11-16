#include "common.h"
extern u8 D_8038CCC0[];
extern u8 D_8038CCE0[];
extern void func_800058DC(void *, void *);
extern void func_801479A8(s32);
typedef struct func_80375560_StructData {
    u8 pad[0xC];
    u16 count;
} func_80375560_StructData;
typedef struct func_80375560_StructNode {
    struct func_80375560_StructNode *left;
    u8 pad[4];
    struct func_80375560_StructNode *right;
} func_80375560_StructNode;
typedef struct func_80375560_Struct {
    u8 pad[0x24];
    func_80375560_StructNode *root;
    u8 pad2[0x34];
    func_80375560_StructData *data;
} func_80375560_Struct;
void func_80375560(func_80375560_Struct *arg0, func_80375560_StructNode **arg1);
typedef struct func_80375688_StructData {
    u8 pad[0xC];
    u16 count;
} func_80375688_StructData;
typedef struct func_80375688_Struct {
    u8 pad[0x5C];
    func_80375688_StructData *data;
} func_80375688_Struct;
void func_80375688(func_80375688_Struct *arg0, u8 arg1, u16 arg2, u16 arg3);
u8 func_803757E4(u8 arg0, u8 arg1, f32 arg2);
typedef struct func_803762CC_Struct {
    u8 pad[0x2C];
    s32 unk2C;
} func_803762CC_Struct;
void func_803762CC(func_803762CC_Struct *arg0, s32 arg1);


typedef struct func_803758FC_StructMaterial { u8 pad[0x34]; s32 unk34; } func_803758FC_StructMaterial;
typedef struct func_803758FC_StructNode { u8 pad[0x2C]; func_803758FC_StructMaterial *unk2C; } func_803758FC_StructNode;
typedef struct func_803758FC_StructActor {
    u8 pad[0x24]; func_803758FC_StructNode *unk24; u8 pad28[0xE]; u16 unk36;
    u8 pad38[0x24]; func_80375560_StructData *unk5C;
} func_803758FC_StructActor;
typedef struct func_803758FC_Struct {
    u8 pad[0x2C]; func_803758FC_StructActor *unk2C;
    u8 unk30, unk31, unk32, unk33, unk34, unk35, unk36, unk37;
    u8 unk38, unk39, unk3A, unk3B, unk3C, unk3D, unk3E, unk3F;
} func_803758FC_Struct;
typedef struct func_803758FC_StructState {
    u8 pad[0x30]; u32 unk30; u8 pad34[0x6A]; u16 unk9E;
    u8 padA0[6]; u8 unkA6; u8 padA7[0x211];
    s16 unk2B8, unk2BA, unk2BC, unk2BE, unk2C0, unk2C2;
    u8 pad2C4[0xD2]; u8 unk396;
} func_803758FC_StructState;
typedef struct func_803758FC_StructGlobal {
    u8 pad[0x1C]; u8 unk1C; u8 pad1D[0x13]; u16 unk30;
    u8 pad32[0xAA]; func_803758FC_StructActor *unkDC;
    u8 padE0[0xE40]; u8 unkF20, unkF21, unkF22, unkF23, unkF24, unkF25;
    s8 unkF26, unkF27, unkF28; u8 padF29[0x108]; u8 unk1031;
} func_803758FC_StructGlobal;
typedef struct func_803758FC_StructRun { u8 color; u8 start; } func_803758FC_StructRun;
extern func_803758FC_StructGlobal D_801BBBF0;
extern func_803758FC_StructGlobal D_801BBBF0__a;
extern func_803758FC_StructGlobal D_801BBBF0__b;
extern func_803758FC_StructGlobal D_801BBBF0__c;
extern func_803758FC_StructState D_801BC03C;
extern func_803758FC_StructState D_801BC3D8;
extern func_803758FC_StructNode *D_8008DA88[];
extern u8 D_8017B768[];
extern u8 D_801E0CB8[];
extern u8 D_803854D0[];
extern u8 D_80385508[];
extern s8 D_801BCAE0[];
extern s8 D_801BCAE0__a[];
extern s8 D_801BCAE0__b[];
extern s8 D_801BCAE0__c[];
extern u8 D_8038CCC1[];
extern u8 D_801BCC21;
extern void func_80006214();
extern f32 func_8001EAD0(s16);
extern s32 func_80147828(void *, u8, u8, u8);
extern void func_80147AA8(u8, u8, u8, s32);
extern void func_80147AF0(u8, u8, u8, u8);
extern void func_80147C28(u8, s8, s8, s8);

void func_803758FC(func_803758FC_Struct *arg0, s32 arg1) {
    func_803758FC_StructState *v;
    s32 i;
    u8 r, g, b, r2, g2, b2;
    u16 sp78;
    s16 angle;
    u16 sp74;
    f32 f;
    func_80375560_StructData *data;
    func_803758FC_StructRun runs[25];
    u8 index;
    u8 flags;
    u8 count;

    if (arg0->unk2C == D_801BBBF0.unkDC) v = &D_801BC03C;
    else v = &D_801BC3D8;
    data = arg0->unk2C->unk5C;
    sp78 = arg0->unk2C->unk36;
    if (D_801BBBF0.unk1031 == 0xF) return;
    arg0->unk31 = data->count;
    func_80006214(arg0->unk2C);
    func_80375560((func_80375560_Struct *)arg0->unk2C, (func_80375560_StructNode **)D_8008DA88);
    if (arg0->unk2C->unk24->unk2C->unk34 == (s32)D_801E0CB8 || arg0->unk2C->unk24->unk2C->unk34 == (s32)D_803854D0 || arg0->unk2C->unk24->unk2C->unk34 == (s32)D_80385508) {
        flags = D_8038CCE0[arg0->unk31 - 1];
        for (i = 1; i < arg0->unk31; i++) {
            D_8008DA88[i]->unk2C->unk34 = 0;
        }
        D_8008DA88[flags]->unk2C->unk34 = (s32)D_8017B768 | 0x40000000;
        func_80006214(arg0);
        return;
    }
    func_80006214(arg0);
    func_801479A8((s32)arg0->unk2C);
    for (i = 0; i < arg0->unk31; i++) {
        D_8038CCC0[i] = 0xFF;
    }
    arg0->unk38 = 0;
    arg0->unk3C = 0;
    if (v->unk396 != 0 || (v->unk30 << 3 >> 28) == 4) arg0->unk38 |= 1;
    if (v->unk9E != 0) arg0->unk38 |= 2;
    if (D_801BBBF0.unk1C != 0) {
        if (v->unkA6 & 0x40) arg0->unk38 |= 4;
        if (v->unkA6 & 0x80) arg0->unk38 |= 8;
        if (v->unk2B8 < 0) arg0->unk3C |= 1;
        if (v->unk2BA < 0) arg0->unk3C |= 2;
        if (v->unk2BC < 0) arg0->unk3C |= 4;
        if (v->unk2BE < 0) arg0->unk3C |= 8;
        if (v->unk2C0 < 0) arg0->unk3C |= 0x10;
        if (v->unk2C2 < 0) arg0->unk3C |= 0x20;
    }
    if (arg0->unk38 & 0x1F) {
        for (i = 0; i < arg0->unk31; i++) {
            D_8038CCC0[i] = arg0->unk30;
        }
        angle = (s16)(s32)(((f64)(u32)D_801BBBF0.unk30 / 47.0) * 8192.0) & 0x1FFF;
        if (D_801BBBF0.unkDC == arg0->unk2C) angle += 0xAAA;
        f = func_8001EAD0(angle);
        flags = arg0->unk38;
        r = r2 = D_801BBBF0.unkF20;
        g = g2 = D_801BBBF0.unkF21;
        b = b2 = D_801BBBF0.unkF22;
        if (flags & 1) {
            arg0->unk33 = 1;
            r2 = 0; r = 0; g2 = 0xC0; g = 0xC0; b2 = 0xC0; b = 0xC0;
        } else if (flags & 2) {
            arg0->unk33 = 2; r = 0xC0; g = 0; b = 0xFF;
        } else if ((flags & 4) && (flags & 8)) {
            arg0->unk33 = 0xC; r = 0; g = 0xFF; b = 0; r2 = 0xC0; g2 = 0x40; b2 = 0;
        } else if (flags & 4) {
            arg0->unk33 = 4; r = 0x40; g = 0xFF; b = 0;
        } else if (flags & 8) {
            arg0->unk33 = 8; r = 0xC0; g = 0x80; b = 0;
        } else if (flags & 0x10) {
            arg0->unk33 = 0x10; r = 0x30; g = 0x20; b = 0xFF;
        }
        arg0->unk39 = func_803757E4(r, r2, f);
        arg0->unk3A = func_803757E4(g, g2, f);
        arg0->unk3B = func_803757E4(b, b2, f);
        func_80147AA8(arg0->unk30, arg0->unk39, arg0->unk3A, arg0->unk3B);
        func_80147AF0(arg0->unk30, D_801BBBF0.unkF23, D_801BBBF0.unkF24, D_801BBBF0.unkF25);
    if (D_801BBBF0.unkDC) {}
        func_80147C28(arg0->unk30, D_801BBBF0.unkF26, D_801BBBF0.unkF27, D_801BBBF0.unkF28);
    }
    if (arg0->unk3C != 0) {
        if (arg0->unk38 & 0x1F) {
            r2 = arg0->unk39; g2 = arg0->unk3A; b2 = arg0->unk3B;
        } else {
            r2 = D_801BBBF0.unkF20; g2 = D_801BBBF0.unkF21; b2 = D_801BBBF0.unkF22;
        }
        angle = (s16)(s32)(((f64)(u32)D_801BBBF0.unk30 / 47.0) * 8192.0) & 0x1FFF;
        if (D_801BBBF0.unkDC == arg0->unk2C) angle += 0xAAA;
        f = func_8001EAD0(angle);
        arg0->unk3D = func_803757E4(0xFF, r2, f);
        arg0->unk3E = func_803757E4(0x40, g2, f);
        arg0->unk3F = func_803757E4(0x40, b2, f);
        func_80147AA8(arg0->unk30 + 2, arg0->unk3D, arg0->unk3E, arg0->unk3F);
    if (D_801BBBF0.unkF23) {}
        func_80147AF0(arg0->unk30 + 2, D_801BBBF0__b.unkF23, D_801BBBF0__b.unkF24, D_801BBBF0__b.unkF25);
        func_80147C28(arg0->unk30 + 2, D_801BCAE0__a[0x36], D_801BCAE0__b[0x37], D_801BCAE0__c[0x38]);
        if (arg0->unk3C & 1) {
            if (sp78 == 0x56 || sp78 == 0xF6 || sp78 == 0x5A || sp78 == 0x5B) sp74 = 3;
            else sp74 = 6;
            func_80375688((func_80375688_Struct *)arg0->unk2C, arg0->unk30 + 2, sp74, sp74);
            if (arg0->unk31 == 0x14) func_80375688((func_80375688_Struct *)arg0->unk2C, arg0->unk30 + 2, 0x13, 0x13);
            else if (arg0->unk31 >= 0x15) func_80375688((func_80375688_Struct *)arg0->unk2C, arg0->unk30 + 2, 0x13, 0x15);
        }
        if (arg0->unk3C & 2) {
            if (sp78 == 0x56 || sp78 == 0xF6 || sp78 == 0x5A || sp78 == 0x5B) sp74 = 2;
            else sp74 = 3;
            func_80375688((func_80375688_Struct *)arg0->unk2C, arg0->unk30 + 2, 1, sp74);
        }
        if (arg0->unk3C & 4) func_80375688((func_80375688_Struct *)arg0->unk2C, arg0->unk30 + 2, 0xA, 0xC);
        if (arg0->unk3C & 8) func_80375688((func_80375688_Struct *)arg0->unk2C, arg0->unk30 + 2, 7, 9);
        if (arg0->unk3C & 0x10) func_80375688((func_80375688_Struct *)arg0->unk2C, arg0->unk30 + 2, 0x10, 0x12);
        if (arg0->unk3C & 0x20) func_80375688((func_80375688_Struct *)arg0->unk2C, arg0->unk30 + 2, 0xD, 0xF);
    }
    for (i = 0; i < 25; i++) {
        runs[i].color = 0xFF;
        runs[i].start = 0;
    }
    runs[0].start = 0;
    runs[0].color = D_8038CCC0[1];
    index = 0;
    for (i = 1; i < arg0->unk31; i++) {
        if (runs[index].color != D_8038CCC0[i]) {
            index++;
            runs[index].color = D_8038CCC0[i];
            runs[index].start = i - 1;
        }
    }
    func_80006214(arg0->unk2C);
    for (i = 0; i <= index; i++) {
        count = D_8038CCE0[runs[i].start];
        if (runs[i].color == 0xFF) {
            D_8008DA88[count]->unk2C->unk34 = (s32)D_8017B768 | 0x40000000;
        } else {
            func_80147828(arg0->unk2C, runs[i].color, count, D_8038CCE0[arg0->unk31 - 1]);
        }
    }
    func_80006214(arg0);
    arg0->unk34 = arg0->unk38;
    arg0->unk35 = arg0->unk39;
    if (D_801BBBF0.unkDC) {}
    arg0->unk36 = arg0->unk3A;
    arg0->unk37 = arg0->unk3B;
    flags = D_801BCC21;
    if (flags >= 0xA && flags != 0xF) func_800058DC(arg0, func_803762CC);
}
