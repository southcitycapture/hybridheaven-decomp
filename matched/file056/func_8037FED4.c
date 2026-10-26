#include "common.h"
extern s32 D_8038A99C;
extern s32 D_8038A9B0;
extern s32 D_8038A9B4;
typedef struct func_8037DD6C_StructSub {
    s16 unk0;
    s16 unk2;
} func_8037DD6C_StructSub;
typedef struct func_8037DD6C_Struct {
    u8 pad0[0x10];
    s32 unk10;
    u8 pad1[0x1C];
    func_8037DD6C_StructSub *unk30;
} func_8037DD6C_Struct;
extern func_8037DD6C_Struct *D_8038A9C4;
extern void func_800058DC(void *a0, void (*a1)());
extern s32 func_80006088();
extern void func_80020744(s32);
extern s32 func_80148FC4();
extern void func_801498CC();
extern void func_8014AB48();
typedef struct func_8037DF24_Struct {
    u8 pad0[0x10];
    struct func_8037DF24_Struct *unk10;
    u8 pad1[0x83];
    s8 unk97;
} func_8037DF24_Struct;
void func_8037DF24(func_8037DF24_Struct *arg0);


typedef struct func_8037FED4_Sub {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[6];
    u16 unkC;
} func_8037FED4_Sub;

typedef struct func_8037FED4_Obj {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad3E[0x59];
    s8 unk97;
    u8 pad98[0xC];
    func_8037FED4_Sub *unkA4;
} func_8037FED4_Obj;

extern void D_801471DC(s32, s32);
extern void D_80148E44(void *, s32);
extern void func_803800C4();

void func_8037FED4(func_8037FED4_Obj *arg0, s32 arg1) {
    s32 var_s0;
    s8 i;
    u16 temp_a1;
    u16 temp_v0;
    func_8037FED4_Sub *temp_v1;
    s32 var_s1;
    s32 var_s2;

    temp_v1 = arg0->unkA4;
    temp_a1 = temp_v1->unkC;
    var_s0 = 0;
    var_s1 = D_8038A9B0;
    var_s2 = D_8038A9B4;
    if (temp_a1 & 0x800) {
        if (arg0->unk97 > 0) {
            var_s0 = -1;
        }
        goto block_17;
    }
    if (temp_a1 & 0x400) {
        if (arg0->unk97 < 3) {
            var_s0 = 1;
        }
        goto block_17;
    }
    if (temp_v1->unk4 & 0x8000) {
        func_80006088(D_8038A99C, temp_a1);
        func_80006088(((s32 *)D_8038A99C)[4]);
        for (i = 0; i < 4; i++) {
            if (i != arg0->unk97) {
                func_80006088(var_s1);
                func_80006088(var_s2);
            } else {
                D_8038A9C4 = ((func_8037DD6C_Struct **)var_s1)[5];
                D_8038A9B0 = var_s1;
                D_8038A9B4 = var_s2;
            }
            var_s1 = ((s32 *)var_s1)[4];
            var_s2 = ((s32 *)var_s2)[4];
        }
        arg0->unk3C = 0;
        func_80020744(0x104);
        func_800058DC(arg0, (void (*)())func_803800C4);
        return;
    }
    if (temp_v1->unk4 & 0x4000) {
        D_801471DC(D_8038A99C, temp_a1);
        func_80148FC4(arg0, func_801498CC, 4, 0);
        return;
    }
    if (temp_v1->unk4 & 0x1000) {
        D_80148E44(arg0, temp_a1);
        func_80148FC4(arg0, func_8014AB48, 4, 1);
        return;
    }
block_17:
    if (var_s0 != 0) {
        func_80020744(0x300);
    }
    arg0->unk97 = arg0->unk97 + var_s0;
    func_8037DF24((func_8037DF24_Struct *)arg0);
}
