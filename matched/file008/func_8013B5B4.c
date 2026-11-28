#include "common.h"


typedef struct func_8013B5B4_StructVec { f32 x, y, z; } func_8013B5B4_StructVec;
struct func_8013B5B4_StructPos { u8 pad[4]; f32 x, y, z; };
struct func_8013B5B4_StructMid { u8 pad[0x2C]; struct func_8013B5B4_StructPos *pos; };
struct func_8013B5B4_StructId { u8 pad[0x1A]; u16 id; };
struct func_8013B5B4_StructObj {
    u8 pad[0x24];
    struct func_8013B5B4_StructMid *mid;
    u8 pad2[0x34];
    struct func_8013B5B4_StructId *info;
};
extern s32 func_801DFE00(s32, s32, s32);
extern void func_801DC9C4(func_8013B5B4_StructVec, u16, f32);
extern u16 D_8017D250[][5];
extern u16 D_8017D252[][5];
extern u16 D_8017D3B8[][7];

u16 func_8013B5B4(s32 arg0, volatile u16 arg1) {
    u16 *src;
    u16 id;
    u16 result;
    s32 i;
    struct func_8013B5B4_StructId *info;
    func_8013B5B4_StructVec pos;
    struct func_8013B5B4_StructPos *p;
    s32 a1;

    i = 0;
    info = ((struct func_8013B5B4_StructObj *)arg0)->info;
    id = info->id;
    a1 = arg1;
    if (id < 0x24) {
        if (a1 >= 7) {
            result = 0;
        } else {
            if (id == 0x22) {
                if (func_801DFE00(arg0, a1, id)) id = 0x23;
            }
            if (a1 == 4 || a1 == 6) { arg1 = a1 = 1; }
            else if (a1 == 5) { arg1 = 2; a1 = 2; }
            while (D_8017D250[i][0] != 0) {
                if (id == D_8017D250[i][0]) break;
                i++;
            }
            result = D_8017D252[i][a1];
        }
    } else if (*(u16 *)&arg1 == 0) {
        result = 0;
    } else {
        if (id == 0x26 || id == 0x28 || id == 0x2B || id == 0x2D) {
            if (func_801DFE00(arg0, a1, id)) id++;
        }
        while (D_8017D3B8[i][0] != 0) {
            if (id == D_8017D3B8[i][0]) break;
            i++;
        }
        src = (u16 *)&arg0 + 3;
        result = D_8017D3B8[i][*src];
    }
    if (result != 0) {
        p = ((struct func_8013B5B4_StructObj *)arg0)->mid->pos;
        pos.x = p->x;
        pos.y = p->y;
        pos.z = p->z;
        func_801DC9C4(pos, result, 1.5f);
    }
    return result;
}
