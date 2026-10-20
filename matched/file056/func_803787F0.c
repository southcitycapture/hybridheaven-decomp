#include "context.h"
void func_803787B0(s32 arg0, s32 arg1);
typedef struct func_803790F0_Struct2 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_803790F0_Struct2;
extern s32 func_80010550(s32, s32);
extern void func_80011140(s32, s32, func_803790F0_Struct2, s32);
typedef struct func_80379190_Globals {
    u8 pad0[0xEF0];
    u16 unkEF0;
} func_80379190_Globals;
extern func_80379190_Globals D_801BBBF0;

typedef struct func_803787F0_S1 {
    u8 pad0[0x1C];
    s32 unk1C;
} func_803787F0_S1;
typedef struct func_803787F0_S0 {
    u8 pad0[0x5C];
    func_803787F0_S1 *unk5C;
} func_803787F0_S0;

extern s32 func_8014C068(u16);
extern void func_8014C138(u16);
extern struct func_803790F0_Struct2 *D_8038A904;

void func_803787F0(func_803787F0_S0 *arg0, s32 arg1) {
    func_803787F0_S1 *s = arg0->unk5C;
    s32 *p = &s->unk1C;
    u32 a;

    if (s->unk1C == 0x0168003C || *p == 0x0168002D) {
        a = func_80010550(arg1, (s32)s) & 0xFFFF;
    } else {
        func_80011140(arg1, (s32)s, *D_8038A904, 5);
        a = 0;
    }
    if (*p == 0x0168003C || *p == 0x0168002D) {
        if (a != 0) {
            if (func_8014C068(*(u16 *)((u8 *)&D_801BBBF0 + 0x244)) != 0) {
                func_8014C138(*(u16 *)((u8 *)&D_801BBBF0 + 0x244));
                func_800058DC((s32)arg0, func_803787B0);
            } else {
                func_800058DC((s32)arg0, func_8037890C);
            }
        }
    }
}
