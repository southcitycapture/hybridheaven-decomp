#include "common.h"
extern s32 D_8038CFB0;
extern s32 func_800058DC();
extern void (*D_803897C0)(void *);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_8012C6B4();
extern void func_80148DDC(f32 *, s32, u16);
typedef struct func_8038005C_Struct {
    u8 pad[0x94];
    u8 unk94;
} func_8038005C_Struct;
typedef struct func_8038092C_Struct0 { u8 pad[0x90]; s16 unk90; } func_8038092C_Struct0;
void func_8038092C(func_8038092C_Struct0 *arg0, s32 arg1);


void func_803807D8(func_8038005C_Struct *arg0, s32 arg1) {
    u8 i;
    u8 v;
    u8 c;
    f32 sp[3];
    for (i = 0; i < 5; i++) {
        c = func_8012C6B4(arg0->unk94);
        func_80148DDC(sp, D_8038CFB0, c);
        v = func_8012C6B4(10);
        func_80129FB8(sp[0], sp[1], sp[2], 0.0f, 0.10000000149011612f, 0.0f, 0.0f, 255, 255, 0, 255, 0, 0, v * 4 + 0x80, -v, (f32)((u32)v * 0.03), 1, 0);
    }
    func_800058DC(arg0, func_8038092C);
}
