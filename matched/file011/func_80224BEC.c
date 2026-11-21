#include "common.h"
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
struct func_80224F5C_In {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_80224F5C_Mid {
    u8 pad0[0x2C];
    struct func_80224F5C_In *unk2C;
};
struct func_80224F5C_Arg1 {
    struct func_80224F5C_Mid *unk0;
};
typedef struct func_80224F5C_V {
    s32 a;
    s32 b;
    s32 c;
} func_80224F5C_V;
extern void func_8013A28C(struct func_80224F5C_Arg1 *, func_80224F5C_V);
struct func_802237B0_Struct {
    u8 pad0[0x74];
    u8 unk74;
};
struct func_802237B0_Arg {
    u8 pad0[0x5C];
    struct func_802237B0_Struct *unk5C;
};
void func_802237B0(struct func_802237B0_Arg *arg0, u8 arg1);
s32 func_80224B64(s32 arg0);
struct func_80224F5C_Arg0 {
    u8 pad0[0x5C];
    u8 *unk5C;
};
struct func_80224F5C_Bits {
    u8 pad0[0x30];
    u32 : 9;
    u32 f : 2;
    u32 : 21;
};
typedef struct func_80225664_Local {
    s32 unk0;
    s16 unk4;
    s16 unk6;
    f32 unk8;
} func_80225664_Local;
void func_802256E4(s32 arg0, s32 arg1, s32 arg2);


struct func_80224BEC_StructInner {
    u8 pad0[0x1C];
    s32 unk1C;
};

struct func_80224BEC_StructArg {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    struct func_80224BEC_StructInner *unk5C;
};

/* func_802256E4 returns its 12-byte result by value (hidden pointer in $a0) */
extern func_80225664_Local D_802256E4(s32 obj, s32 mode);

s32 func_80224BEC(struct func_80224F5C_Arg0 *arg0, struct func_80224F5C_Arg1 *arg1) {
    struct func_80224BEC_StructInner *inner;
    struct func_80224F5C_Bits *bits;
    func_80225664_Local local;
    s32 mode;

    inner = ((struct func_80224BEC_StructArg *)arg0)->unk5C;
    if ((s32)arg0 == D_801BBCCC) {
        bits = (struct func_80224F5C_Bits *)&D_801BC03C;
    } else {
        bits = (struct func_80224F5C_Bits *)&D_801BC3D8;
    }
    switch (func_80224B64((s32)arg0)) {
    case 1:
        mode = bits->f == 3 ? 2 : 3;
        local = D_802256E4((s32)arg0, (u8)mode);
        if (((struct func_80224BEC_StructArg *)arg0)->unk36 == 0x11D) {
            local.unk6 = (u16)local.unk6 ^ 0x10;
        }
        if (((struct func_80224BEC_StructArg *)arg0)->unk36 != 0x11D) {
            local.unk8 = 0.6f;
        }
        break;
    case 4:
        mode = bits->f == 3 ? 3 : 2;
        local = D_802256E4((s32)arg0, (u8)mode);
        if (0x11D != ((struct func_80224BEC_StructArg *)arg0)->unk36) {
            local.unk8 = 0.6f;
        }
        break;
    case 2:
        if (bits->f == 3) {
            mode = 4;
        } else {
            mode = 5;
        }
        local = D_802256E4((s32)arg0, mode & 0xFF);
        break;
    case 5:
        if (bits->f == 3) {
            mode = 5;
        } else {
            mode = 4;
        }
        local = D_802256E4((s32)arg0, mode & 0xFF);
        break;
    case 3:
    case 6:
        local = D_802256E4((s32)arg0, 6);
        break;
    case 0:
    default:
        return 0;
    }
    func_802237B0((struct func_802237B0_Arg *)arg0, 1);
    if (local.unk0 != inner->unk1C) {
        func_8013A28C(arg1, *(func_80224F5C_V *)&local);
        return 1;
    }
    return 0;
}
