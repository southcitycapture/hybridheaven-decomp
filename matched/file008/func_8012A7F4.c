#include "common.h"
extern s32 B_8001EF38(f32, f32);


typedef struct func_8012A7F4_StructVec {
    u8 pad0[4];
    f32 x;
    u8 pad1[4];
    f32 y;
    u8 pad2[2];
    s16 angle;
} func_8012A7F4_StructVec;

typedef struct func_8012A7F4_StructObj {
    u8 pad0[0x2C];
    func_8012A7F4_StructVec *unk2C;
    func_8012A7F4_StructVec *unk30;
} func_8012A7F4_StructObj;

typedef struct func_8012A7F4_StructArg {
    u8 pad0[0x24];
    func_8012A7F4_StructObj *unk24;
} func_8012A7F4_StructArg;

void func_8012A7F4(s32 arg0, s32 arg1, s32 arg2, s16 arg3) {
    f32 *x;
    f32 *y;
    s16 diff;
    func_8012A7F4_StructVec *vec;
    s16 *angle;
    s16 target;
    s16 current;
    s32 mag;
    s32 ret;
    f64 step;

#define O ((func_8012A7F4_StructArg *)arg0)->unk24
    if (O->unk2C != NULL) {
        x = &O->unk2C->x;
        y = &O->unk2C->y;
        arg0 = (s32)O->unk2C + 0x12;
    } else {
        x = &O->unk30->x;
        y = &O->unk30->y;
        arg0 = (s32)O->unk30 + 0x12;
    }
    angle = (s16 *)arg0;
    arg0 = B_8001EF38(*(f32 *)&arg1 - *x, *(f32 *)&arg2 - *y);
    step = arg3;
    goto after_call;
after_call:
    target = arg0;
    current = *angle;
    diff = (u16)(target - current);
    arg0 = (s32)angle;
    ++angle;
#define angle ((s16 *)arg0)
    if ((u16)((((((u16)diff & 0x7FFF) & 0x7FFF) & 0x7FFF) & 0x7FFF) & 0x3FFF & 0x1FFF) & 0x1000) {
        diff = (diff & 0x1FFF) - 0x2000;
    } else {
        diff = diff & 0x1FFF;
    }
    mag = (diff < 0) ? -diff : diff;
    if (mag < step) {
        ret = 0;
        *angle = target;
    } else if (diff >= 0) {
        ret = 1;
        *angle = current + step;
        *angle = *angle & 0x1FFF;
    } else {
        ret = 2;
        *angle = current - step;
        *angle = *angle & 0x1FFF;
    }
    if (ret++) { }
    return;
}
