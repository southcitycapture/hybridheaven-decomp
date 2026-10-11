#include "context.h"

typedef struct func_8013ECE0_Struct190 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_8013ECE0_Struct190;

typedef struct func_8013ECE0_Struct30 {
    u8 unk0[0x15C];
    s32 unk15C;
} func_8013ECE0_Struct30;

extern void func_8001B204();
extern func_8013ECE0_Struct190 D_801812F0;
extern func_8013ECE0_Struct30 D_80181308;
extern u8 D_8018ED1C[];
extern u8 D_8018ED24[];
extern u8 D_8018ED2C[];
extern u8 D_8018ED34[];

void func_8013ECE0(u8 arg0, u8 arg1) {
    func_8013ECE0_Struct190 sp190;
    func_8013ECE0_Struct30 sp30;

    sp190 = D_801812F0;
    sp30 = D_80181308;
    func_8001B204(((u8 *) &sp190)[arg0 * 12], ((u8 *) &sp190)[arg0 * 12 + 1], ((u8 *) &sp190)[arg0 * 12 + 2], D_8018ED1C, 4, ((s32 *) ((u8 *) &sp30 + arg1 * 16))[0]);
    func_8001B204(((u8 *) &sp190)[arg0 * 12 + 3], ((u8 *) &sp190)[arg0 * 12 + 4], ((u8 *) &sp190)[arg0 * 12 + 5], D_8018ED24, 4, ((s32 *) ((u8 *) &sp30 + arg1 * 16))[1]);
    func_8001B204(((u8 *) &sp190)[arg0 * 12 + 6], ((u8 *) &sp190)[arg0 * 12 + 7], ((u8 *) &sp190)[arg0 * 12 + 8], D_8018ED2C, 4, ((s32 *) ((u8 *) &sp30 + arg1 * 16))[2]);
    func_8001B204(((u8 *) &sp190)[arg0 * 12 + 9], ((u8 *) &sp190)[arg0 * 12 + 10], ((u8 *) &sp190)[arg0 * 12 + 11], D_8018ED34, 4, ((s32 *) ((u8 *) &sp30 + arg1 * 16))[3]);
}
