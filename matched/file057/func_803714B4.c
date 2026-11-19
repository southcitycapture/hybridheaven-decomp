#include "common.h"
extern s32 D_801CE330(void *a0, s32 a1, f32 a2, f32 a3, f32 a4, s32 a5, s32 a6, s32 a7, s32 a8, s32 a9, s32 a10, s32 a11, s32 a12, s32 a13, s32 a14, f32 a15, s32 a16);
extern void func_800058DC(void *a0, void *a1);
struct func_8037118C_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
};
void func_8037118C(struct func_8037118C_Struct *arg0, s32 arg1);


typedef struct func_803714B4_Struct {
    u8 pad[0x4C];
    u16 flags;
    u8 pad4E[0x6C - 0x4E];
    f32 x, y, z;
    u8 type;
    u8 pad79[3];
    f32 x2, y2, z2;
} func_803714B4_Struct;
typedef s32 (*func_803714B4_Emitter)(void *, s32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32);
extern f32 D_8038B3F0;
extern f32 D_8038B3F4;
extern f32 D_8038B3F8;
extern f32 D_8038B3FC;
extern f32 D_8038B400;
extern f32 D_8038B404;
extern f32 D_8038B408;
extern f32 D_8038B40C;
#define EMIT D_801CE330

void func_803714B4(func_803714B4_Struct *arg0, s32 arg1) {
    f32 x = arg0->x;
    f32 y = arg0->y;
    f32 z = arg0->z;
    u8 type = arg0->type;
    f32 x2 = arg0->x2;
    f32 y2 = arg0->y2;
    f32 z2 = arg0->z2;
    void *cb = func_8037118C;

    switch (type) {
    case 0:
        EMIT(arg0, 0, x, y, z, 255, 160, 0, 255, 255, 64, 0, 0, 10, 10, D_8038B3F0, 0);
        break;
    case 1:
        EMIT(arg0, 25, x, y, z, 0, 224, 64, 64, 0, 0, 0, 64, 3, 10, D_8038B3F4, 1);
        EMIT(arg0, 25, x2, y2, z2, 0, 224, 64, 64, 0, 0, 0, 64, 3, 10, D_8038B3F8, 1);
        break;
    case 2:
        EMIT(arg0, 17, x, y, z, 0, 160, 128, 255, 0, 0, 0, 0, 10, 10, D_8038B3FC, 1);
        EMIT(arg0, 17, x2, y2, z2, 0, 160, 128, 255, 0, 0, 0, 0, 10, 10, D_8038B400, 1);
        break;
    case 3:
        break;
    case 4:
        EMIT(arg0, 0, x, y, z, 255, 255, 255, 255, 255, 160, 0, 0, 5, 20, D_8038B404, 0);
        EMIT(arg0, 0, x, y, z, 255, 255, 255, 255, 255, 80, 0, 0, 6, 20, D_8038B408, 0);
        EMIT(arg0, 0, x, y, z, 255, 255, 255, 255, 255, 0, 0, 0, 7, 20, D_8038B40C, 0);
        break;
    default:
        arg0->flags = 0x8000;
        func_800058DC(arg0, cb);
    }
    func_800058DC(arg0, cb);
}
