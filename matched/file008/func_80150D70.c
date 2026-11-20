#include "common.h"
extern s32 (*D_801832F0[])(void);
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


s32 func_8001F74C(void *arg0);
s32 func_8013B570(void *arg0, u16 arg1, s32 arg2, s32 arg3, void *arg4);
extern void func_80150DB4();

typedef struct func_80150D70_Struct {
    u8 pad[0x92];
    u16 unk92;
} func_80150D70_Struct;

s32 func_80150D70(func_80150D70_Struct *arg0, func_80150DB4_StructObject **arg1)
{
    u16 id;

    func_8001F74C(arg0);
    id = arg0->unk92;
    return func_8013B570(arg0, id, 0, 3, func_80150DB4);
}
