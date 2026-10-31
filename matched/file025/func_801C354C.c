#include "common.h"
extern f64 func_80034C24();
extern void func_801C0EB0(s32, s32);
u64 func_801C0F18(s32, s32);


typedef struct func_801C354C_StructData {
    u8 pad0[4];
    s32 *unk4;
    u8 pad8[4];
    u16 unkC;
} func_801C354C_StructData;

typedef struct func_801C354C_StructArg {
    u8 pad0[0x5C];
    func_801C354C_StructData *unk5C;
    u8 pad60[0x30];
    s32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    s32 unkA0;
} func_801C354C_StructArg;

typedef struct func_801C354C_StructObject {
    u8 pad0[0x2C];
    u8 *unk2C;
} func_801C354C_StructObject;
extern s32 func_801C0DE4(s32, s32, f32);
extern func_801C354C_StructObject *D_8008DA88[];
extern func_801C354C_StructObject *D_8008DA90;

s32 func_801C354C(func_801C354C_StructArg *arg0) {
    s32 value;
    f32 duration;
    f32 start;
    f32 end;
    s32 flag;
    f64 time;
    s32 *ptr;
    s32 i;
    s32 off;
    func_801C354C_StructData *data;

    duration = arg0->unk94;
    value = arg0->unk90;
    start = arg0->unk98;
    end = arg0->unk9C;
    flag = arg0->unkA0;
    if (func_801C0DE4(4, value, duration) != 0) {
        func_801C0EB0(4, value);
        return 1;
    }
    time = func_80034C24(func_801C0F18(4, value));
    data = arg0->unk5C;
    i = 1;
    off = 4;
    ptr = data->unk4;
    for (; i < data->unkC; i++, off += 4) {
        if (ptr[i] >= 0) {
            (*(func_801C354C_StructObject **)((u8 *)D_8008DA88 + off))->unk2C[0x4B] = (u32)((end - start) * ((f32)(time / 1000000.0) / duration) + start);
        }
    }
    if (flag != 0) {
        D_8008DA90->unk2C[0x4B] = 0;
    }
    return 0;
}
