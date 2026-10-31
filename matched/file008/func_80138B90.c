#include "common.h"
extern s32 func_800058DC(void *, void *);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_8012C6B4(s32);
extern s32 func_80133A24(u32);
void func_80138F48(s32 arg0, s32 arg1);


typedef struct func_80138B90_StructInner {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
    u8 padC[4];
    u32 unk10;
} func_80138B90_StructInner;

typedef struct func_80138B90_Struct {
    u8 pad0[0x38];
    func_80138B90_StructInner *unk38;
    u8 pad3C[0x60];
    u16 unk9C;
    u16 unk9E;
} func_80138B90_Struct;

void func_80138B90(func_80138B90_Struct *arg0, s32 arg1) {
    s32 sp7C;
    s32 sp78;
    s32 sp74;
    s32 sp70;
    s32 sp6C;
    s32 sp68;
    s32 sp64;
    s32 sp60;
    s32 sp5C;
    s32 temp_v1;
    u16 temp_t7;
    func_80138B90_StructInner *temp_v1_2;
    func_80138B90_StructInner *temp_v1_3;

    arg0->unk9E++;
    if ((s32)arg0->unk9E % 3 == 0) {
        arg0->unk9C--;
        temp_v1 = func_8012C6B4(0x7B) & 3;
        switch (temp_v1) {
        case 0:
        sp6C = func_8012C6B4(0xA);
        sp70 = func_8012C6B4(0xA);
        sp74 = func_8012C6B4(0xA);
        sp78 = func_8012C6B4(15);
        temp_v1_2 = arg0->unk38;
        func_80129FB8((f32)(((f64)sp6C + (f64)(f32)temp_v1_2->unk6 / 10.0) - 5.0),
                     (f32)(((f64)sp70 + (f64)(f32)temp_v1_2->unk8 / 10.0) - 5.0),
                     (f32)(((f64)sp74 + (f64)(f32)temp_v1_2->unkA / 10.0) - 5.0),
                     0.0f, 0.0f, 0.0f, 0.0f, 75, 75, 75, 50, 50, 50, 128, 8,
                     (f32)((f64)(f32)sp78 / 20.0), 2, 0);
        return;
        case 1:
            sp7C = 1;
            break;
        case 2:
            sp7C = 4;
            break;
        case 3:
            sp7C = 5;
            break;
        }
        sp5C = func_8012C6B4(10);
        sp60 = func_8012C6B4(10);
        sp64 = func_8012C6B4(10);
        sp68 = func_8012C6B4(128);
        sp6C = func_8012C6B4(31);
        sp70 = func_8012C6B4(31);
        sp74 = func_8012C6B4(31);
        sp78 = func_8012C6B4(15);
        temp_v1_3 = arg0->unk38;
        func_80129FB8((f32)(((f64)sp5C + (f64)(f32)temp_v1_3->unk6 / 10.0) - 5.0),
                     (f32)(((f64)sp60 + (f64)(f32)temp_v1_3->unk8 / 10.0) - 5.0),
                     (f32)(((f64)sp64 + (f64)(f32)temp_v1_3->unkA / 10.0) - 5.0),
                     0.0f, 0.0f, 0.0f, 0.0f, 255, 255, sp68, sp6C + 224, sp70, sp74, 255, 8,
                     (f32)((f64)(f32)sp78 / 30.0), sp7C, 0);
    }
    if (func_80133A24(arg0->unk38->unk10 >> 16) == 0) {
        func_800058DC(arg0, func_80138F48);
    }
}
