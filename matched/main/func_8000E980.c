#include "common.h"
typedef struct func_8000E980_Struct6 {
    s16 v[3];
} func_8000E980_Struct6;
typedef struct func_8000E980_StructC {
    func_8000E980_Struct6 *unk0;
    u8 pad4[8];
    u8 unkC;
} func_8000E980_StructC;
extern struct func_8000E980_StructC D_800631E0;
void func_8000DDB0(u32 a0, void *a1, s32 a2);
s64 func_8000E58C(s32 arg0);
void func_8000E5D4(s32 arg0);
typedef struct func_8000E748_Struct {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    f32 unk8;
} func_8000E748_Struct;
f32 func_8000E748(func_8000E748_Struct *arg0, f32 *arg1, f32 *arg2, s16 *arg3, u16 *arg4);


extern u8 D_800631ED;
extern func_8000E980_Struct6 D_80062D30[];

typedef struct func_8000E980_StructB {
    func_8000E980_Struct6 unk0;
    u8 pad[2];
    f32 f8;
    f32 fC;
    f32 f10;
} func_8000E980_StructB;

typedef struct func_8000E980_StructFrames {
    f32 next;
    f32 current;
} func_8000E980_StructFrames;

void func_8000E980(func_8000E748_Struct arg0, u16 arg3, func_8000E980_StructB *arg4) {
    s32 byte_count;
    s64 base;
    u8 sp37;
    s16 sp34;
    u16 sp32;
    func_8000E980_StructFrames frames;
    u32 frame;

    base = func_8000E58C(arg0.unk0);
    func_8000E5D4(arg0.unk0);
    sp37 = D_800631ED;
    byte_count = 6 * sp37;
    func_8000E748(&arg0, &frames.current, &frames.next, &sp34, &sp32);
    frame = (u32) frames.current;
    func_8000DDB0(((u64)(u32) &D_800631E0.unk0[(((frame & 0xFFFF) * D_800631E0.unkC) + arg3) * sp37] & 0xFFFFFF) + base, D_80062D30, byte_count);
    arg4->unk0 = D_80062D30[0];
    if (sp37 == 2) {
        arg4->f8 = D_80062D30[1].v[0] * 0.00390625;
        arg4->fC = D_80062D30[1].v[1] * 0.00390625;
        arg4->f10 = D_80062D30[1].v[2] * 0.00390625;
    } else {
        arg4->f10 = 1.0f;
        arg4->fC = 1.0f;
        arg4->f8 = 1.0f;
    }
}
