#include "common.h"
extern void *D_80005670(void *, void *);
extern u8 D_8008DA88[];
typedef struct func_803709D0_StructGlobal {
    u8 pad[0xDC];
    s32 unkDC;
    u8 padE0[0x1038 - 0xE0];
    f32 unk1038;
    f32 unk103C;
    f32 unk1040;
} func_803709D0_StructGlobal;
extern func_803709D0_StructGlobal D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern void func_80006214(void *);
extern void func_8013A334(f32 *a0, s32 a1, s32 a2, s32 a3);
typedef struct func_803709D0_StructObj {
    u8 pad[0x68];
    void *unk68;
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 unk7B;
    f32 unk7C;
    f32 unk80;
    f32 unk84;
    f32 unk88;
} func_803709D0_StructObj;


typedef struct func_803711E8_StructPlayer {
    u8 pad[0x5C];
    void *unk5C;
} func_803711E8_StructPlayer;
typedef struct func_803711E8_StructGlobal {
    u8 pad[0xDC];
    func_803711E8_StructPlayer *unkDC;
    u8 padE0[0xC];
    func_803711E8_StructPlayer *unkEC;
} func_803711E8_StructGlobal;
typedef struct func_803711E8_StructState {
    u8 pad[0x38];
    u32 : 3;
    u32 flag : 1;
} func_803711E8_StructState;
typedef struct func_803711E8_StructAngle {
    u8 pad[0x12];
    s16 unk12;
} func_803711E8_StructAngle;
typedef struct func_803711E8_StructSource {
    u8 pad[0x2C];
    func_803711E8_StructAngle *unk2C;
} func_803711E8_StructSource;
typedef struct func_803711E8_StructVec { f32 x, y, z; } func_803711E8_StructVec;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern u8 D_80387BC4[];

void func_803711E8(void *arg0, void *arg1, u8 arg2) {
    func_803711E8_StructPlayer *other;
    s32 state;
    func_803711E8_StructState *defaultState;
    void *player5C;
    void *other5C;
    func_803711E8_StructVec pos;
    func_803711E8_StructVec direction;
    func_803709D0_StructObj *result;

    if (arg0 != (func_803711E8_StructPlayer *)D_801BBBF0.unkDC)
        other = (func_803711E8_StructPlayer *)D_801BBBF0.unkDC;
    else
        other = ((func_803711E8_StructGlobal *)&D_801BBBF0)->unkEC;
    state = ((func_803711E8_StructPlayer *)D_801BBBF0.unkDC == arg0) ? (s32)D_801BC03C : (s32)D_801BC3D8;
    defaultState = ((func_803711E8_StructPlayer *)D_801BBBF0.unkDC != arg0) ? (func_803711E8_StructState *)D_801BC03C : (func_803711E8_StructState *)D_801BC3D8;
    player5C = ((func_803711E8_StructPlayer *)arg0)->unk5C;
    other5C = other->unk5C;
    switch (arg2) {
    case 0:
        func_80006214(other);
        if (((func_803711E8_StructState *)state)->flag == 0) {
            func_8013A334(&pos.x, (s32)D_8008DA88, (s32)other5C, 0x1A);
        } else {
            func_8013A334(&pos.x, (s32)D_8008DA88, (s32)other5C, 0x1B);
        }
        break;
    case 1:
    case 2:
        func_8013A334(&pos.x, (s32)arg1, (s32)player5C, 0xC);
        func_8013A334(&direction.x, (s32)arg1, (s32)player5C, 9);
        break;
    case 3:
        func_80006214(other);
        if (((func_803711E8_StructState *)state)->flag == 1) {
            func_8013A334(&pos.x, (s32)D_8008DA88, (s32)other5C, 0x1A);
            direction.x = func_8001EB64((*(func_803711E8_StructSource **)D_8008DA88)->unk2C->unk12);
            direction.z = func_8001EAD0((*(func_803711E8_StructSource **)D_8008DA88)->unk2C->unk12);
        } else {
            func_8013A334(&pos.x, (s32)D_8008DA88, (s32)other5C, 0x1B);
            direction.x = -func_8001EB64((*(func_803711E8_StructSource **)D_8008DA88)->unk2C->unk12);
            direction.z = -func_8001EAD0((*(func_803711E8_StructSource **)D_8008DA88)->unk2C->unk12);
        }
        direction.y = 0.0f;
        break;
    case 4:
        func_8013A334(&pos.x, (s32)arg1, (s32)player5C, 0x20);
        func_80006214(other);
        func_8013A334(&direction.x, (s32)D_8008DA88, (s32)other5C, 0x20);
        pos.x = (pos.x + direction.x) * 0.5;
        pos.y = (pos.y + direction.y) * 0.5;
        pos.z = (pos.z + direction.z) * 0.5;
        break;
    default:
        return;
    }
    func_80006214(arg0);
    result = D_80005670(arg0, D_80387BC4);
    if (result != NULL) {
        result->unk6C = pos.x;
        result->unk70 = pos.y;
        result->unk74 = pos.z;
        result->unk78 = arg2;
        result->unk7C = direction.x;
        result->unk80 = direction.y;
        result->unk84 = direction.z;
    }
}
