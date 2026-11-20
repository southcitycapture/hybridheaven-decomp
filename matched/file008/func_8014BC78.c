#include "common.h"
extern u8 D_801BEF38;


typedef struct func_8014BC78_StructElem {
    f32 x;
    f32 y;
    f32 z;
    f32 r;
} func_8014BC78_Elem;

typedef struct func_8014BC78_StructObj {
    u8 pad0[0x90];
    f32 x;
    f32 y;
    f32 z;
    s16 rot;
} func_8014BC78_Obj;

typedef struct func_8014BC78_StructEntry {
    u8 flags;
    u8 pad1;
    u16 id;
    func_8014BC78_Obj *obj;
    u8 idx0;
    u8 idx1;
    u8 padA[2];
} func_8014BC78_Entry;

typedef struct func_8014BC78_StructQuery {
    f32 x;
    f32 z;
    f32 y;
    f32 radius;
    f32 best;
    f32 rotated_x;
    f32 rotated_z;
    f32 dx;
    f32 dy;
    f32 dz;
    f32 origin_distance;
    func_8014BC78_Entry *entry;
    func_8014BC78_Elem **table;
} func_8014BC78_Query;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern f32 func_8002FC20(f32);
extern func_8014BC78_Elem *D_80181E40[];
extern func_8014BC78_Elem *D_80181F94[];

u16 func_8014BC78(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    func_8014BC78_Query query;
    func_8014BC78_Elem *p;
    func_8014BC78_Obj *o;
    s32 j;
    s32 i;
    s16 ang;
    u8 k;
    u16 ret;

    ret = 0;
    query.x = arg0;
    query.z = arg2;
    query.y = arg1;
    query.radius = arg3;
    query.best = (1e+05f);
    for (j = 0; j < 48; j++) {
        query.entry = &((func_8014BC78_Entry *)&D_801BEF38)[j];
        k = query.entry->flags;
        if (!(k & 1)) {
            continue;
        }
        if ((o = query.entry->obj) == 0 ) {
            continue;
        }
        if (!(k & 2)) {
            k = query.entry->idx0;
            query.table = &D_80181E40[k];
            ang = o->rot;
            if (*query.table == 0 ) {
                continue;
            }
            i = 0;
            if ((*query.table)->r == 0.0f) {
                continue;
            }
            do {
                query.rotated_z = ((func_8014BC78_Elem *)((u8 *)*query.table + i)) ->z * func_8001EB64(ang) - ((func_8014BC78_Elem *)((u8 *)*query.table + i)) ->x * func_8001EAD0(ang);
                query.rotated_x = ((func_8014BC78_Elem *)((u8 *)*query.table + i)) ->z * func_8001EAD0(ang) + ((func_8014BC78_Elem *)((u8 *)*query.table + i)) ->x * func_8001EB64(ang);
                o = query.entry->obj;
                query.dx = query.x - (o->x + query.rotated_x);
                query.dz = query.z - (o->z + query.rotated_z);
                query.dy = query.y - (((func_8014BC78_Elem *)((u8 *)*query.table + i)) ->y + o->y);
                if (func_8002FC20(query.dx * query.dx + query.dz * query.dz + query.dy * query.dy) <= ((func_8014BC78_Elem *)((u8 *)*query.table + i)) ->r + query.radius) {
                    o = query.entry->obj;
                    query.dx = query.x - o->x;
                    query.dz = query.y - o->y;
                    query.dy = query.z - o->z;
                    query.origin_distance = func_8002FC20(query.dx * query.dx + query.dz * query.dz + query.dy * query.dy);
                    if (query.origin_distance < query.best) {
                        query.best = query.origin_distance;
                        ret = query.entry->id;
                    }
                    break;
                }
                i += 16;
            } while ((p = ((func_8014BC78_Elem *)((u8 *)*query.table + i)) )->r != 0.0f);
        } else {
            k = query.entry->idx1;
            query.table = &D_80181F94[k];
            ang = o->rot;
            if (*query.table == 0 ) {
                continue;
            }
            i = 0;
            if ((*query.table)->r == 0.0f) {
                continue;
            }
            do {
                query.rotated_z = ((func_8014BC78_Elem *)((u8 *)*query.table + i)) ->z * func_8001EB64(ang) - ((func_8014BC78_Elem *)((u8 *)*query.table + i)) ->x * func_8001EAD0(ang);
                query.rotated_x = ((func_8014BC78_Elem *)((u8 *)*query.table + i)) ->z * func_8001EAD0(ang) + ((func_8014BC78_Elem *)((u8 *)*query.table + i)) ->x * func_8001EB64(ang);
                o = query.entry->obj;
                query.dx = query.x - (o->x + query.rotated_x);
                query.dz = query.z - (o->z + query.rotated_z);
                query.dy = query.y - (((func_8014BC78_Elem *)((u8 *)*query.table + i)) ->y + o->y);
                if (func_8002FC20(query.dx * query.dx + query.dz * query.dz + query.dy * query.dy) <= ((func_8014BC78_Elem *)((u8 *)*query.table + i)) ->r + query.radius) {
                    o = query.entry->obj;
                    query.dx = query.x - o->x;
                    query.dz = query.y - o->y;
                    query.dy = query.z - o->z;
                    query.origin_distance = func_8002FC20(query.dx * query.dx + query.dz * query.dz + query.dy * query.dy);
                    if (query.origin_distance < query.best) {
                        query.best = query.origin_distance;
                        ret = query.entry->id;
                    }
                    break;
                }
                i += 16;
            } while ((p = ((func_8014BC78_Elem *)((u8 *)*query.table + i)) )->r != 0.0f);
        }
    }
    return ret;
}
