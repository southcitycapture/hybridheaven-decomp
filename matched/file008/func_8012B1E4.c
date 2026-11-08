#include "common.h"


typedef struct func_8012B1E4_StructVec {
    u8 pad[4];
    f32 x, y, z;
    s16 unk10, angle;
} func_8012B1E4_StructVec;
typedef struct func_8012B1E4_StructObj {
    u8 pad[0x2C];
    func_8012B1E4_StructVec *a, *b;
} func_8012B1E4_StructObj;
typedef struct func_8012B1E4_StructArg {
    u8 pad[0x24];
    func_8012B1E4_StructObj *obj;
    u8 pad28[4];
    u32 flags;
    u8 pad30[0x1C];
    u8 width, height, depth;
    s8 y, z;
    u8 pad51[3];
    u32 mask;
} func_8012B1E4_StructArg;
typedef struct func_8012B1E4_StructEntry {
    u16 flag, index;
} func_8012B1E4_StructEntry;
extern func_8012B1E4_StructEntry D_80176020[];
extern u32 D_801BC918;
extern f32 D_801BC858[];
extern f32 D_801BC898[];
extern f32 D_801BC8D8[];
extern f32 D_801BC798[];
extern f32 D_801BC7D8[];
extern f32 D_801BC818[];
extern void func_80130C40(s16, f32 *, f32 *);

void func_8012B1E4(func_8012B1E4_StructArg *arg0, s32 arg1)
{
    f32 *baseX, *baseY, *baseZ;
    s16 *angle;
    func_8012B1E4_StructEntry *entry = D_80176020;
    func_8012B1E4_StructObj *obj;
    f32 x, y, z;
    f32 *outX, *outY, *outZ;
    func_8012B1E4_StructVec *vec;
    f32 divisor = 2.0f;

    if (arg0->flags & 0x100) {
        D_801BC918 = arg0->mask;
        if (arg1) {
            outX = D_801BC858;
            outY = D_801BC898;
            outZ = D_801BC8D8;
        } else {
            outX = D_801BC798;
            outY = D_801BC7D8;
            outZ = D_801BC818;
        }
        obj = arg0->obj;
        if (obj != NULL) {
            vec = obj->a;
            if (vec != NULL) {
                baseX = &vec->x;
                baseY = &vec->y;
                baseZ = &vec->z;
                angle = &vec->angle;
            } else {
                baseX = &obj->b->x;
                baseY = &obj->b->y;
                baseZ = &obj->b->z;
                angle = &obj->b->angle;
            }
            while (entry->flag != 0) {
                if (entry->flag & D_801BC918) {
                    switch (entry->flag) {
                    case 1:
                        x = 0.0f;
                        y = arg0->y;
                        z = arg0->z;
                        break;
                    case 2:
                        x = 0.0f;
                        y = arg0->y;
                        z = arg0->z + (f32)(u32)arg0->depth;
                        break;
                    case 4:
                        x = -(f32)(u32)arg0->width;
                        y = arg0->y;
                        z = arg0->z;
                        break;
                    case 8:
                        x = (f32)(u32)arg0->width;
                        y = arg0->y;
                        z = arg0->z;
                        break;
                    case 16:
                        x = 0.0f;
                        y = arg0->y;
                        z = arg0->z - (f32)(u32)arg0->depth;
                        break;
                    case 32:
                        x = 0.0f;
                        y = arg0->y + (f32)(u32)arg0->height / divisor;
                        z = arg0->z + (f32)(u32)arg0->depth;
                        break;
                    case 64:
                        x = -(f32)(u32)arg0->width;
                        y = arg0->y + (f32)(u32)arg0->height / divisor;
                        z = arg0->z;
                        break;
                    case 128:
                        x = (f32)(u32)arg0->width;
                        y = arg0->y + (f32)(u32)arg0->height / divisor;
                        z = arg0->z;
                        break;
                    case 256:
                        x = 0.0f;
                        y = arg0->y + (f32)(u32)arg0->height / divisor;
                        z = arg0->z - (f32)(u32)arg0->depth;
                        break;
                    case 512:
                        x = 0.0f;
                        y = arg0->y + (f32)(u32)arg0->height;
                        z = arg0->z;
                        break;
                    case 1024:
                        x = 0.0f;
                        y = arg0->y;
                        z = arg0->z;
                        break;
                    }
                    func_80130C40(-*angle, &x, &z);
                    outX[entry->index] = *baseX + x;
                    outY[entry->index] = *baseY + y;
                    outZ[entry->index] = *baseZ + z;
                }
                entry++;
            }
        }
    }
}
