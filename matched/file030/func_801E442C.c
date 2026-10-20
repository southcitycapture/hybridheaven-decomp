#include "context.h"

extern f64 func_80034C24();
extern s32 func_801C0EB0(s32, s32);
extern u64 func_801C0F18(s32, s32);
extern f64 D_801EC6D8;

typedef struct func_801E442C_Struct3 {
    u8 pad[0x12];
    s16 unk12;
} func_801E442C_Struct3;
typedef struct func_801E442C_Struct2 {
    u8 pad[0x30];
    func_801E442C_Struct3 *unk30;
} func_801E442C_Struct2;
typedef struct func_801E442C_Struct1 {
    func_801E442C_Struct2 *unk0;
} func_801E442C_Struct1;

s32 func_801E442C(s32 arg0, s32 arg1) {
    u64 temp_ret;
    f64 temp;
    func_801E442C_Struct3 *obj;

    if (func_801C0B8C(0x0138CE20) != 0) {
        func_801C0EB0(3, 0);
        return 0xE;
    }
    temp_ret = func_801C0F18(3, 0);
    temp = func_80034C24(temp_ret);
    obj = ((func_801E442C_Struct1 *)D_8038D8D0)->unk0->unk30;
    obj->unk12 = (s16)(obj->unk12 - (s16)((2048.0f * (f32)(((temp / D_801EC6D8) / 4) * 24.0)) / 90.0f));
    return 0xD;
}
