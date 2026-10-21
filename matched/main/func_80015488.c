#include "context.h"

typedef struct func_80015488_Struct {
    u8 pad0[8];
    s32 unk8;
    u8 pad0C[0x18];
    void *unk24;
    void *unk28;
} func_80015488_Struct;

extern void func_800163BC();
extern s32 func_8001559C();
extern void func_80015680(s32, s32, void *);
extern void func_80015798(s32, s32, void *);
extern void func_800158C0(s32, s32, void *);
extern s32 func_800165CC();
extern void func_80016634();
extern void func_80016730();
extern u8 func_800167FC();
extern void func_80016828();
extern s32 func_800168C8();
extern void func_80016950();

func_80015488_Struct *func_80015488(s32 arg0, s32 arg1, func_80015488_Struct *arg2) {
    switch (arg2->unk8) {
    case 15:
        func_800163BC();
        arg2->unk24 = (void *)func_80016634;
        arg2->unk28 = (void *)func_800165CC;
        func_8001559C(arg0, arg1, arg2);
        break;
    case 16:
        func_800163BC();
        arg2->unk24 = (void *)func_80016730;
        arg2->unk28 = (void *)func_800165CC;
        func_80015680(arg0, arg1, arg2);
        break;
    case 4:
        arg2->unk24 = (void *)func_80016950;
        arg2->unk28 = (void *)func_800168C8;
        func_800158C0(arg0, arg1, arg2);
        break;
    case 8:
        arg2->unk24 = (void *)func_80016828;
        arg2->unk28 = (void *)func_800167FC;
        func_80015798(arg0, arg1, arg2);
        break;
    }
    return arg2;
}
