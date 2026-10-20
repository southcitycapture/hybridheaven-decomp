#include "context.h"

extern u8 D_80387C00[];

typedef struct func_80371DF4_StructVec {
    u8 pad[4];
    f32 x;
    f32 y;
    f32 z;
} func_80371DF4_StructVec;

typedef struct func_80371DF4_StructSource {
    u8 pad[0x2C];
    func_80371DF4_StructVec *pos;
} func_80371DF4_StructSource;

void func_80371DF4(s32 arg0, func_80371DF4_StructSource **arg1) {
    u8 *data;
    func_803709D0_StructObj *obj;
    func_80371DF4_StructVec *pos;

    if (arg0 == D_801BBCCC) {
        data = D_801BC03C;
    } else {
        data = D_801BC3D8;
    }
    pos = (*arg1)->pos;
    obj = func_80005670((void *)arg0, D_80387C00, data);
    if (obj != NULL) {
        obj->unk68 = data;
        obj->unk6C = pos->x;
        obj->unk70 = pos->y;
        obj->unk74 = pos->z;
        obj->unk78 = 0;
        obj->unk79 = 0;
        obj->unk7A = 0;
        obj->unk7B = 0;
    }
}
