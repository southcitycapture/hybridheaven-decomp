#include "common.h"
extern void func_800058DC(s32, void *);
void func_801DAE70(s32 a0, s32 a1);


typedef struct func_801DAC84_StructC {
    u8 pad[0x6C];
    u16 flags;
    u8 pad6E[2];
    f32 value;
} func_801DAC84_StructC;
typedef struct func_801DAC84_StructB {
    u8 pad[0x2C];
    func_801DAC84_StructC *data;
} func_801DAC84_StructB;
typedef struct func_801DAC84_StructD {
    u8 pad[0xC];
    u16 count;
} func_801DAC84_StructD;
typedef struct func_801DAC84_StructA {
    u8 pad[0x5C];
    func_801DAC84_StructD *data;
} func_801DAC84_StructA;
extern f32 D_801E3B24;
extern f32 D_801E3B28;
extern f32 D_801E3B2C;
extern f32 D_801E3B30;
extern f32 D_801E3B34;
extern f32 D_801E3B7C;
extern f32 D_801E3B80;
extern f32 D_801E3B84;
extern f32 D_801E3B88;

void func_801DAC84(func_801DAC84_StructA *arg0, func_801DAC84_StructB **arg1)
{
    func_801DAC84_StructD *data;
    s32 i;
    func_801DAC84_StructB **p;
    f32 v24, v28, v2C, v30, v34;
    data = arg0->data;
    p = arg1;
    for (i = 0; i < data->count; i++, p++) {
        switch (i) {
        case 0: (*p)->data->value = 50.0f; break;
        case 1: (*p)->data->value = 12.9f; break;
        case 2: (*p)->data->value = 11.3f; break;
        case 3: (*p)->data->value = 17.2f; break;
        case 4: (*p)->data->value = 9.5f; break;
        case 5: case 8: (*p)->data->value = 9.2f; break;
        case 6: case 9: (*p)->data->value = 6.4f; break;
        case 7: case 10: (*p)->data->value = 6.7f; break;
        case 11: case 14: (*p)->data->value = 9.1f; break;
        case 12: case 15: (*p)->data->value = 8.3f; break;
        case 13: case 16: (*p)->data->value = 7.2f; break;
        }
        switch (i) {
        case 0: (*p)->data->flags = 0x10; break;
        case 1: case 2: case 3: case 4: case 7: case 10: case 13: case 16:
            (*p)->data->flags = 0x330; break;
        case 5: case 6: case 8: case 9: case 11: case 12: case 14: case 15:
            (*p)->data->flags = 0x320; break;
        }
        (*p)->data->flags |= 2;
    }
    func_800058DC((s32)arg0, func_801DAE70);
}
