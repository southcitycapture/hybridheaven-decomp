#include "context.h"
typedef struct func_80150E60_Struct {
    u8 pad[0x91];
    u8 unk91;
} func_80150E60_Struct;
extern s32 (*D_801832F0[])(void);
void func_80150E60(func_80150E60_Struct *arg0);
void func_800058DC(void *arg0, void *arg1);

typedef struct func_80150DB4_StructData {
    u8 pad[0xC];
    u16 count;
} func_80150DB4_StructData;

typedef struct func_80150DB4_StructState {
    u8 pad0[0x40];
    f32 x, y, z;
    u8 pad1[0x10];
    func_80150DB4_StructData *data;
    u8 pad2[0x30];
    u8 flag0, flag1;
} func_80150DB4_StructState;

typedef struct func_80150DB4_StructValues {
    u8 pad0[4];
    f32 x, y, z;
    u8 pad1[0x14];
    s32 flags;
} func_80150DB4_StructValues;

typedef struct func_80150DB4_StructObject {
    u8 pad[0x2C];
    func_80150DB4_StructValues *values;
} func_80150DB4_StructObject;

void func_80150DB4(func_80150DB4_StructState *arg0, func_80150DB4_StructObject **arg1) {
    s32 i;
    func_80150DB4_StructObject **p;
    func_80150DB4_StructData *data;
    func_80150DB4_StructObject *object;
    func_80150DB4_StructValues *values;

    data = arg0->data;
    i = 0;
    (*arg1)->values->x = 0.0f;
    (*arg1)->values->y = 0.0f;
    (*arg1)->values->z = 0.0f;
    arg0->flag0 = 0;
    arg0->flag1 = 0;
    arg0->x = 0.0f;
    arg0->y = 0.0f;
    arg0->z = 0.0f;
    for (i = 0; i < (s32)data->count; i++) {
        arg1[i]->values->flags |= 0x100;
    }
    func_800058DC(arg0, func_80150E60);
}
