#include "common.h"
extern void (*D_80216D10[])(void *, s32);
extern s32 D_8013A334(f32 *, s32, void *, s32);
struct func_801F5230_StructD {
    u8 pad0[0x18E];
    s16 unk18E;
    s16 unk190;
    s16 unk192;
};
extern struct func_801F5230_StructD D_801BBBF0;
extern f32 D_8021B028;
extern f32 D_8021B02C;
extern f32 D_8021B030;
void func_800058DC(void *, s32);                    /* extern */
extern s32 func_80010550();
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_8012C6B4(s32);
struct func_801F5230_StructB {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_801F5230_StructArg {
    u8 pad0[0x5C];
    struct func_801F5230_StructB *unk5C;
    u8 pad1[0xAF - 0x60];
    u8 unkAF;
};


struct func_801F9D68_StructPos {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2C];
    f32 unk3C;
    f32 unk40;
    f32 unk44;
};
struct func_801F9D68_StructNode {
    u8 pad0[0x2C];
    struct func_801F9D68_StructPos *unk2C;
};
struct func_801F9D68_StructGlobal {
    u8 pad0[0xE0];
    struct func_801F9D68_StructNode *unkE0;
    u8 padE4[4];
    struct func_801F9D68_StructNode *unkE8;
};
extern u8 D_80218BEC[];
extern void func_801F9EC4(void);
struct func_801F9D68_StructVec { f32 x, y, z; };

void func_801F9D68(struct func_801F5230_StructArg *arg0, s32 arg1) {
    struct func_801F5230_StructB *sp5C;
    struct func_801F9D68_StructVec sp50;

    sp5C = arg0->unk5C;
    D_8013A334((f32 *)&sp50, arg1, sp5C, 1);
    func_8011AAF4(D_80218BEC, 0x986, arg0, 0, 1, 3.0f,
        ((struct func_801F9D68_StructGlobal *)&D_801BBBF0)->unkE0->unk2C->unk4,
        ((struct func_801F9D68_StructGlobal *)&D_801BBBF0)->unkE0->unk2C->unk8 + 20.0f,
        ((struct func_801F9D68_StructGlobal *)&D_801BBBF0)->unkE0->unk2C->unkC, 3.0f,
        ((struct func_801F9D68_StructGlobal *)&D_801BBBF0)->unkE8->unk2C->unk3C,
        ((struct func_801F9D68_StructGlobal *)&D_801BBBF0)->unkE8->unk2C->unk40,
        ((struct func_801F9D68_StructGlobal *)&D_801BBBF0)->unkE8->unk2C->unk44,
        0.0f, 35.0f, -1, -1);
    if (func_80010550(arg1, sp5C) != 0) {
        D_8021B028 = (f32)(func_8012C6B4(10) - 5);
        D_8021B02C = (f32)func_8012C6B4(20);
        D_8021B030 = (f32)(func_8012C6B4(10) - 5);
        sp5C->unk78 = 1;
        func_800058DC(arg0, (s32)func_801F9EC4);
    }
}
