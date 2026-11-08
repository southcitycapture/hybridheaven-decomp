#include "common.h"
extern s8 D_801E4011;
extern f32 D_8021AFB4;
extern f32 D_8021AFBC;
extern s16 D_8021AFC0;
extern u8 D_801BBBF0[];
typedef struct func_801E8BD0_In {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E8BD0_In;
typedef struct func_801E8BD0_Mid {
    u8 pad[0x2C];
    func_801E8BD0_In *unk2C;
} func_801E8BD0_Mid;
typedef struct func_801E7C30_G {
    u8 pad0[0xE0];
    func_801E8BD0_Mid *unkE0;
    u8 pad1[0x232 - 0xE4];
    s16 unk232;
    u8 pad2[0x35A - 0x234];
    u8 unk35A;
    u8 pad3;
    f32 unk35C;
    f32 unk360;
    f32 unk364;
    u8 pad4[0x380 - 0x368];
    f32 unk380;
    f32 unk384;
    f32 unk388;
    u8 pad5[0xEC4 - 0x38C];
    s32 unkEC4;
    u8 pad6[0xEF0 - 0xEC8];
    u16 unkEF0;
    u8 pad7[4];
    u8 unkEF6;
    u8 pad8[5];
    s32 unkEFC;
} func_801E7C30_G;
#define g ((func_801E7C30_G *)&D_801BBBF0)
#define P (g->unkE0->unk2C)
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;
extern void func_8013A28C(s32, func_801E74DC_Sub);
extern void func_801BF1A0(s32);
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
void func_801E4F60(u16 arg0);
typedef struct func_801E74DC_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x40 - 0x30];
    f32 unk40;
    u8 pad2[0x48 - 0x44];
    f32 unk48;
} func_801E74DC_Arg0;
s32 func_801F11C0(f32 arg0, f32 arg1, f32 arg2, f32 arg3, s16 arg4);


typedef struct func_801EACA4_StructSub {
    s32 unk0;
    s16 unk4;
    u16 unk6;
    f32 unk8;
} func_801EACA4_Sub;
typedef struct func_801EACA4_StructArg2 {
    u8 pad[0x1C];
    func_801EACA4_Sub unk1C;
} func_801EACA4_Arg2;

extern f32 D_8021AFB8;

void func_801EACA4(func_801E74DC_Arg0 *arg0, s32 arg1, func_801EACA4_Arg2 *arg2, u16 arg3, u8 arg4) {
    func_801EACA4_Sub *sub;

    sub = &arg2->unk1C;
    switch (sub->unk0) {
    case 0x0168000D:
        g->unkEF0 &= 0xFFF7;
        arg0->unk2C |= 0x80;
        if (arg3 != 0) {
            arg0->unk2C |= 0x80;
            P->unk12 = D_8021AFC0;
            switch (arg4) {
            default:
                D_801E4011 = 0;
                break;
            case 1:
                if (g->unkEF0 & 4) {
                    *(u8 *)&D_801E4011 = 1;
                    sub->unk0 = 0x0168000E;
                    sub->unk4 = 0;
                    sub->unk6 = 0x10;
                }
                break;
            case 2:
                if (g->unkEF0 & 4) {
                    *(u8 *)&D_801E4011 = 2;
                    sub->unk0 = 0x0168000E;
                    sub->unk4 = 0;
                    sub->unk6 = 0;
                }
                break;
            case 3:
                if (func_801C5A1C(P->unk4, P->unk8 + 28.0, P->unkC, func_8001EAD0(P->unk12) * 7.0 + P->unk4, P->unk8 + 28.0, func_8001EB64(P->unk12) * 7.0 + P->unkC) != 0) {
                    break;
                }
                if (g->unkEF0 & 2) {
                    D_801E4011 = 0;
                    sub->unk0 = 0x01680011;
                    sub->unk4 = 0;
                    sub->unk6 = 0;
                    sub->unk8 = 0.5f;
                }
                break;
            case 4:
                D_801E4011 = 0;
                if (g->unkEF0 & 4) {
                    func_801BF1A0(0xB);
                }
                sub->unk0 = 0x01680050;
                sub->unk4 = 0;
                sub->unk6 = 0;
                arg0->unk2C |= 0x40;
                func_801E4F60(g->unkEFC | 4 | 8);
                g->unkEF0 &= 0xFEF9;
                g->unkEF0 |= 0x200;
                P->unk4 -= func_8001EAD0(P->unk12) * 3.5;
                P->unkC -= func_8001EB64(P->unk12) * 3.5;
                break;
            }
            func_8013A28C(arg1, *(func_801E74DC_Sub *)sub);
        } else {
            func_801F11C0(D_8021AFB4, D_8021AFB8, D_8021AFBC, 2.0f, D_8021AFC0);
        }
        break;
    case 0x0168000E:
        func_801E4F60(0xD);
        if (arg3 != 0) {
            sub->unk0 = 0x0168000F;
            sub->unk4 = 0;
            func_8013A28C(arg1, *(func_801E74DC_Sub *)sub);
        }
        break;
    case 0x0168000F:
        if (func_801C5A1C(func_8001EAD0(P->unk12) * 5.0 + P->unk4, P->unk8 + 22.0, func_8001EB64(P->unk12) * 5.0 + P->unkC, func_8001EAD0(P->unk12) * 5.0 + P->unk4, P->unk8 + 16.0, func_8001EB64(P->unk12) * 5.0 + P->unkC) == 0) {
            if (g->unkEF0 & 4) {
                func_801BF1A0(0xB);
            }
            sub->unk0 = 0x01680050;
            sub->unk4 = 0;
            sub->unk6 = 0;
            func_8013A28C(arg1, *(func_801E74DC_Sub *)sub);
            arg0->unk2C |= 0x40;
            func_801E4F60(g->unkEFC | 4 | 8);
            g->unkEF0 &= 0xFEF9;
            g->unkEF0 |= 0x200;
            P->unk4 -= func_8001EAD0(P->unk12) * 3.5;
            P->unkC -= func_8001EB64(P->unk12) * 3.5;
        } else if (arg3 != 0) {
            switch (arg4) {
            case 1:
                if (g->unkEF0 & 4) {
                    if (sub->unk6 & 0x10) {
                        sub->unk0 = 0x0168000F;
                        sub->unk4 = 0;
                        sub->unk6 = 0x10;
                    } else {
                        D_801E4011 = 0;
                        sub->unk0 = 0x01680010;
                        sub->unk4 = 0;
                    }
                }
                break;
            case 2:
                if (g->unkEF0 & 4) {
                    if (sub->unk6 & 0x10) {
                        D_801E4011 = 0;
                        sub->unk0 = 0x01680010;
                        sub->unk4 = 0;
                    } else {
                        sub->unk0 = 0x0168000F;
                        sub->unk4 = 0;
                        sub->unk6 = 0;
                    }
                }
                break;
            default:
            case 3:
            case 4:
                D_801E4011 = 0;
                sub->unk0 = 0x01680010;
                sub->unk4 = 0;
                break;
            }
            func_8013A28C(arg1, *(func_801E74DC_Sub *)sub);
        }
        break;
    case 0x01680010:
        if (arg3 != 0) {
            switch (arg4) {
            default:
                D_801E4011 = 0;
                break;
            case 1:
                if (g->unkEF0 & 4) {
                    *(u8 *)&D_801E4011 = 1;
                    sub->unk0 = 0x0168000E;
                    sub->unk4 = 0;
                    sub->unk6 = 0x10;
                }
                break;
            case 2:
                if (g->unkEF0 & 4) {
                    *(u8 *)&D_801E4011 = 2;
                    sub->unk0 = 0x0168000E;
                    sub->unk4 = 0;
                    sub->unk6 = 0;
                }
                break;
            case 3:
                if (func_801C5A1C(P->unk4, P->unk8 + 28.0, P->unkC, func_8001EAD0(P->unk12) * 7.0 + P->unk4, P->unk8 + 28.0, func_8001EB64(P->unk12) * 7.0 + P->unkC) != 0) {
                    break;
                }
                if (g->unkEF0 & 2) {
                    D_801E4011 = 0;
                    sub->unk0 = 0x01680011;
                    sub->unk4 = 0;
                    sub->unk6 = 0;
                    sub->unk8 = 0.5f;
                }
                break;
            case 4:
                D_801E4011 = 0;
                if (g->unkEF0 & 4) {
                    func_801BF1A0(0xB);
                }
                sub->unk0 = 0x01680050;
                sub->unk4 = 0;
                sub->unk6 = 0;
                arg0->unk2C |= 0x40;
                func_801E4F60(g->unkEFC | 4 | 8);
                g->unkEF0 &= 0xFEF9;
                g->unkEF0 |= 0x200;
                P->unk4 -= func_8001EAD0(P->unk12) * 3.5;
                P->unkC -= func_8001EB64(P->unk12) * 3.5;
                break;
            }
            func_8013A28C(arg1, *(func_801E74DC_Sub *)sub);
        }
        break;
    case 0x01680011:
        if (arg3 != 0) {
            if (g->unkEF0 & 0x100) {
                func_801BF1A0(6);
                sub->unk0 = 0x01680031;
            } else {
                sub->unk0 = 0x01680026;
            }
            sub->unk4 = 0;
            sub->unk6 = 0;
            sub->unk8 = 1.0f;
            func_8013A28C(arg1, *(func_801E74DC_Sub *)sub);
            func_801E4F60(0xC);
        }
        break;
    }
}
