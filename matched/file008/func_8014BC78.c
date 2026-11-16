#include "common.h"

















s32 func_801C0B8C(u64 time);





void *func_8014B7CC(s32);
s32 func_8014B2CC(s32 arg0);
s32 func_8014B33C(s32 arg0);
s32 func_8014B36C(s32 arg0);
s32 func_8014B3F0(s32 arg0);
extern u8 D_801BED38;
extern u8 D_801BEF38;
void *func_8014B5E8(void);
s32 func_8014C068(s32 arg0);
s32 func_8014C0A8(s32 arg0);
s32 func_8014C0F0(s32 arg0);
struct func_8014C1F0_Struct {
    u8 unk0;
    u8 pad1[3];
    s32 unk4;
    u8 unk8;
    u8 unk9;
};
s32 func_8014C138(unsigned int arg0);
s32 func_8014C194(unsigned int arg0);
s32 func_8014C1F0(s32 arg0);
struct func_8014C23C_Inner {
    u8 pad0[0xA8];
    u16 unkA8;
};
struct func_8014C23C_Struct {
    u8 unk0;
    u8 pad1[3];
    struct func_8014C23C_Inner *unk4;
};
s32 func_8014C23C(s32 arg0);
u8 *func_8014C294(void);
s32 func_8014C2A0(void);

typedef struct {
    f32 x;
    f32 y;
    f32 z;
    f32 r;
} func_8014BC78_Elem;

typedef struct {
    u8 pad0[0x90];
    f32 x;
    f32 y;
    f32 z;
    s16 rot;
} func_8014BC78_Obj;

typedef struct {
    u8 flags;
    u8 pad1;
    u16 id;
    func_8014BC78_Obj *obj;
    u8 idx0;
    u8 idx1;
    u8 padA[2];
} func_8014BC78_Entry;

f32 func_8001EAD0(s16);
f32 func_8001EB64(s16);
f32 func_8002FC20(f32);
extern func_8014BC78_Elem *D_80181E40[];
extern func_8014BC78_Elem *D_80181F94[];
extern f32 D_8019026C;



u16 func_8014BC78(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    u8 pad[0x20];
    f32 best;
    func_8014BC78_Entry *e;
    func_8014BC78_Elem **tbl;
    func_8014BC78_Elem *p;
    func_8014BC78_Obj *o;
    s32 j;
    s32 i;
    s16 ang;
    u8 k;
    f32 rx;
    f32 rz;
    f32 dx;
    f32 dy;
    f32 dz;
    f32 d;
    u16 ret;

    ret = 0;
    best = D_8019026C;
    for (j = 0; j < 48; j++) {
        e = &((func_8014BC78_Entry *)&D_801BEF38)[j];
        k = e->flags;
        if (!(k & 1)) {
            continue;
        }
        if ((o = e->obj) == 0 ) {
            continue;
        }
        if (!(k & 2)) {
            k = e->idx0;
            tbl = &D_80181E40[k];
            ang = o->rot;
            if (*tbl == 0 ) {
                continue;
            }
            i = 0;
            if ((*tbl)->r == 0.0f) {
                continue;
            }
            do {
                rz = ((func_8014BC78_Elem *)((u8 *)*tbl + i)) ->z * func_8001EB64(ang) - ((func_8014BC78_Elem *)((u8 *)*tbl + i)) ->x * func_8001EAD0(ang);
                rx = ((func_8014BC78_Elem *)((u8 *)*tbl + i)) ->z * func_8001EAD0(ang) + ((func_8014BC78_Elem *)((u8 *)*tbl + i)) ->x * func_8001EB64(ang);
                o = e->obj;
                dx = arg0 - (o->x + rx);
                dz = arg2 - (o->z + rz);
                dy = arg1 - (((func_8014BC78_Elem *)((u8 *)*tbl + i)) ->y + o->y);
                if (func_8002FC20(dx * dx + dz * dz + dy * dy) <= ((func_8014BC78_Elem *)((u8 *)*tbl + i)) ->r + arg3) {
                    o = e->obj;
                    dx = arg0 - o->x;
                    dz = arg1 - o->y;
                    dy = arg2 - o->z;
                    d = func_8002FC20(dx * dx + dz * dz + dy * dy);
                    if (d < best) {
                        best = d;
                        ret = e->id;
                    }
                    break;
                }
                i += 16;
            } while ((p = ((func_8014BC78_Elem *)((u8 *)*tbl + i)) )->r != 0.0f);
        } else {
            k = e->idx1;
            tbl = &D_80181F94[k];
            ang = o->rot;
            if (*tbl == 0 ) {
                continue;
            }
            i = 0;
            if ((*tbl)->r == 0.0f) {
                continue;
            }
            do {
                rz = ((func_8014BC78_Elem *)((u8 *)*tbl + i)) ->z * func_8001EB64(ang) - ((func_8014BC78_Elem *)((u8 *)*tbl + i)) ->x * func_8001EAD0(ang);
                rx = ((func_8014BC78_Elem *)((u8 *)*tbl + i)) ->z * func_8001EAD0(ang) + ((func_8014BC78_Elem *)((u8 *)*tbl + i)) ->x * func_8001EB64(ang);
                o = e->obj;
                dx = arg0 - (o->x + rx);
                dz = arg2 - (o->z + rz);
                dy = arg1 - (((func_8014BC78_Elem *)((u8 *)*tbl + i)) ->y + o->y);
                if (func_8002FC20(dx * dx + dz * dz + dy * dy) <= ((func_8014BC78_Elem *)((u8 *)*tbl + i)) ->r + arg3) {
                    o = e->obj;
                    dx = arg0 - o->x;
                    dz = arg1 - o->y;
                    dy = arg2 - o->z;
                    d = func_8002FC20(dx * dx + dz * dz + dy * dy);
                    if (d < best) {
                        best = d;
                        ret = e->id;
                    }
                    break;
                }
                i += 16;
            } while ((p = ((func_8014BC78_Elem *)((u8 *)*tbl + i)) )->r != 0.0f);
        }
    }
    return ret;
}
