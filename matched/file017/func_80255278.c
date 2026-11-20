#include "common.h"
extern void func_800058DC(void *, void *);
typedef struct func_80254808_StructM { s16 a; s32 b; f32 c; s16 d; s32 e; s32 f; s32 g; s32 h; } func_80254808_StructM;

extern s32 func_801C3044(void);
extern void func_8025799C();
extern void func_801C2F0C(s32, void *);
extern void func_802552E4();

void func_80255278(void *arg0) {
    func_80254808_StructM command;

    func_8025799C();
    if (func_801C3044() == 0) {
        command.a = 0x1100;
        command.b = 0x03480028;
        command.c = 4.0f;
        func_801C2F0C(4, &command);
        ((s16 *)arg0)[0x92 / 2] = 0;
        func_800058DC(arg0, func_802552E4);
    }
}
