#include "common.h"
extern u8 D_801BBBF0[];


typedef struct func_801C80CC_StructV { f32 x, y, z; } func_801C80CC_StructV;
typedef struct func_801C80CC_StructN { u8 pad[4]; f32 x; f32 y; f32 z; u8 pad2[2]; s16 unk12; } func_801C80CC_StructN;
typedef struct func_801C80CC_StructM { u8 pad[0x2C]; func_801C80CC_StructN *unk2C; } func_801C80CC_StructM;
typedef struct func_801C80CC_StructG {
    u8 pad0[0xDC];
    u8 *unkDC;
    func_801C80CC_StructM *unkE0;
    u8 pad1[0x18E - 0xE4];
    u16 unk18E;
    u8 pad2[0xEF0 - 0x190];
    u16 unkEF0;
} func_801C80CC_StructG;
extern f32 func_800075B4(func_801C80CC_StructV, func_801C80CC_StructV);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern func_801C80CC_StructM *D_801BBCD0;
#define GG ((func_801C80CC_StructG *)&D_801BBBF0)

s32 func_801C80CC(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    u8 res;
    f32 fs2;
    s8 i;
    func_801C80CC_StructV sp80[3];
    func_801C80CC_StructV sp74;
    func_801C80CC_StructM *m;

    res = 0;
    fs2 = (u32)GG->unkDC[0x4D] * 0.25;
    if (GG->unkDC == NULL) {
        return 0;
    }
    if (GG->unkEF0 & 0x3050) {
        return 0;
    }
    if (GG->unk18E != 0) {
        return 0;
    }
    sp74.x = arg0;
    sp74.y = arg1;
    sp74.z = arg2;
    if (GG->unkEF0 == 0x100) {
        i = 0;
        m = GG->unkE0;
        do {
            sp80[i].x = (func_8001EAD0(m->unk2C->unk12) + (m = GG->unkE0, 0.0f)) * ((f32)(i - 1) * fs2) + m->unk2C->x;
            sp80[i].y = m->unk2C->y + fs2 * 0.5;
            sp80[i].z = (func_8001EB64(m->unk2C->unk12) + (m = GG->unkE0, 0.0f)) * ((f32)(i - 1) * fs2) + m->unk2C->z;
            i++;
        } while (i < 3);
    } else {
        m = D_801BBCD0;
        i = 0;
        do {
            sp80[i].x = m->unk2C->x;
            sp80[i].y = m->unk2C->y + fs2 * (i + 1);
            sp80[i].z = m->unk2C->z;
            i++;
        } while (i < 3);
    }
    i = 0;
    do {
        if (func_800075B4(sp80[i], sp74) < fs2 + arg3) {
            switch (i) {
            case 0:
                res |= 1;
                break;
            case 1:
                res |= 2;
                break;
            case 2:
                res |= 4;
                break;
            }
        }
        i++;
    } while (i < 3);
    return res;
}
