#include "context.h"
extern void func_8001F75C(s32);
extern void func_8001F6E4();
extern void func_800113D0(s32, s32);
extern void func_80011198(s32, s32);
extern void func_80011140();
extern s32 func_80126A0C(s32, s32, s32);
extern void func_80116E80(s32);
extern s32 func_8014C068(u16);
extern s32 func_8014C1F0(u16);
extern s32 func_8014B3F0(s32);
extern s32 func_80005670(s32, void *);
extern void func_80376B80();
extern void func_803787F0();
extern u8 D_80388954[];
extern struct func_80379190_Globals D_801BBBF0;
extern struct func_803790F0_Struct2 D_80216B90;
extern struct func_803790F0_Struct2 D_8038897C;
extern struct func_803790F0_Struct2 D_80388994;
extern struct func_803790F0_Struct2 *D_8038A904;
extern s16 D_803889AC;
extern s32 D_8038A900;
extern s16 D_8038A908;
extern u8 D_8038A90A;

typedef struct func_803784CC_Struct {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad30[0x10];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x10];
    s32 unk5C;
} func_803784CC_Struct;

typedef struct func_803784CC_Vec {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_803784CC_Vec;

#define G ((u8 *)&D_801BBBF0)
extern void D_80011140(s32, s32, func_803784CC_Vec, s32);
#define CALL_80011140 D_80011140
#define VEC(p) (*(func_803784CC_Vec *)(p))

void func_803784CC(func_803784CC_Struct *arg0, s32 arg1) {
    s32 sp;
    u8 v;

    sp = arg0->unk5C;
    if (G[0x182] == 0 && G[0x187] == 0) {
        func_8001F75C(*(s32 *)(G + 0xDC));
        func_8001F6E4();
        arg0->unk48 = 0.0f;
        arg0->unk2C |= 0xE0;
        arg0->unk44 = 0.0f;
        arg0->unk40 = 0.0f;
        *(u16 *)(G + 0xEF0) |= 0xC0;
        D_803889AC = 0;
        D_8038A900 = 0;
        D_8038A908 = 0;
        D_8038A90A = 0;
        if (func_80126A0C((s32)arg0, 0xC1, 0) != 0) {
            func_800113D0(arg1, sp + 0x22);
            func_80116E80(0x10);
            func_80011198(arg1, sp);
            if (func_8014C068(*(u16 *)(G + 0x244)) != 0) {
                v = func_8014C1F0(*(u16 *)(G + 0x244));
                if (v != 0) {
                    if (v != 1) {
                        if (v == 2) {
                            *(u16 *)(G + 8) = *(u16 *)(G + 0x244);
                            CALL_80011140(arg1, sp, VEC(&D_80216B90), 0xA);
                            func_800058DC((s32)arg0, func_80376B80);
                            return;
                        }
                        goto def;
                    }
                    CALL_80011140(arg1, sp, VEC(D_8038A904 = &D_80388994), 5);
                    D_8038A90A = func_8014B3F0(*(u16 *)(G + 0x244)) & 0xFF;
                    func_80005670((s32)arg0, D_80388954);
                    arg0->unk2C &= ~0x80;
                    func_800058DC((s32)arg0, func_803787F0);
                    return;
                }
def:
                CALL_80011140(arg1, sp, VEC(D_8038A904 = &D_8038897C), 5);
                D_8038A90A = func_8014B3F0(*(u16 *)(G + 0x244)) & 0xFF;
                func_80005670((s32)arg0, D_80388954);
                arg0->unk2C &= ~0x80;
                func_800058DC((s32)arg0, func_803787F0);
                return;
            }
            CALL_80011140(arg1, sp, VEC(D_8038A904 = &D_8038897C), 5);
            arg0->unk2C &= ~0x80;
            func_800058DC((s32)arg0, func_803787F0);
        }
    }
}
