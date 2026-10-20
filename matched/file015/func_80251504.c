#include "context.h"

typedef struct func_80251504_StructObj {
    u8 pad[0x90];
    u16 unk90;
} func_80251504_StructObj;
typedef struct func_80251504_StructGlobal {
    u8 pad[4];
    s16 unk4;
} func_80251504_StructGlobal;

extern void func_80005700(void *);
extern void func_80020744(s32);
extern void func_801268CC(s32);
extern s32 func_801270C0(s32);
extern void func_8015115C(s32, void *);
extern void func_801FA2E0(void);
extern func_80251504_StructGlobal D_801BBF90;
extern u8 D_80254B54[];
extern s32 D_8025A2FC;

void func_80251504(func_80251504_StructObj *arg0, s32 arg1) {
    s32 timer;

    timer = arg0->unk90++;
    if (timer == 0x23) {
        func_8015115C(D_8025A2FC, D_80254B54);
    }
    if (timer == 0x78) {
        func_801FA2E0();
    }
    if ((timer >= 0x96) && (func_801270C0(D_8025A2FC) != 0)) {
        D_801BBF90.unk4 = 0x7F;
        func_801268CC(0);
        func_80020744(7);
        func_80005700(arg0);
    }
}
