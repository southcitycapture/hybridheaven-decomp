#include "common.h"


typedef struct func_8012A0F0_StructData {
    s32 words[5];
} func_8012A0F0_StructData;
typedef struct func_8012A0F0_StructObj {
    u8 pad[0x24];
    void *obj;
} func_8012A0F0_StructObj;
extern func_8012A0F0_StructData D_80175BA0;
extern func_8012A0F0_StructData D_80175BB4;
extern func_8012A0F0_StructData D_80175BC8;
extern func_8012A0F0_StructData D_80175BDC;
extern func_8012A0F0_StructData D_80175BF0;
extern func_8012A0F0_StructData D_80175C04;
extern func_8012A0F0_StructData D_80175C18;
extern func_8012A0F0_StructData D_80175C2C;
extern func_8012A0F0_StructObj *func_8012C5F0(s32, func_8012A0F0_StructData, s32, f32, f32, f32);
extern void func_800062F8(void *, u32);
extern void func_8012C71C(func_8012A0F0_StructObj *, s32);

#define CREATE(data, count) \
    result = func_8012C5F0(arg0, data, count, arg1, arg2, arg3); \
    if (result != NULL) { \
        func_800062F8(result->obj, 0x80000300); \
        func_8012C71C(result, arg4); \
        return result; \
    } \
    break;

func_8012A0F0_StructObj *func_8012A0F0(s32 arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4, u32 arg5)
{
    func_8012A0F0_StructObj *result;
    switch (arg5) {
    case 0: CREATE(D_80175BA0, 4)
    case 1: CREATE(D_80175BB4, 4)
    case 2: CREATE(D_80175BC8, 4)
    case 3: CREATE(D_80175BDC, 6)
    case 4: CREATE(D_80175BF0, 4)
    case 5: CREATE(D_80175C04, 4)
    case 6: CREATE(D_80175C18, 4)
    case 7: CREATE(D_80175C2C, 6)
    }
    return NULL;
}
