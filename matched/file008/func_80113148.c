#include "context.h"

typedef struct func_80113148_StructO { u8 pad0[0x24]; struct func_80113148_StructO *unk24; u8 pad28[4]; f32 *unk2C; } func_80113148_StructO;
typedef struct func_80113148_Struct {
    u8 pad0[0x54]; func_80113148_StructO *unk54;
    u8 pad58[0xE0-0x58]; func_80113148_StructO *unkE0; func_80113148_StructO *unkE4; func_80113148_StructO *unkE8;
    u8 padEC[4]; s32 unkF0; u8 padF4; u8 unkF5;
    u8 padF6[0x299-0xF6]; u8 unk299; u8 pad29A[2]; f32 unk29C; f32 unk2A0;
    u8 pad2A4[0x448-0x2A4]; func_80113148_StructO **unk448;
    u8 pad44C[0x1031-0x44C]; u8 unk1031;
} func_80113148_Struct;

extern void func_800058DC(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80114728();
extern void func_80114758();
extern void func_8011A1B8(s32);
extern void func_8011A7FC();
extern void func_80123270(f32 *, f32 *, f32 *, void *);
extern void func_8012329C(f32 *, f32 *, f32 *, void *);
extern void func_80123360(f32, f32, s32, s32, f32, f32, f32 *, f32 *, f32 *, f32 *, f32 *, f32 *, void *);
extern s32 D_801636F4;
extern f32 D_80163980;
extern f32 D_80163984;
extern f32 D_80163988;
extern u8 D_801639DC[];
extern u8 D_801BBAF0[];
extern f32 D_801BBB0C;
extern f32 D_801BBB10;
extern f32 D_801BBB14;
extern f32 D_801BBB18;
extern f32 D_801BBB1C;
extern f32 D_801BBB20;
extern func_80113148_Struct D_801BBBF0;
extern u8 func_801133D0[];
extern u8 func_80113AB4[];

void func_80113148(func_80113148_StructO *arg0, s32 arg1) {
    s16 sp56;

    func_80005E44(arg0, D_801639DC);
    D_801BBBF0.unkE8 = (D_801BBBF0.unkE4 = D_801BBBF0.unk54 = arg0)->unk24;
    if (D_801BBBF0.unkE0 != NULL && D_801BBBF0.unkF0 != 0 && D_801BBBF0.unkF5 != 0) {
        D_801BBB0C = D_801BBBF0.unkE0->unk2C[1];
        D_801BBB10 = D_801BBBF0.unkE0->unk2C[2];
        D_801BBB14 = D_801BBBF0.unkE0->unk2C[3];
        D_801BBB18 = (*D_801BBBF0.unk448)->unk24->unk2C[1];
        D_801BBB1C = (*D_801BBBF0.unk448)->unk24->unk2C[2];
        D_801BBB20 = (*D_801BBBF0.unk448)->unk24->unk2C[3];
    } else {
        func_80123270(&D_801BBB0C, &D_801BBB10, &D_801BBB14, &sp56);
        func_8012329C(&D_801BBB18, &D_801BBB1C, &D_801BBB20, &sp56);
    }
    if (D_801636F4 != 0) {
        func_80114728();
    }
    if (D_801636F4 != 0) {
        func_80114758();
    }
    if (D_801BBBF0.unk1031 == 0) {
        func_80123360(D_801BBB0C, D_801BBB10, *(s32 *)&D_801BBB14, *(s32 *)&D_801BBB18, D_801BBB1C, D_801BBB20, D_801BBBF0.unkE8->unk2C + 12, D_801BBBF0.unkE8->unk2C + 13, D_801BBBF0.unkE8->unk2C + 14, D_801BBBF0.unkE8->unk2C + 15, D_801BBBF0.unkE8->unk2C + 16, D_801BBBF0.unkE8->unk2C + 17, D_801BBAF0);
    } else {
        func_8011A1B8(0);
    }
    D_80163980 = D_801BBBF0.unkE8->unk2C[15];
    D_80163984 = D_801BBBF0.unkE8->unk2C[16];
    D_80163988 = D_801BBBF0.unkE8->unk2C[17];
    func_8011A7FC();
    D_801BBBF0.unk299 = 0;
    D_801BBBF0.unkE8->unk2C[9] = D_801BBBF0.unk29C;
    D_801BBBF0.unkE8->unk2C[10] = D_801BBBF0.unk2A0;
    if (D_801BBBF0.unk1031 == 0) {
        func_800058DC(arg0, func_801133D0);
        return;
    }
    func_800058DC(arg0, func_80113AB4);
}
