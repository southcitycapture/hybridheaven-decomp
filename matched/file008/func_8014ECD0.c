#include "common.h"
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
extern func_8014C2B0_Struct_Table D_8018294C[];
typedef struct func_8014D2E0_Struct_Table {
    u8 pad[6];
    u16 limit;
    f32 speed;
    u8 padC[8];
} func_8014D2E0_Struct_Table;
#define DTI(i) (*(func_8014D2E0_Struct_Table *)((u8 *)D_8018294C + (i) * 20))
typedef struct func_8014D2E0_Struct_Speed {
    f32 speed;
    u8 pad[16];
} func_8014D2E0_Struct_Speed;
extern func_8014D2E0_Struct_Speed D_80182954[];
extern u8 D_801BBBF0[];
typedef struct func_8014D2E0_Struct_G {
    u8 pad0[0x198];
    f32 unk198;
    u8 pad19C[4];
    f32 unk1A0;
} func_8014D2E0_Struct_G;
#define GD ((func_8014D2E0_Struct_G *)D_801BBBF0)
float func_8001EAD0(short);
float func_8001EB64(short);
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
typedef struct func_8014D2E0_Struct_P {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
} func_8014D2E0_Struct_P;
typedef struct func_8014D2E0_Struct {
    u8 pad[0x24];
    func_8014C2B0_Struct_Sub *unk24;
    u8 pad28[0x10];
    func_8014D2E0_Struct_P *unk38;
    u8 pad3C[0x54];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 unk93;
    f32 unk94;
} func_8014D2E0_Struct;
typedef struct func_8014CE54_Struct_Pos {
    u8 pad[6];
    s16 x, y, z;
} func_8014CE54_Struct_Pos;
typedef struct func_8014CE54_Struct {
    u8 pad0[0x38];
    func_8014CE54_Struct_Pos *pos;
    u8 pad3C[0x74 - 0x3C];
    s32 unk74;
    u8 pad78[0x90 - 0x78];
    u8 unk90, unk91, unk92, unk93;
    f32 unk94;
    s32 unk98;
    u8 pad9C[2];
    u16 unk9E;
    u8 padA0[5];
    u8 unkA5;
} func_8014CE54_Struct;
extern s32 (*D_80182104[])(func_8014CE54_Struct *, s32);
extern s32 func_8014F358(f32, f32);
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
extern void (*D_80182268[])(func_8014C2B0_Struct *, func_8014C2B0_Struct_Obj **);
extern void func_801C2F0C();
extern s32 func_801C3044();


s32 func_8014ECD0(func_8014D2E0_Struct *arg0, s32 arg1) {
    f32 t;
    func_8014D2E0_Struct_Table *p;

    if (arg0->unk93 == 1) goto c1;
    if (arg0->unk93 == 2) goto c2;
    if (arg0->unk93 == 3) goto c3;
    return 1;
c1:
    arg0->unk24->unk30->unk4 += (f64)func_8001EB64(arg0->unk24->unk30->unk12) * (f64)DTI(arg0->unk90).speed;
    arg0->unk24->unk30->unkC -= (f64)func_8001EAD0(arg0->unk24->unk30->unk12) * (f64)DTI(arg0->unk90).speed;
    p = &DTI(arg0->unk90);
    t = (f64)arg0->unk94 + (f64)p->speed;
    arg0->unk94 = t;
    if (p->limit <= t) {
        if (func_8014F358(GD->unk198, GD->unk1A0) != 0) {
            arg0->unk93 = 2;
            arg0->unk94 = 0.0f;
        }
    }
    goto end;
c2:
    if (func_801C3044() == 0) {
        func_801C2F0C(1, 0);
        if (arg0->unk91 & 1) {
            arg0->unk93 = 3;
            arg0->unk94 = 0.0f;
        } else {
            arg0->unk24->unk30->unk4 = (f32)arg0->unk38->unk6 / 10.0;
            arg0->unk24->unk30->unkC = (f32)arg0->unk38->unkA / 10.0;
            return 0;
        }
    }
    goto end;
c3:
    arg0->unk24->unk30->unk4 -= (f64)func_8001EB64(arg0->unk24->unk30->unk12) * (f64)D_80182954[arg0->unk90].speed;
    arg0->unk24->unk30->unkC += (f64)func_8001EAD0(arg0->unk24->unk30->unk12) * (f64)DTI(arg0->unk90).speed;
    p = &DTI(arg0->unk90);
    t = (f64)arg0->unk94 + (f64)p->speed;
    arg0->unk94 = t;
    if (p->limit <= t) {
        arg0->unk24->unk30->unk4 = (f32)arg0->unk38->unk6 / 10.0;
        arg0->unk24->unk30->unkC = (f32)arg0->unk38->unkA / 10.0;
        return 0;
    }
end:
    return 1;
}
