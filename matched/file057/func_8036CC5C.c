#include "common.h"
extern u8 D_8008DA88[];
struct func_80369C7C_Obj3 {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_80369C7C_Obj2 {
    u8 pad0[0x2C];
    struct func_80369C7C_Obj3 *unk2C;
};
struct func_80369C7C_Obj1 {
    u8 pad0[0x24];
    struct func_80369C7C_Obj2 *unk24;
};
struct func_80369C7C_Struct {
    u8 pad0[0xDC];
    struct func_80369C7C_Obj1 *unkDC;
    u8 pad1[0xEC - 0xE0];
    struct func_80369C7C_Obj1 *unkEC;
    u8 pad2[0xB98 - 0xF0];
    s16 unkB98;
};
extern struct func_80369C7C_Struct D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern void func_800058DC(s32, void *);                    /* extern */
extern void func_80006214(void *);
extern s32 func_80011590(u16);
extern void func_8013AE20(s32, s32, s32);
extern u8 func_80222708[];
extern void func_802237B0(void *, s32);
extern void func_803602D4(void *, s32);
extern void func_80365FE0(void *, s32);
typedef struct func_8036BF98_Entry {
    u8 pad[0x1C];
} func_8036BF98_Entry;
typedef struct func_8036BF98_Struct {
    u8 pad[0x2D4];
    func_8036BF98_Entry *unk2D4;
    u8 pad2D8;
    u8 unk2D9;
    u8 pad2DA[2];
    u8 unk2DC;
} func_8036BF98_Struct;
s32 func_8036BF98(func_8036BF98_Struct *arg0);
void func_8036C054(s32 arg0, s32 arg1, s32 arg2);
void func_8036D30C(s32 arg0, struct func_80369C7C_Obj2 **arg1);


typedef struct func_8036CC5C_StructAnim { s32 id; u16 frame; u8 pad[2]; f32 speed; } Anim;
typedef struct func_8036CC5C_StructSub { u8 pad[8]; s32 unk8; } Sub;
typedef struct func_8036CC5C_StructObj { u8 pad[0x1C]; Anim anim; u8 pad28[0x54]; Sub *unk7C; u16 unk80; u8 pad82[0x1A]; u8 unk9C; } Obj;
typedef struct func_8036CC5C_StructArg { u8 pad[0x5C]; Obj *obj; } Arg;
typedef struct func_8036CC5C_StructInfo { u8 pad[2], unk2, pad3; u16 unk4, unk6; u8 pad8[8]; u32 *id; } Info;
typedef struct func_8036CC5C_StructVec { s32 x,y,z; } Vec;
typedef struct func_8036CC5C_StructBits { u8 pad[0x30]; unsigned int highbit:9; unsigned int mode:2; } Mode;
typedef struct func_8036CC5C_Struct {
    u8 pad[8]; s16 unk8; u8 padA[6]; f32 unk10; u8 pad14[8]; f32 unk1C;
    u8 pad20[0x10]; u32 flags; u8 pad34[0x2D9-0x34]; u8 unk2D9; u8 pad2DA[4]; u8 unk2DE;
    u8 pad2DF[9]; u8 unk2E8; u8 pad2E9[3]; f32 unk2EC; u8 pad2F0[4]; f32 unk2F4;
    u8 pad2F8[8]; u16 unk300, unk302; u8 pad304[0x10]; Vec unk314; u8 pad320[12]; u8 unk32C;
    u8 pad32D[0x374-0x32D]; s8 unk374; u8 pad375[0x392-0x375]; u8 unk392;
} State;
extern s32 func_802264D0(void *, s32);
extern u16 func_802254F8(void *, s16, s32);
extern s32 func_8035FEC0(void *);
extern s32 func_803697AC(void *, s32, s32);
extern s32 func_8013B808(void *, void *, s32);
extern s32 func_801DB480(void *, s32, f32, u8);
extern s32 func_803709D0(void *, Vec, s32);
void func_8036CC5C(struct func_80369C7C_Obj1 *arg0, void *arg1) {
    void *sp6C;
    Obj *sp68;
    Anim *sp2C;
    State *s0;
    s32 start;
    State *sp58;
    Info *sp54;
    s32 end;
    u8 *flag_pointer;
    s32 is_special;
    f32 sp44[1];
    u16 a3;
    Vec sp34;
    if (arg0 == D_801BBBF0.unkDC) sp6C = D_801BBBF0.unkEC;
    else sp6C = D_801BBBF0.unkDC;
    sp68 = ((Arg *)arg0)->obj;
    if (arg0 == D_801BBBF0.unkDC) s0 = (State *)D_801BC03C;
    else s0 = (State *)D_801BC3D8;
    sp58 = (State *)(arg0 != D_801BBBF0.unkDC ? D_801BC03C : D_801BC3D8);
    func_802237B0(arg0, 1);
    sp54 = (Info *)func_8036BF98((func_8036BF98_Struct *)s0);
    sp44[0] = s0->unk1C;
    if ((f64)sp44[0] == 0.0) sp44[0] = s0->unk10;
    if (sp68->unk80 == 0 && *sp54->id == (sp2C = &sp68->anim)->id) {
        start = func_80011590((u32)((f32)sp54->unk4 * sp2C->speed) & 0xFFFF);
        if ((start & 0xFFFFFFFFU) == sp2C->frame) {
            s0->unk2DE = 1;
            s0->unk2E8 = 0;
            s0->unk32C = 0;
            a3 = 0;
            func_8013AE20((s32)arg0, (s32)arg1, 1);
            if (s0->unk2D9 == 0x40) s0->unk374 = 0;
            if (s0->unk300 >= 0x64) {
                if (s0->unk302 == s0->unk8) a3 = 4;
                else if ((f64)s0->unk302 > (f64)s0->unk8 * (0.8)) a3 = 1;
            }
            if (a3 != 0) func_8013B808(arg0,arg1,a3 & 0xFFFF);
        } else {
            end = func_80011590((u32)((f32)sp54->unk6 * sp2C->speed) & 0xFFFF);
            if ((end & 0xFFFFFFFFU) == sp2C->frame) {
                s0->unk2DE = 0;
                func_8013AE20((s32)arg0,(s32)arg1,0);
                if (s0->unk2E8 < 2) {
                    func_803602D4(arg0,(s32)arg1);
                    s0->unk2EC = 1.0f;
                    s0->unk2F4 = 0.0f;
                    if (s0->unk2D9 == 0x40) func_803697AC(arg0,(s32)arg1,1);
                    else if (s0->unk2D9 == 0x3E) func_802264D0(arg0,0x281);
                    else func_802264D0(arg0,0x3B6);
                    sp68->unk7C->unk8 = 0;
                    s0->unk374 = 0;
                    func_80006214(sp6C);
                    flag_pointer = (u8 *)sp58 + 0x30;
                    *((u8 *)((u32)sp58 & 0xFFFFFFFFU) + 0x30) &= 0xFFFE;
                    *flag_pointer &= 0x7F;
                    func_80365FE0(sp6C,(s32)D_8008DA88);
                    func_80006214(arg0);
                }
            }
        }
    }
    if (s0->unk2E8 >= 2 && s0->unk32C == 0) {
        s0->unk32C = 1;
        s0->unk2DE = 0;
        func_802254F8(arg0,s0->unk2D9 == 0x40 ? 0xF : 8,4);
        func_8035FEC0(arg0);
        if (*(s32 *)sp54->id == ((s32 *)sp68)[7]) {
            s0->unk2F4 = 1.0f;
            func_8036C054((s32)&sp34.x,(s32)arg0,(s32)arg1);
            func_803709D0(sp6C,sp34,3);
            func_802264D0(arg0,0x3B5);
            func_802254F8(sp6C,s0->unk2D9 == 0x40 ? 0x1E : 0xF,5);
            if (sp68->unk9C == 1 || sp68->unk9C == 2) sp68->unk9C = 3;
            s0->unk374--;
            if (s0->unk374 < 0) {
                sp68->unk7C->unk8 = 0;
                s0->unk374 = 0;
                s0->unk2EC = 1.0f;
                func_803602D4(arg0,(s32)arg1);
            }
            func_80006214(sp6C);
            if (((sp58->flags << 1) >> 30) != 0 || s0->unk374 < 0) func_8013B808(sp6C,D_8008DA88,5);
            else func_8013B808(sp6C,D_8008DA88,2);
            func_8036D30C((s32)sp6C,(struct func_80369C7C_Obj2 **)D_8008DA88);
            func_80006214(arg0);
        }
    }
    func_8036C054((s32)&s0->unk314,(s32)arg0,(s32)arg1);
    if (((s0->flags << 9) >> 30) == 3) is_special = 1;
    else is_special = 0;
    if (func_801DB480(arg0,(s32)arg1,sp44[0],is_special) != 0) {
        if (sp54->unk2 != 0) ((Mode *)s0)->mode = ((s0->flags << 9) >> 30) ^ 1;
        func_800058DC((s32)arg0,func_80222708);
    }
    if (s0->unk2D9 != 0x40) s0->unk392 = 3;
}
