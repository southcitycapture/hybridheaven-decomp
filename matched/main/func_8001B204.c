#include "common.h"
extern u8 D_80090E48;
extern u8 D_80090E49;
extern u8 D_80090E4A;
extern u8 D_80090E4B;
extern u8 D_80090E4C;
extern u8 D_80090E4D;
extern u8 D_80090E4E;
extern u8 D_80090E4F;
typedef struct func_8001BC04_Struct {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    u8 unk8;
} func_8001BC04_Struct;
s32 func_8001BC04(u8 arg0, u16 arg1, func_8001BC04_Struct *arg2, u16 arg3);
void func_8001D69C(s32 arg0, u8 arg1, s8 *arg2);
void func_8001DBC8(s32 arg0, u8 arg1, s8 *arg2);


typedef struct func_8001B204_Tbl { u16 a[96]; } func_8001B204_Tbl;
typedef struct func_8001B204_S10 { u16 a[5]; } func_8001B204_S10;
typedef struct func_8001B204_S8 { u16 a[4]; } func_8001B204_S8;
typedef struct func_8001B204_Ent {
    u8 f0;
    u8 f1;
    s16 s2;
    s16 s4;
    u16 s6;
    u8 b8;
    u8 pad[0x111];
} func_8001B204_Ent;

extern func_8001B204_Tbl D_80044548;
extern func_8001B204_S10 D_80044608;
extern func_8001B204_S8 D_80044614;
extern func_8001B204_Ent D_8008EF70__e[];
#define ENT D_8008EF70__e


#define GETARG(T) (*(T *)((ap = (u8 *)(((u32)ap + 3) & ~3) + 4) - 4))
#define CHLOOP(CASEEXTRA, SRCINC) \
    while (c != 0 && x < 0x101) { \
        if (c >= 0x20 && c < 0x80) { \
            ch = tbl.a[c - 0x20]; \
        } else { \
            SRCINC \
            ch = (*s++ + (c << 8)) & 0xFFFF; \
        } \
        CASEEXTRA \
        if (func_8001BC04(arg0, x, (func_8001BC04_Struct *)((u8 *)&ENT[arg0] + 0x12 + j * 8), ch) != 0) { \
            r = (r + D_80090E4D) & 0xFFFF; \
        } \
        c = *s++; \
        x = (x + D_80090E4C) & 0xFFFF; \
        j++; \
    }

s32 func_8001B204(u8 arg0, s16 arg1, s16 arg2, u8 *arg3, ...) {
    u8 *s;
    u8 *p;
    u8 c;
    u16 x;
    u16 r;
    s32 i;
    s32 j;
    u16 ch;
    u8 buf[8];
    u8 sp133;
    func_8001B204_Ent *e;
    u16 sp12A;
    u8 sp129;
    u8 *ap;
    func_8001B204_Tbl tbl = D_80044548;
    func_8001B204_S10 s58 = D_80044608;
    func_8001B204_S8 s50 = D_80044614;
    u8 first;
    if (arg0 >= 0x1C) return 0;
    D_80090E48 = 0;
    D_80090E49 = 0;
    D_80090E4A = 0xFF;
    D_80090E4B = 0;
    D_80090E4C = 0;
    D_80090E4D = 0;
    D_80090E4E = 0;
    D_80090E4F = 0;
    sp12A = 0;
    sp129 = 0;
    ap = (u8 *)(&arg3 + 1);
    x = 0;
    r = 0;
    if (*arg3 == 0) {
        e = &ENT[arg0];
        e->f0 = 1;
        e->f1 = 0;
        e->s2 = 0;
        e->s4 = 0;
        e->s6 = 0;
        *(func_8001B204_S10 *)((u8 *)e + 8) = s58;
        *(func_8001B204_S8 *)((u8 *)e + 0x12) = s50;
    } else {
        c = *arg3;
        i = 0;
        j = 0;
        if (c != 0) {
            do {
                if (c != '%') {
                    if (c >= 0x20 && c < 0x80) {
                        ch = tbl.a[c - 0x20];
                    } else {
                        i++; ch = (arg3[i] + (c << 8)) & 0xFFFF;
                    }
                    if (func_8001BC04(arg0, x, (func_8001BC04_Struct *)((u8 *)&ENT[arg0] + 0x12 + j * 8), ch) != 0) {
                        r = (r + D_80090E4D) & 0xFFFF;
                    }
                    j++;
                    x = (x + D_80090E4C) & 0xFFFF;
                    p = arg3 + i;
                } else {
                    i++;
                    c = arg3[i];
                    sp133 = 0;
                    if (c == 's') {
                        s = GETARG(u8 *);
                        c = *s++;
                        CHLOOP(, )
                        c = 's';
                    }
                    s = buf;
                    if (c == '0') {
                        i++;
                        p = arg3 + i;
                        c = *p;
                        if (c == '1') sp133 = 1;
                        if (c == '2') sp133 = 2;
                        if (c == '3') sp133 = 3;
                        if (c == '4') sp133 = 4;
                        if (c == '5') sp133 = 5;
                        if (c == '6') sp133 = 6;
                        if (c == '7') sp133 = 7;
                        if (c == '8') sp133 = 8;
                        if (c == '9') sp133 = 9;
                        i++;
                        p = arg3 + i;
                        c = *p;
                    }
                    if (c == 'x') {
                        func_8001DBC8(GETARG(s32), sp133, buf);
                        c = buf[0];
                        s = (buf + 1);
                        CHLOOP(, i++;)
                        c = 'x';
                    }
                    if (c == 'd') {
                        func_8001D69C(GETARG(s32), sp133, s);
                        c = *s++;
                        CHLOOP(, i++;)
                        c = 'd';
                    }
                    if (c == 'o') {
                        func_8001D69C(GETARG(s32), sp133, s);
                        c = *s++;
                        CHLOOP(if (ch == 0xA1A1) ch = 0xA3B0;, i++;)
                        c = 'd';
                    }
                    p = arg3 + i;
                    if (c == 'm') D_80090E48 = GETARG(s32);
                    if (c == 'p') D_80090E4B = GETARG(s32);
                    if (c == 'w') D_80090E4D = GETARG(s32);
                    if (c == 'f') D_80090E4E = GETARG(s32);
                    if (c == 'c') sp12A = GETARG(s32);
                    if (c == 'a') D_80090E4A = GETARG(s32);
                    if (c == 'h') D_80090E4F = GETARG(s32);
                    if (c == 'q') sp129 = GETARG(s32);
                }
                i++;
                c = *++p;
            } while (c != 0 && x < 0x101);
        }
        e = &ENT[arg0];
        e->s2 = arg1;
        e->f0 = 1;
        e->f1 = 1;
        e->s4 = arg2;
        e->s6 = sp12A;
        e->b8 = sp129;
        if (e->s2 == 0x7D0) {
            if (x >= 0x101) {
                x = (x - D_80090E4C) & 0xFFFF;
            }
            e->s2 = (0x140 - x) / 2;
        }
        if (e->s2 >= 0x349) {
            if (x >= 0x101) {
                x = (x - D_80090E4C) & 0xFFFF;
            }
            e->s2 = e->s2 - x / 2 - 0x3E8;
        }
    }
    return r;
}
