#include "common.h"
struct func_801C3D90_StructB {
    u8 pad[0x63];
    u8 unk63;
};
struct func_801C3D90_StructA {
    u8 pad[0xDC];
    struct func_801C3D90_StructB *unkDC;
    s32 unkE0;
};
extern struct func_801C3D90_StructA D_801BBBF0;
typedef struct func_801C4A5C_StructEntry { u16 flag, index; } func_801C4A5C_StructEntry;
extern func_801C4A5C_StructEntry D_801E0B30[];
extern f32 D_801E4020[6];
extern f32 func_8001EAD0(s32);
extern f32 func_8002FC20(f32);
u16 func_801C3B20(void);
s32 func_801C3B48(s32 arg0);
void func_801C3B7C(s32 arg0);
s32 func_801C5A1C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_801C7B18(void);

extern f32 func_8001EB64(s32);
extern s32 func_80126944(void);
extern u16 D_8017DC42;

struct func_801C5A5C_StructIn2 {
    u8 pad[0x1C];
    s32 unk1C;
};
struct func_801C5A5C_StructIn1 {
    u8 pad[0x5C];
    struct func_801C5A5C_StructIn2 *unk5C;
};
struct func_801C5A5C_StructNode {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801C5A5C_StructMid {
    u8 pad[0x2C];
    struct func_801C5A5C_StructNode *unk2C;
    struct func_801C5A5C_StructNode *unk30;
};
struct func_801C5A5C_StructArg {
    u8 pad[0x24];
    struct func_801C5A5C_StructMid *unk24;
    u8 pad28[4];
    s32 unk2C;
    u8 pad30[0x40 - 0x30];
    f32 unk40;
    u8 pad44[4];
    f32 unk48;
};
struct func_801C5A5C_StructGlobal {
    u8 pad0[0x28];
    u8 unk28;
    u8 pad29[0xDC - 0x29];
    struct func_801C5A5C_StructIn1 *unkDC;
    struct func_801C5A5C_StructMid *unkE0;
    u8 padE4[0x35A - 0xE4];
    u8 unk35A;
    u8 pad35B;
    f32 unk35C;
    f32 unk360;
    f32 unk364;
    f32 unk368;
    f32 unk36C;
    f32 unk370;
    u8 pad374[0x380 - 0x374];
    f32 unk380;
    f32 unk384;
    f32 unk388;
    s32 unk38C;
    u8 pad390[0xD40 - 0x390];
    f32 unkD40[16];
    f32 unkD80[16];
    f32 unkDC0[16];
    f32 unkE00[16];
    f32 unkE40[16];
    f32 unkE80[16];
    u32 unkEC0;
    s32 unkEC4;
    u8 padEC8[0xED8 - 0xEC8];
    f32 unkED8;
    f32 unkEDC;
    f32 unkEE0;
    f32 unkEE4;
    f32 unkEE8;
    f32 unkEEC;
    u16 unkEF0;
    u16 unkEF2;
    u8 padEF4;
    u8 unkEF5;
    u8 unkEF6;
    u8 unkEF7;
    s32 unkEF8;
};
struct func_801C5A5C_StructResult {
    u8 pad[0xEC6];
    u16 flags;
};
struct func_801C5A5C_StructFlag {
    unsigned int flag : 16;
    unsigned int index : 16;
};

#define H ((struct func_801C5A5C_StructGlobal *)&D_801BBBF0)
/* its own private alias of func_801C5A1C (6 float args), not func_801C7B18's */
s32 func_801C5A1C__func_801C5A5C(f32, f32, f32, f32, f32, f32);
#define COLLISION func_801C5A1C__func_801C5A5C
#define SQRT_TWO(x, y) func_8002FC20(x)
#define FABS(x) ((x) < 0.0f ? -(x) : (x))

#define UPD_X() \
    if (H->unk368 < 0.0f) { fs2 = -H->unk368; } else { fs2 = H->unk368; } \
    if (fs5 < 0.0f) { fv0 = -fs5; } else { fv0 = fs5; } \
    if (fv0 < fs2) { fs5 = H->unk368; }
#define UPD_Z() \
    if (H->unk370 < 0.0f) { fs2 = -H->unk370; } else { fs2 = H->unk370; } \
    if (fs4 < 0.0f) { fv0 = -fs4; } else { fv0 = fs4; } \
    if (fv0 < fs2) { fs4 = H->unk370; }
/* copy the three floats at unk35C..unk364 */
#define COPY_VEC35C(x, y, z) \
    do { \
        x = H->unk35C; \
        y = H->unk360; \
        z = H->unk364; \
    } while (0)

u16 func_801C5A5C(void *a0) {
    struct func_801C5A5C_StructArg *arg0 = a0;
    struct func_801C5A5C_StructMid *m;
    struct func_801C5A5C_StructIn2 *s6;
    f32 spA8;
    u16 *p;
    s32 t;
    f32 *sp9C;
    f32 *sp98;
    f32 *sp94;
    u8 sp93;
    s32 s1;
    f32 fs0;
    f32 fs1;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 fs2, fa0, fv0;
    f32 fs4;
    f32 fs5;
    u8 v;

    s6 = H->unkDC->unk5C;
    H->unkEC4 = 0;
    sp80 = 0.0f;
    sp7C = 0.0f;
    spA8 = 0.0f;
    m = arg0->unk24;
    p = (u16 *)D_801E0B30;
    fs4 = 0.0f;
    fs5 = 0.0f;
    if (m != NULL) {
        if (m->unk2C != NULL) {
            sp9C = &m->unk2C->unk4;
            sp98 = &m->unk2C->unk8;
            sp94 = &m->unk2C->unkC;
        } else {
            sp9C = &m->unk30->unk4;
            sp98 = &m->unk30->unk8;
            sp94 = &m->unk30->unkC;
        }
        {
            for (; *p != 0; p += 2) {
                if (*p & H->unkEC0) {
                    switch (*p) {
                    case 0x1:
                        if (COLLISION(H->unkD40[p[1]], H->unkD80[p[1]], H->unkDC0[p[1]], H->unkE00[p[1]], H->unkE40[p[1]], H->unkE80[p[1]]) != 0) {
                            v = H->unk35A;
                            if ((v == 0x1A) && !(H->unkEF0 & 0x8000)) {
                                if ((s32) D_8017DC42 > 0) {
                                    t = s6->unk1C;
                                    if ((t != 0x01680012) && (t != 0x01680013) && (t != 0x01680014)) {
                                        func_801C3B7C(H->unk38C);
                                        H->unkEF2 = (u16) (H->unkEF0 | 0x200);
                                        break;
                                    }
                                } else {
                                    H->unkEF0 = (u16) (H->unkEF0 | 0x8000);
                                }
                            }
                            if (v != 0x12 && v != 0x21) {
                                if (((f64) H->unk35C != 0.0) || ((f64) H->unk364 != 0.0)) {
                                    H->unk368 = H->unk380 - H->unkE00[p[1]];
                                    H->unk370 = H->unk388 - H->unkE80[p[1]];
                                }
                                UPD_X()
                                UPD_Z()
                                if ((H->unk368 != 0.0f) || (H->unk370 != 0.0f)) {
                                    H->unkEC4 |= 0x40;
                                }
                            }
                        }
                        {
                            fa0 = H->unkE00[p[1]] + fs5;
                            fv0 = H->unkE80[p[1]] + fs4;
                            if (COLLISION(fa0, H->unkD80[p[1]], fv0, fa0, (f32) ((f64) H->unkE40[p[1]] - 1.0), fv0) != 0) {
                                H->unkEF6 = H->unk35A;
                                if ((H->unk35A == 0x1A) && !(H->unkEF0 & 0x8000)) {
                                    if ((s32) D_8017DC42 > 0) {
                                        t = s6->unk1C;
                                        if ((t != 0x01680012) && (t != 0x01680013) && (t != 0x01680014)) {
                                            func_801C3B7C(H->unk38C);
                                            H->unkEF2 = (u16) (H->unkEF0 | 0x200);
                                            H->unkEF0 = (u16) (H->unkEF0 | 1);
                                            break;
                                        }
                                    } else {
                                        H->unkEF0 = (u16) (H->unkEF0 | 0x8000);
                                    }
                                } else if (H->unk35A == 0x16) {
                                    H->unkEF0 = (u16) (H->unkEF0 | 0x8000);
                                    break;
                                } else {
                                    if ((H->unk35A == 0x13) && (func_801C3B20() == 0)) {
                                        func_801C3B48(1);
                                        func_801C3B7C(H->unk38C);
                                        arg0->unk40 = 0.0f;
                                        arg0->unk48 = 0.0f;
                                    }
                                }
                                if (H->unk35A != 9) {
                                    if ((f64) SQRT_TWO((H->unk35C * H->unk35C) + (H->unk360 * H->unk360) + (H->unk364 * H->unk364), H->unk360) != 0.0) {
                                        COPY_VEC35C(H->unkED8, H->unkEDC, H->unkEE0);
                                    }
                                    if ((f64) H->unk36C >= 1.0) {
                                        H->unk36C = (f32) ((f64) H->unk384 - ((f64) H->unkE40[p[1]] - 1.0));
                                    }
                                    if ((f64) H->unk360 != 0.0) {
                                        if (spA8 < H->unk36C) {
                                            spA8 = H->unk36C;
                                        }
                                        if (H->unk36C != 0.0f) {
                                            H->unkEC4 |= *p;
                                        }
                                    }
                                    if ((H->unk35A == 5) && (H->unkEF5 == 0) && (H->unk28 == 0)) {
                                        H->unkEF8 = H->unk38C;
                                        continue;
                                    } else if (H->unkEF5 == 0) {
                                        H->unkEF8 = 0;
                                        continue;
                                    }
                                }
                            } else {
                                H->unkEF6 = 0;
                            }
                        }
                        break;
                    case 0x2:
                        if (H->unkEF0 & 1) { break; }
                        {
                            if (COLLISION(H->unkD40[p[1]], H->unkD80[p[1]], H->unkDC0[p[1]], H->unkE00[p[1]], H->unkE40[p[1]] + spA8, H->unkE80[p[1]]) != 0) {
                                H->unkEF7 = H->unk35A;
                                if (H->unk35A == 0x12) {
                                    break;
                                } else if (H->unk35A == 0x21) {
                                    break;
                                } else {
                                    if ((f64) SQRT_TWO((H->unk35C * H->unk35C) + (H->unk360 * H->unk360) + (H->unk364 * H->unk364), H->unk360) != 0.0) {
                                        COPY_VEC35C(H->unkEE4, H->unkEE8, H->unkEEC);
                                    }
                                    UPD_X()
                                    UPD_Z()
                                    if ((H->unk368 != 0.0f) || (H->unk370 != 0.0f)) {
                                        H->unkEC4 |= *p;
                                    }
                                    if (!(H->unkEF0 & 0x1000) && (t = s6->unk1C, (t != 0x0168004C)) && (t != 0x0168004F) && (t != 0x01680050) && (t != 0x0168002A) && (t != 0x01680053) && (t != 0x0168003A) && (t != 0x0168003B) && (t != 0x01680051) && (t != 0x01680052) && (H->unkEF8 == 0) && (func_80126944() != 1)) {
                                        if (!(H->unkEF0 & 0x1000) && !(H->unkEF0 & 0x8000) && (H->unk35A == 0x1A)) {
                                            if ((s32) D_8017DC42 > 0) {
                                                t = s6->unk1C;
                                                if ((t != 0x01680012) && (t != 0x01680013) && (t != 0x01680014)) {
                                                    func_801C3B7C(H->unk38C);
                                                    H->unkEF2 = H->unkEF0;
                                                    break;
                                                }
                                            } else {
                                                H->unkEF0 = (u16) (H->unkEF0 | 0x8000);
                                                break;
                                            }
                                        } else if (H->unk35A == 0x15) {
                                            break;
                                        } else if ((H->unk35A == 0xB) && (H->unkEC4 & 1)) {
                                            s1 = 0;
                                            fs1 = (f32) ((f64) H->unkD40[p[1]] + ((f64) func_8001EAD0((s16) (H->unkE0->unk2C->unk12 + 0x800)) * 3.0));
                                            fs0 = (f32) ((f64) H->unkDC0[p[1]] + ((f64) func_8001EB64((s16) (H->unkE0->unk2C->unk12 + 0x800)) * 3.0));
                                            fs2 = func_8001EAD0(H->unkE0->unk2C->unk12);
                                            if ((COLLISION(fs1, H->unkD80[p[1]], fs0, (f32) (((f64) fs2 * 6.0) + (f64) fs1), H->unkE40[p[1]] + spA8, (f32) (((f64) func_8001EB64(H->unkE0->unk2C->unk12) * 6.0) + (f64) fs0)) != 0) && (H->unk35A == 0xB)) {
                                                s1 = 1;
                                            }
                                            fs1 = (f32) ((f64) H->unkD40[p[1]] + ((f64) func_8001EAD0((s16) (H->unkE0->unk2C->unk12 + 0x1800)) * 3.0));
                                            fs0 = (f32) ((f64) H->unkDC0[p[1]] + ((f64) func_8001EB64((s16) (H->unkE0->unk2C->unk12 + 0x1800)) * 3.0));
                                            fs2 = func_8001EAD0(H->unkE0->unk2C->unk12);
                                            if ((COLLISION(fs1, H->unkD80[p[1]], fs0, (f32) (((f64) fs2 * 6.0) + (f64) fs1), H->unkE40[p[1]] + spA8, (f32) (((f64) func_8001EB64(H->unkE0->unk2C->unk12) * 6.0) + (f64) fs0)) != 0) && (H->unk35A == 0xB)) {
                                                s1 = (s1 + 2) & 0xFF;
                                            }
                                            if ((s1 != 1) && (s1 != 2) && (s1 == 3) && (H->unkEF5 == 0)) {
                                                H->unkEF8 = H->unk38C;
                                                H->unkEF5 = (u8) (s1 + 0x27);
                                                continue;
                                            }
                                        } else if ((H->unk35A == 0xC) && (H->unkEC4 & 1)) {
                                            s1 = 0;
                                            fs1 = (f32) ((f64) H->unkD40[p[1]] + ((f64) func_8001EAD0((s16) (H->unkE0->unk2C->unk12 + 0x800)) * 3.0));
                                            fs0 = (f32) ((f64) H->unkDC0[p[1]] + ((f64) func_8001EB64((s16) (H->unkE0->unk2C->unk12 + 0x800)) * 3.0));
                                            fs2 = func_8001EAD0(H->unkE0->unk2C->unk12);
                                            if ((COLLISION(fs1, H->unkD80[p[1]], fs0, (f32) (((f64) fs2 * 6.0) + (f64) fs1), H->unkE40[p[1]] + spA8, (f32) (((f64) func_8001EB64(H->unkE0->unk2C->unk12) * 6.0) + (f64) fs0)) != 0) && (H->unk35A == 0xC)) {
                                                s1 = 1;
                                            }
                                            fs1 = (f32) ((f64) H->unkD40[p[1]] + ((f64) func_8001EAD0((s16) (H->unkE0->unk2C->unk12 + 0x1800)) * 3.0));
                                            fs0 = (f32) ((f64) H->unkDC0[p[1]] + ((f64) func_8001EB64((s16) (H->unkE0->unk2C->unk12 + 0x1800)) * 3.0));
                                            fs2 = func_8001EAD0(H->unkE0->unk2C->unk12);
                                            if ((COLLISION(fs1, H->unkD80[p[1]], fs0, (f32) (((f64) fs2 * 6.0) + (f64) fs1), H->unkE40[p[1]] + spA8, (f32) (((f64) func_8001EB64(H->unkE0->unk2C->unk12) * 6.0) + (f64) fs0)) != 0) && (H->unk35A == 0xC)) {
                                                s1 = (s1 + 2) & 0xFF;
                                            }
                                            if ((s1 != 1) && (s1 != 2) && (s1 == 3) && (H->unkEF5 == 0)) {
                                                H->unkEF8 = H->unk38C;
                                                H->unkEF5 = (u8) (s1 + 0x2A);
                                                continue;
                                            }
                                        } else if (H->unk35A == 0x1B) {
                                            if (H->unkEF5 == 0) {
                                                H->unkEF8 = H->unk38C;
                                                H->unkEF5 = 0xA;
                                                continue;
                                            }
                                        } else if ((H->unk35A == 0x1C) || (H->unk35A == 0x17)) {
                                            sp93 = H->unk35A;
                                            s1 = 0;
                                            fs1 = (f32) ((f64) H->unkD40[p[1]] + ((f64) func_8001EAD0((s16) (H->unkE0->unk2C->unk12 + 0x800)) * 3.0));
                                            fs0 = (f32) ((f64) H->unkDC0[p[1]] + ((f64) func_8001EB64((s16) (H->unkE0->unk2C->unk12 + 0x800)) * 3.0));
                                            fs2 = func_8001EAD0(H->unkE0->unk2C->unk12);
                                            if ((COLLISION(fs1, H->unkD80[p[1]], fs0, (f32) (((f64) fs2 * 6.0) + (f64) fs1), H->unkE40[p[1]] + spA8, (f32) (((f64) func_8001EB64(H->unkE0->unk2C->unk12) * 6.0) + (f64) fs0)) != 0) && (H->unk35A == sp93)) {
                                                s1 = 1;
                                            }
                                            fs1 = (f32) ((f64) H->unkD40[p[1]] + ((f64) func_8001EAD0((s16) (H->unkE0->unk2C->unk12 + 0x1800)) * 3.0));
                                            fs0 = (f32) ((f64) H->unkDC0[p[1]] + ((f64) func_8001EB64((s16) (H->unkE0->unk2C->unk12 + 0x1800)) * 3.0));
                                            fs2 = func_8001EAD0(H->unkE0->unk2C->unk12);
                                            if ((COLLISION(fs1, H->unkD80[p[1]], fs0, (f32) (((f64) fs2 * 6.0) + (f64) fs1), H->unkE40[p[1]] + spA8, (f32) (((f64) func_8001EB64(H->unkE0->unk2C->unk12) * 6.0) + (f64) fs0)) != 0) && (H->unk35A == sp93)) {
                                                s1 = (s1 + 2) & 0xFF;
                                            }
                                            if ((s1 != 1) && (s1 != 2) && (s1 == 3)) {
                                                if (H->unkEF5 == 0) {
                                                    H->unkEF8 = H->unk38C;
                                                    H->unkEF5 = 0xD;
                                                    continue;
                                                } else {
                                                    H->unkEF5 = 0xD;
                                                    continue;
                                                }
                                            }
                                        } else if (H->unk35A == 0xA) {
                                            if (H->unkEF5 == 0) {
                                                H->unkEF8 = H->unk38C;
                                                H->unkEF5 = 0xB;
                                                continue;
                                            }
                                        } else if ((H->unk35A == 6) && (H->unkEF5 == 0)) {
                                            if (func_801C3B20() == 0) {
                                                func_801C3B48(1);
                                                func_801C3B7C(H->unk38C);
                                                arg0->unk40 = 0.0f;
                                                arg0->unk48 = 0.0f;
                                                continue;
                                            }
                                        } else if ((H->unk35A == 7) && (H->unkEF5 == 0)) {
                                            if (func_801C3B20() == 0) {
                                                func_801C3B48(2);
                                                func_801C3B7C(H->unk38C);
                                                arg0->unk40 = 0.0f;
                                                arg0->unk48 = 0.0f;
                                                continue;
                                            }
                                        } else if (H->unkEF5 == 0) {
                                            H->unkEF8 = 0;
                                            continue;
                                        }
                                    }
                                }
                            } else {
                                H->unkEF7 = 0;
                            }
                        }
                        break;
                    case 0x4:
                    case 0x8:
                    case 0x10:
                    case 0x80:
                    case 0x100:
                    case 0x200:
                    case 0x1000:
                    case 0x2000:
                    case 0x4000:
                    case 0x8000:
                        if (H->unkEF0 & 1) { break; }
                        {
                            if (COLLISION(H->unkD40[p[1]], H->unkD80[p[1]], H->unkDC0[p[1]], H->unkE00[p[1]], H->unkE40[p[1]] + spA8, H->unkE80[p[1]]) != 0) {
                                if (H->unk35A == 0x12) {
                                    break;
                                } else if (H->unk35A == 0x21) {
                                    break;
                                } else if (!(H->unkEF0 & 0x1000) && !(H->unkEF0 & 0x8000) && (H->unk35A == 0x1AU)) {
                                    if ((s32) D_8017DC42 > 0) {
                                        t = s6->unk1C;
                                        if ((t != 0x01680012) && (t != 0x01680013) && (t != 0x01680014)) {
                                            func_801C3B7C(H->unk38C);
                                            H->unkEF2 = H->unkEF0;
                                            break;
                                        }
                                    } else {
                                        H->unkEF0 = (u16) (H->unkEF0 | 0x8000);
                                    }
                                }
                                {
                                    if ((f64) SQRT_TWO((H->unk35C * H->unk35C) + (H->unk360 * H->unk360) + (H->unk364 * H->unk364), H->unk360) != 0.0) {
                                        COPY_VEC35C(H->unkEE4, H->unkEE8, H->unkEEC);
                                    }
                                    UPD_X()
                                    UPD_Z()
                                    if ((H->unk368 != 0.0f) || (H->unk370 != 0.0f)) {
                                        H->unkEC4 |= *p;
                                    }
                                }
                            }
                        }
                        break;
                    case 0x400:
                        sp78 = fs5;
                        sp74 = fs4;
                        if (COLLISION(H->unkD40[p[1]], H->unkD80[p[1]], H->unkDC0[p[1]], H->unkE00[p[1]], H->unkE40[p[1]] + spA8, H->unkE80[p[1]]) != 0) {
                            if (H->unk35A == 0x12) {
                                break;
                            } else if (H->unk35A == 0x21) {
                                break;
                            } else if (H->unk35A == 0x1A) {
                                break;
                            } else {
                                if (H->unk368 < 0.0f) { fs2 = -H->unk368; } else { fs2 = H->unk368; }
                                if (fs5 < 0.0f) { fv0 = -fs5; } else { fv0 = fs5; }
                                if (fv0 < fs2) { sp80 = H->unk368; }
                                if (H->unk370 < 0.0f) { fs2 = -H->unk370; } else { fs2 = H->unk370; }
                                if (fs4 < 0.0f) { fv0 = -fs4; } else { fv0 = fs4; }
                                if (fv0 < fs2) { sp7C = H->unk370; }
                                H->unk368 = H->unk380 - H->unkE00[p[1]];
                                H->unk370 = H->unk388 - H->unkE80[p[1]];
                                UPD_X()
                                UPD_Z()
                                if ((H->unk368 != 0.0f) || (H->unk370 != 0.0f)) {
                                    H->unkEC4 |= *p;
                                }
                            }
                        }
                        break;
                    case 0x800:
                        if (COLLISION(H->unkD40[p[1]], H->unkD80[p[1]], H->unkDC0[p[1]], H->unkE00[p[1]], H->unkE40[p[1]] + spA8, H->unkE80[p[1]]) != 0) {
                            if (H->unk35A == 0x12) {
                                break;
                            } else if (H->unk35A == 0x21) {
                                break;
                            } else if (H->unk35A == 0x1A) {
                                break;
                            } else {
                                {s32 w = H->unkEC4;
                                if (w & 0x400) {
                                    H->unk368 = H->unk380 - H->unkE00[p[1]];
                                    H->unk370 = H->unk388 - H->unkE80[p[1]];
                                }
                                UPD_X()
                                UPD_Z()
                                if ((H->unk368 != 0.0f) || (H->unk370 != 0.0f)) {
                                    H->unkEC4 = w | ((struct func_801C5A5C_StructFlag *)p)->flag;
                                }
                                break;}
                            }
                        } else {
                            if (((f64) FABS(sp80) > 0) || ((fs2 = FABS(sp7C)), ((f64) fs2 > 0))) {
                                if ((f64) FABS(sp80) > 0) {
                                    fs5 = sp80;
                                } else {
                                    fs5 = sp78;
                                }
                                if ((f64) FABS(sp7C) > 0) {
                                    fs4 = sp7C;
                                } else {
                                    fs4 = sp74;
                                }
                            }
                        }
                        continue;
                    case 0x20:
                        COLLISION(H->unkD40[p[1]], H->unkD80[p[1]], H->unkDC0[p[1]], H->unkE00[p[1]], (f32) ((f64) H->unkE40[p[1]] + 1.0), H->unkE80[p[1]]);
                        if (H->unk36C != 0.0f) {
                            if (H->unk36C < spA8) {
                                spA8 = H->unk36C;
                            }
                            H->unkEC4 |= *p;
                        }
                        break;
                    case 0x40:
                        if (COLLISION(H->unkD40[p[1]], H->unkD80[p[1]], H->unkDC0[p[1]], H->unkE00[p[1]], H->unkE40[p[1]] + spA8, H->unkE80[p[1]]) != 0) {
                            if ((H->unk35A == 0xD) && ((t = s6->unk1C, (t == 0x0168003F)) || (t == 0x01680040))) {
                                spA8 = 2.5f;
                                break;
                            }
                            if ((H->unk35A != 0x12) && (H->unk35A != 0x21)) {
                                if (((f64) H->unk35C != 0.0f) || ((f64) H->unk364 != 0.0)) {
                                    H->unk368 = H->unk380 - H->unkE00[p[1]];
                                    H->unk370 = H->unk388 - H->unkE80[p[1]];
                                }
                                UPD_X()
                                UPD_Z()
                                if ((H->unk368 != 0.0f) || (H->unk370 != 0.0f)) {
                                    H->unkEC4 |= *p;
                                }
                            }
                        }
                        {
                            fa0 = H->unkE00[p[1]] + fs5;
                            fv0 = H->unkE80[p[1]] + fs4;
                            if ((COLLISION(fa0, H->unkD80[p[1]], fv0, fa0, (f32) ((f64) H->unkE40[p[1]] - 1.0), fv0) != 0) && (H->unk35A != 9)) {
                                if ((f64) H->unk36C >= 1.0) {
                                    H->unk36C = (f32) ((f64) H->unk384 - ((f64) H->unkE40[p[1]] - 1.0));
                                }
                                if ((f64) H->unk360 != 0.0) {
                                    if (spA8 < H->unk36C) {
                                        spA8 = H->unk36C;
                                    }
                                    if (H->unk36C != 0.0f) {
                                        H->unkEC4 |= 1;
                                    }
                                }
                            }
                        }
                        break;
                    }
                }
            }
        }
    }
    if ((H->unkEC4 & 1) && (H->unkEC4 & 0x20)) {
        H->unkE0->unk2C->unk4 = D_801E4020[3];
        H->unkE0->unk2C->unk8 = D_801E4020[4];
        H->unkE0->unk2C->unkC = D_801E4020[5];
        return 0;
    }
    if (arg0->unk2C & 0x200) {
        if ((H->unkEF6 == 0x16) || (H->unkEF6 == 0x1A)) {
            spA8 = 0.0f;
        }
        *sp9C += fs5;
        *sp98 += spA8;
        *sp94 += fs4;
        return ((struct func_801C5A5C_StructResult *)&D_801BBBF0)->flags;
    }
    return 0;
}
