#include "common.h"
struct AnimT { int id; unsigned short frame; unsigned char pad6[2]; float speed; };
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern void func_800058DC(s32, void *);                    /* extern */
extern s32 func_80010550();
extern void func_8013A28C(void *, struct AnimT);
extern u8 func_80222708[];
typedef struct func_8036B7EC_Struct {
    u32 unk0;
    u8 pad[0xC - 4];
    s16 unkC;
} func_8036B7EC_Struct;
func_8036B7EC_Struct *func_803698D0(u8 *arg0);
typedef struct func_8036BF98_Entry {
    u8 pad[0x1C];
} func_8036BF98_Entry;
typedef struct func_80369994_StructD {
    u8 pad0[0x30];
    u32 unk30_hi : 7;
    u32 unk30_b24 : 1;
    u32 unk30_hi2 : 3;
    u32 unk30_f : 2;
    u32 unk30_m : 3;
    u32 unk32_e0 : 3;
    u32 unk32_b12 : 1;
    u32 unk30_lo : 12;
    u8 pad34[0x2D4 - 0x34];
    func_8036BF98_Entry *unk2D4;
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2DA[0x2FA - 0x2DA];
    u8 unk2FA;
    u8 pad2FB[0x374 - 0x2FB];
    u8 unk374;
} func_80369994_StructD;
struct func_80369C7C_Obj3 {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_80369C7C_Obj2 {
    u8 pad0[0x2C];
    struct func_80369C7C_Obj3 *unk2C;
};


typedef struct func_8036B6D4_StructArg {
    u8 pad[0x5C];
    s32 unk5C;
} func_8036B6D4_StructArg;

typedef struct func_8036B6D4_StructInfo {
    u8 pad[0x18];
    s32 *unk18;
} func_8036B6D4_StructInfo;

union func_8036B6D4_StructAnim {
    struct AnimT anim;
    f64 align;
};

extern struct AnimT D_80387AE4;

void func_8036B6D4(func_8036B6D4_StructArg *arg0, struct func_80369C7C_Obj2 **arg1) {
    s32 value;
    func_80369994_StructD *state;
    union func_8036B6D4_StructAnim anim;

    value = arg0->unk5C;
    if (arg0 == (func_8036B6D4_StructArg *) D_801BBCCC) {
        state = (func_80369994_StructD *) D_801BC03C;
    } else {
        state = (func_80369994_StructD *) D_801BC3D8;
    }
    if (func_80010550(arg1, value) != 0) {
        if (state->unk2D8 == 5) {
            anim.anim = D_80387AE4;
            anim.anim.id = *((func_8036B6D4_StructInfo *) func_803698D0((u8 *) state))->unk18;
            func_8013A28C(arg1, anim.anim);
            func_80010550(arg1, value);
            (*arg1)->unk2C->unk12 += 0x1000;
            (*arg1)->unk2C->unk12 &= 0x1FFF;
        }
        func_800058DC((s32) arg0, func_80222708);
    }
}
