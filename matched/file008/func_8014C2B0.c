#include "context.h"

typedef struct func_8014C2B0_Struct_Data {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
} func_8014C2B0_Struct_Data;

typedef struct func_8014C2B0_Struct_Sub {
    u8 pad0[0x30];
    func_8014C2B0_Struct_Data *unk30;
} func_8014C2B0_Struct_Sub;

typedef struct func_8014C2B0_Struct_Info {
    u8 pad0[0x10];
    u32 unk10;
    u32 unk14;
    u32 unk18;
} func_8014C2B0_Struct_Info;

typedef struct func_8014C2B0_Struct {
    u8 pad0[0x24];
    func_8014C2B0_Struct_Sub *unk24;
    u8 pad28[0x2C - 0x28];
    s32 unk2C;
    u8 pad30[0x36 - 0x30];
    u16 unk36;
    func_8014C2B0_Struct_Info *unk38;
    u8 pad3C[0x74 - 0x3C];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
    u8 pad8A[0x90 - 0x8A];
    u8 unk90;
    u8 unk91;
    u8 pad92;
    u8 unk93;
    f32 unk94;
    u8 pad98[0x9C - 0x98];
    u8 unk9C;
    u8 pad9D;
    s16 unk9E;
    s16 unkA0;
    s16 unkA2;
    u8 unkA4;
    u8 unkA5;
    u8 unkA6;
} func_8014C2B0_Struct;

typedef struct func_8014C2B0_Struct_ObjSub {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[0x30 - 0x28];
    s32 unk30;
    u8 pad34[0x4C - 0x34];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_8014C2B0_Struct_ObjSub;

typedef struct func_8014C2B0_Struct_Obj {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    func_8014C2B0_Struct_ObjSub *unk30;
} func_8014C2B0_Struct_Obj;

typedef struct func_8014C2B0_Struct_Pair {
    s16 unk0;
    u16 unk2;
} func_8014C2B0_Struct_Pair;

typedef struct func_8014C2B0_Struct_Table {
    func_8014C2B0_Struct_Pair *unk0;
    u16 unk4;
    u8 pad6[0xE - 0x6];
    u16 unkE;
    u16 unk10;
    u8 pad12[2];
} func_8014C2B0_Struct_Table;

typedef struct func_8014C2B0_Struct_G {
    u8 pad0[0x3A6];
    u8 unk3A6;
    u8 pad3A7[0x3B8 - 0x3A7];
    u16 unk3B8;
    u8 pad3BA[2];
    void *unk3BC[30];
    u8 pad434[0xF32 - 0x434];
    u8 unkF32;
    u8 unkF33;
    u8 unkF34;
    u8 unkF35;
} func_8014C2B0_Struct_G;

typedef struct func_8014C2B0_Struct_Arg {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_8014C2B0_Struct_Arg;

void func_800058DC();
void func_8014C6F4();
void func_8014D070();
void func_8014D204();
extern s32 func_80126CC0(void *, void *);
extern void func_8001F7D4(void *);
extern void func_80005E44(void *, func_8014C2B0_Struct_Arg *);
extern void func_80006214(void *);
extern void func_8012636C(void *, s32);
extern void func_8012C89C(void *, s32, s16, s32);
extern void func_8001F74C(void *);
extern s32 func_8012C97C(u16, u16);
extern func_8014C2B0_Struct_Arg D_80164F40;
extern u8 D_8017AF38[];
extern u8 D_801826D8[];
extern void (*D_80182268[])(func_8014C2B0_Struct *, func_8014C2B0_Struct_Obj **);
extern void (*D_80182694[])(func_8014C2B0_Struct *, func_8014C2B0_Struct_Obj **);
extern func_8014C2B0_Struct_Table D_8018294C[];

#define G ((func_8014C2B0_Struct_G *)D_801BBBF0)

void func_8014C2B0(func_8014C2B0_Struct *arg0, func_8014C2B0_Struct_Obj **arg1) {
    func_8014C2B0_Struct_Arg s;
    func_8014C2B0_Struct_Pair *list;
    s32 j;
    s32 i;

    if (func_80126CC0(arg0, func_8014D204) != 0) {
        func_8001F7D4(arg0);
        arg0->unk90 = arg0->unk38->unk10 >> 24;
        arg0->unk91 = (arg0->unk38->unk10 >> 16) & 0xFF;
        arg0->unkA4 = arg0->unk38->unk14 >> 24;
        arg0->unkA5 = (arg0->unk38->unk14 >> 16) & 0xFF;
        arg0->unk9E = arg0->unk38->unk14 & 0xFFFF;
        arg0->unkA0 = arg0->unk38->unk18 >> 16;
        arg0->unkA2 = arg0->unk38->unk18 & 0xFFFF;
        arg0->unkA6 = arg0->unk38->unk10 & 0xFF;
        arg0->unk9C = 0;
        for (j = 0; j < 30; j++) {
            if (G->unk3BC[j] == NULL) {
                G->unk3BC[j] = arg0;
                arg0->unk9C = j;
                G->unk3B8 = 30;
                break;
            }
        }
        list = D_8018294C[arg0->unk90].unk0;
        s = D_80164F40;
        s.unk4 = 0x80000C00;
        for (i = 0; list[i].unk0 != -1; i++) {
            func_80005E44(arg0, &s);
        }
        func_80006214(arg0);
        for (i = 0; list[i].unk0 != -1; i++) {
            if (!(list[i].unk2 & 0x8000)) {
                func_8012636C(arg0, i);
            }
            if (D_8018294C[arg0->unk90].unk4 == 0 || D_8018294C[arg0->unk90].unk4 == 0x22) {
                arg1[i]->unk22 = 0;
                arg1[i]->unk30->unk30 = (s32)D_801826D8;
            } else {
                arg1[i]->unk30->unk24 |= 0x400;
                arg1[i]->unk30->unk30 = (s32)D_8017AF38 | 0x40000000;
                arg1[i]->unk30->unk4C = G->unkF32;
                arg1[i]->unk30->unk4D = G->unkF33;
                arg1[i]->unk30->unk4E = G->unkF34;
                arg1[i]->unk30->unk4F = G->unkF35;
                func_8012C89C(arg0, i, list[i].unk0, list[i].unk2 & ~0x8000);
            }
        }
        func_8001F74C(arg0);
        arg0->unk2C |= 0x800;
        arg0->unk78 = arg0->unk24->unk30->unk4;
        arg0->unk7C = arg0->unk24->unk30->unk8;
        arg0->unk80 = arg0->unk24->unk30->unkC;
        arg0->unk84 = arg0->unk24->unk30->unk10;
        arg0->unk86 = arg0->unk24->unk30->unk12;
        arg0->unk88 = arg0->unk24->unk30->unk14;
        arg0->unk93 = 0;
        arg0->unk94 = 0.0f;
        if (arg0->unk91 & 2) {
            arg0->unk74 = func_8012C97C(arg0->unk36, D_8018294C[arg0->unk90].unk10);
        } else {
            arg0->unk74 = func_8012C97C(arg0->unk36, D_8018294C[arg0->unk90].unkE);
        }
        if (arg0->unkA4 == G->unk3A6) {
            if (D_80182694[(arg0->unk38->unk10 >> 8) & 0xFF] != NULL) {
                D_80182694[(arg0->unk38->unk10 >> 8) & 0xFF](arg0, arg1);
            }
        }
        if (arg0->unk91 & 0x10) {
            if (D_80182268[D_8018294C[arg0->unk90].unk4] != NULL) {
                D_80182268[D_8018294C[arg0->unk90].unk4](arg0, arg1);
            }
            func_800058DC((s32)arg0, func_8014D070);
        } else {
            func_800058DC((s32)arg0, func_8014C6F4);
        }
    }
}
