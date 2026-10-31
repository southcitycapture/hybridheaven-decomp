#include "common.h"
extern void func_800058DC(void *arg0, s32 arg1);
extern s32 func_8012C6B4(s32);
s32 func_801CE0E8(void *arg0, s8 *a1);
typedef struct func_801D1080_StructD {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801D1080_StructD;
typedef struct func_801D1080_Struct {
    u8 pad0[0xC];
    func_801D1080_StructD *unkC;
    u8 pad10[0x5C];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 pad78[0x18];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D1080_Struct;
typedef struct func_801D1080_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[4];
    s16 unk14;
} func_801D1080_StructB;
typedef struct func_801D1080_StructC {
    u8 pad0[0x30];
    func_801D1080_StructB *unk30;
} func_801D1080_StructC;
void func_801D1080(func_801D1080_Struct *arg0, func_801D1080_StructC **arg1);


extern const f64 D_801E35F0;

typedef struct func_801D0F54_Struct {
    u8 pad[0x94];
    u8 unk94;
} func_801D0F54_Struct;

typedef struct func_801D0F54_StructData {
    u8 pad[4];
    f32 unk4, unk8, unkC;
} func_801D0F54_StructData;

typedef struct func_801D0F54_StructEntry {
    u8 pad[0x30];
    func_801D0F54_StructData *unk30;
} func_801D0F54_StructEntry;

void func_801D0F54(func_801D0F54_Struct *arg0, func_801D0F54_StructEntry **arg1) {
    func_801D0F54_StructData *data;
    s8 sp3B;
    u8 i;

    sp3B = 0;
    if (func_801CE0E8(arg0, &sp3B) == 0) {
        i = 0;
        if ((s32)arg0->unk94 > 0) {
            do {
            data = arg1[i]->unk30;
            data->unk4 += (f64)(func_8012C6B4(200) - 100) / 500.0;
            data->unk8 += (f64)(func_8012C6B4(200) - 100) / 500.0;
            data->unkC += (f64)(func_8012C6B4(200) - 100) / 500.0;
            i++;
            } while (i < (s32)arg0->unk94);
        }
        func_800058DC(arg0, (s32)func_801D1080);
    }
}
