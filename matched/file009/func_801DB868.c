#include "context.h"

typedef struct func_801DB868_StructVec {
    f32 x;
    f32 y;
    f32 z;
} func_801DB868_StructVec;

typedef struct func_801DB868_StructModel {
    u8 pad[0x12];
    s16 unk12;
    u8 pad2[0xA4 - 0x14];
    func_801DB868_StructVec unkA4;
} func_801DB868_StructModel;

typedef struct func_801DB868_StructElem {
    u8 pad[0x18];
    s32 unk18;
    s32 unk1C;
    u8 pad2[2];
    u8 unk22;
    u8 pad3[0x2C - 0x23];
    func_801DB868_StructModel *unk2C;
} func_801DB868_StructElem;

typedef struct func_801DB868_StructObj {
    u8 pad[0xC];
    u16 unkC;
    u8 pad2[0x74 - 0xE];
    u8 unk74;
    u8 pad3[0xB0 - 0x75];
    func_801DB868_StructVec unkB0;
    func_801DB868_StructVec unkBC;
    func_801DB868_StructVec unkC8;
    func_801DB868_StructVec unkD4;
} func_801DB868_StructObj;

typedef struct func_801DB868_StructGlobal {
    u8 pad[0xDC];
    s32 unkDC;
    u8 pad2[0x1031 - 0xE0];
    u8 unk1031;
} func_801DB868_StructGlobal;

f32 func_8001EAD0(s16);
f32 func_8001EB64(s16);
s32 func_80126944(void);
void func_8013A334(func_801DB868_StructVec *, func_801DB868_StructElem **, func_801DB868_StructObj *, u16);
void func_801DB788(func_801DB868_StructVec, func_801DB868_StructObj *, f32, f32, s32);
void func_802261CC(s32, func_801DB868_StructElem **);
extern func_801DB868_StructGlobal D_801BBBF0;

void func_801DB868(func_801DB868_StructElem **arg0, func_801DB868_StructObj *arg1) {
    func_801DB868_StructVec v;
    f32 c;
    f32 s;
    s16 angle;
    s32 i;
    s32 flag;
    u8 *p;
    s32 id;
    s16 raw;
    s32 pad;

    raw = arg0[0]->unk2C->unk12;
    angle = -raw;
    c = func_8001EAD0(angle);
    s = func_8001EB64(angle);
    arg1->unkB0.x = arg1->unkB0.y = arg1->unkB0.z = 0.0f;
    arg1->unkD4 = arg1->unkC8 = arg1->unkBC = arg1->unkB0;
    for (i = 7; i < arg1->unkC; i++) {
        if (arg0[i]->unk22 != 0) {
            if (arg0[i]->unk1C == 0) {
                arg1->unkB0.x = arg1->unkB0.y = arg1->unkB0.z = 0.0f;
                arg1->unkD4 = arg1->unkC8 = arg1->unkBC = arg1->unkB0;
                return;
            }
            func_8013A334(&v, arg0, arg1, i);
            if (i == 9 || i == 12 || i == 15 || i == 18 || i == 19 || i == 20 || i == 21) {
                flag = 0;
            } else {
                flag = 1;
            }
            func_801DB788(v, arg1, c, s, flag);
        }
    }
    func_8013A334(&v, arg0, arg1, 26);
    func_801DB788(v, arg1, c, s, 1);
    func_8013A334(&v, arg0, arg1, 27);
    func_801DB788(v, arg1, c, s, 1);
    v = arg0[9]->unk2C->unkA4;
    func_801DB788(v, arg1, c, s, 0);
    v = arg0[12]->unk2C->unkA4;
    func_801DB788(v, arg1, c, s, 0);
    v = arg0[15]->unk2C->unkA4;
    func_801DB788(v, arg1, c, s, 0);
    v = arg0[18]->unk2C->unkA4;
    func_801DB788(v, arg1, c, s, 0);
    v = arg0[6]->unk2C->unkA4;
    func_801DB788(v, arg1, c, s, 1);
    v = arg0[1]->unk2C->unkA4;
    func_801DB788(v, arg1, c, s, 1);
    if (arg1->unkC >= 24) {
        v = arg0[24]->unk2C->unkA4;
        func_801DB788(v, arg1, c, s, 0);
    }
    if (func_80126944() == 1 && arg1->unk74 != 4 && D_801BBBF0.unk1031 > 0 && D_801BBBF0.unk1031 < 14) {
        id = arg0[0]->unk18;
        if (id == D_801BBBF0.unkDC) {
            p = (u8 *)&D_801BC03C;
        } else {
            p = (u8 *)&D_801BC3D8;
        }
        p[0x392] = 6;
        func_802261CC(id, arg0);
    }
}
