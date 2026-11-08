#include "common.h"
#ifndef G
extern int func_80005204(unsigned short);
#endif
extern u8 D_801BBBF0[];
typedef struct func_801300E8_Struct {
    u8 pad0[0x30];
    u16 unk30;
    u8 pad32[0x324 - 0x32];
    f32 unk324;
    u8 pad328[0x112C - 0x328];
    s32 unk112C;
    f32 unk1130;
    u8 pad1134[4];
    s32 unk1138;
    u8 pad113C[8];
    f32 unk1144;
    f32 unk1148;
    f32 unk114C;
} func_801300E8_Struct;
#define G ((func_801300E8_Struct *)D_801BBBF0)


typedef struct func_8012DA90_StructObj {
    u8 pad[0x3F];
    u8 state;
    f32 x, y, z;
} func_8012DA90_StructObj;
typedef struct func_8012DA90_StructAngle {
    u8 pad[0x12];
    s16 angle;
} func_8012DA90_StructAngle;
typedef struct func_8012DA90_StructNode {
    u8 pad[0x2C];
    func_8012DA90_StructAngle *p;
} func_8012DA90_StructNode;
typedef struct func_8012DA90_StructGlobal {
    u8 pad[0xE0];
    func_8012DA90_StructNode *p;
    u8 pad2[0xAC];
    u16 angle;
} func_8012DA90_StructGlobal;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
#define GLOBAL ((func_8012DA90_StructGlobal *)D_801BBBF0)
#define ANGLE (GLOBAL->p->p->angle)

void func_8012DA90(void *arg0)
{
    s16 offset;
    func_8012DA90_StructObj *obj = arg0;
    switch (obj->state) {
    case 1:
        obj->y = 1.8f;
        obj->x = (f64)func_8001EAD0(ANGLE);
        obj->z = (f64)func_8001EB64(ANGLE);
        break;
    case 2:
        obj->y = 1.6f;
        obj->x = 0.0f;
        obj->z = 0.0f;
        break;
    case 3:
        obj->x = 0.0f;
        obj->z = 0.0f;
        obj->y = 3.0f;
        break;
    case 4:
        obj->y = 2.5f;
        obj->x = func_8001EAD0(ANGLE) * 2.5;
        obj->z = func_8001EB64(ANGLE) * 2.5;
        break;
    case 5:
        obj->x = func_8001EAD0(ANGLE) * 0.3;
        obj->z = func_8001EB64(ANGLE) * 0.3;
        break;
    case 6:
        obj->x = (f64)func_8001EAD0(ANGLE);
        obj->z = (f64)func_8001EB64(ANGLE);
        break;
    case 7:
        obj->y += 2.0;
        break;
    case 8:
        obj->x = func_8001EAD0(ANGLE) * 0.1;
        obj->z = func_8001EB64(ANGLE) * 0.1;
        break;
    case 9:
        obj->y = 2.0f;
        offset = GLOBAL->angle << 11;
        obj->x = 2.0 * func_8001EAD0((s16)(ANGLE + offset));
        obj->z = 2.0 * func_8001EB64((s16)(ANGLE + offset));
        break;
    case 10:
        obj->y = 2.2f;
        obj->x = func_8001EAD0(ANGLE) * 1.8;
        obj->z = func_8001EB64(ANGLE) * 1.8;
        break;
    case 11:
        obj->y = 2.5f;
        obj->x = func_8001EAD0(ANGLE) * 0.5;
        obj->z = func_8001EB64(ANGLE) * 0.5;
        break;
    }
    obj->state = 0;
}
