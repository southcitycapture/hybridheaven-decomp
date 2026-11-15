#include "common.h"
extern u8 D_800692B0[];
extern u8 *D_801812E8[];
extern u8 D_801BEB84[];
extern u8 D_801BEBAC[];
extern s8 D_801BEBCC;
extern u8 D_801BEBCD;
extern u8 D_801BEBFF;
extern u8 D_801BEC00;
extern u8 D_801BEC01;
extern s8 D_801BEC03;
extern s8 D_801BEC04;
extern s8 D_801BEC05;
extern s32 func_80002BE0(u8);
s32 func_80002DBC(u8, s32, u8 *);
s32 func_800178E8();                                /* extern */
extern void func_80142B28(u8, u8);


typedef struct func_8013EFF0_StructPair { u8 *p[2]; } func_8013EFF0_StructPair;
extern func_8013EFF0_StructPair D_80181468;
extern func_8013EFF0_StructPair D_80181470;
extern func_8013EFF0_StructPair D_80181478;
extern void func_8013ECE0(u8, u8);
extern void func_8013EE48(u8, u8);
extern void func_8013EEF8(u8);
extern void func_80140E88(u8, u8, s32);
extern void func_80140FC8(u8, s32, s32);
extern s32 func_8014150C(u8, u8 *);
extern s32 func_80141934(u8);
extern u8 func_801424D0(u8, u8, u8);
extern u16 D_80089494;
extern u8 D_801812D8[];
extern void func_80142F2C(s32);
extern void D_8014307C(u8, u8, void *);
extern s32 func_80143B5C(void);
extern void func_800023A8(s32);
extern void func_80017990(void *);
extern void func_80002D00(u8);

#define PRESS (*(u16 *)(D_800692B0 + (i << 5) + 0x201C8) & 0xB000)
#define TOGGLE(n) \
    if (*(u16 *)(D_800692B0 + (i << 5) + 0x201D0) & 0xC00) { \
        *choices.p[i] += 1; *choices.p[i] &= 1; \
        func_8013EE48(i, *choices.p[i] + (n)); \
    }
#define START(state, text, sel) \
    case (state): if (PRESS) { func_8013ECE0(i, text); \
        func_8013EE48(i, sel); *choices.p[i] = 0; *states.p[i] = (state)+1; } break;
#define ENDSTATE(state) \
    case (state): if (PRESS) { func_8013ECE0(i, 20); *states.p[i] = 254; } break;
#define RESET(state) \
    case (state): if (PRESS) *states.p[i] = 0; break;
#define CHOOSE(state, base, text0, next0, text1, next1) \
    case (state): TOGGLE(base) if (PRESS) { func_8013EEF8(i); \
        if (*choices.p[i] == 0) { func_8013ECE0(i, text0); *states.p[i] = next0; } \
        else { func_8013ECE0(i, text1); *states.p[i] = next1; } } break;

s32 func_8013EFF0(void)
{
    s32 i;
    u8 result;
    func_8013EFF0_StructPair states;
    func_8013EFF0_StructPair values;
    func_8013EFF0_StructPair choices;

    states = D_80181468;
    values = D_80181470;
    choices = D_80181478;
    if (!func_800178E8()) return 0;
    if ((u8)D_801BEC03 == 1) {
        func_80142F2C(0);
        if (func_80143B5C()) D_801BEC03 = 0;
        return 0;
    }
    if (D_801BEBFF == 1) {
        func_80142F2C(1);
        if (func_80143B5C()) D_801BEBFF = 0;
        return 0;
    }
    if (D_80089494 == 0 && D_801BEBCD == 0) {
        func_8013ECE0(0, 21);
        D_801BEBCC = 1;
        D_801BEBCD = 5;
    }
    for (i = 0; i != 2; i++) {
        if ((u8)D_801BEC03 == 1 || D_801BEBFF == 1) return 0;
        switch (*states.p[i]) {
        case 0:
            *values.p[i] = func_80002BE0(i);
            if (*values.p[i] == 2) *values.p[i] = func_80002BE0(i);
            switch (*values.p[i]) {
            case 0: *states.p[i] = 100; break;
            case 1: func_8013ECE0(i, 3); *states.p[i] = 10; break;
            case 3: func_8013ECE0(i, 5); *states.p[i] = 20; break;
            case 4: case 5: func_8013ECE0(i, 9); *states.p[i] = 30; break;
            case 7: func_8013ECE0(i, 8); *states.p[i] = 40; break;
            case 15: func_8013ECE0(i, 7); *states.p[i] = 40; break;
            }
            D_8014307C(i, 255, D_801812E8[i]);
            break;
        case 1: if (PRESS) D_801BEBCC = 2; break;
        case 2: func_800023A8(0); func_800023A8(1); D_801BEBCC = 3; break;
        case 3: func_80017990(D_801812D8); D_801BEBCC = 4; break;
        case 4: return 2;
        START(10, 1, 1)
        case 11:
            TOGGLE(1)
            if (PRESS) {
                func_8013EEF8(i);
                if (*choices.p[i] == 0) {
                    func_8013ECE0(i, 2);
                    *states.p[i] = 12;
                } else {
                    func_8013ECE0(i, 4);
                    *states.p[i] = 13;
                }
            }
            break;
        ENDSTATE(12)
        RESET(13)
        START(20, 1, 1)
        case 21:
            TOGGLE(1)
            if (PRESS) {
                func_8013EEF8(i);
                if (*choices.p[i] == 0) {
                    func_8013ECE0(i, 2);
                    *states.p[i] = 22;
                } else {
                    func_8013ECE0(i, 6);
                    *states.p[i] = 23;
                }
            }
            break;
        ENDSTATE(22)
        RESET(23)
        START(30, 10, 2)
        case 31:
            TOGGLE(2)
            if (PRESS) {
                func_8013EEF8(i);
                if (*choices.p[i] == 0) { func_8013ECE0(i, 6); *states.p[i] = 32; }
                else { func_8013ECE0(i, 11); func_8013EE48(i, 2); *choices.p[i] = 0; *states.p[i] = 33; }
            }
            break;
        RESET(32)
        case 33:
            TOGGLE(2)
            if (PRESS) {
                func_8013EEF8(i);
                if (*choices.p[i] == 0) { func_8013ECE0(i, 1); func_8013EE48(i, 1); *choices.p[i] = 0; *states.p[i] = 34; }
                else { func_80002D00(i); *states.p[i] = 0; }
            }
            break;
        case 34:
            TOGGLE(1)
            if (PRESS) {
                func_8013EEF8(i);
                if (*choices.p[i] == 0) {
                    func_8013ECE0(i, 2);
                    *states.p[i] = 35;
                } else {
                    func_8013ECE0(i, 6);
                    *states.p[i] = 36;
                }
            }
            break;
        ENDSTATE(35)
        RESET(36)
        START(40, 1, 1)
        case 41:
            TOGGLE(1)
            if (PRESS) {
                func_8013EEF8(i);
                if (*choices.p[i] == 0) {
                    func_8013ECE0(i, 2);
                    *states.p[i] = 42;
                } else {
                    func_8013ECE0(i, 4);
                    *states.p[i] = 43;
                }
            }
            break;
        ENDSTATE(42)
        RESET(43)
        case 100:
            if (func_80002DBC(i, 0, &result) == 9) { func_8013ECE0(i, 12); *states.p[i] = 101; }
            else if (func_80141934(i + 1) == 253) { func_8013ECE0(i, 14); *states.p[i] = 101; }
            else { func_8013ECE0(i, 15); *states.p[i] = 200; }
            break;
        START(101, 1, 1)
        case 102:
            TOGGLE(1)
            if (PRESS) {
                func_8013EEF8(i);
                if (*choices.p[i] == 0) {
                    func_8013ECE0(i, 2);
                    *states.p[i] = 103;
                } else {
                    func_8013ECE0(i, 13);
                    *states.p[i] = 104;
                }
            }
            break;
        ENDSTATE(103)
        RESET(104)
        case 200:
            if (i == 0) { D_801BEC04 = 0; D_801BEC05 = 0; }
            else { D_801BEC00 = 0; D_801BEC01 = 0; }
            result = func_8014150C(i + 1, D_801812E8[i]);
            D_8014307C(i, result, D_801812E8[i]);
            *states.p[i] = 201;
            break;
        case 201:
            if (*(u16 *)(D_800692B0 + (i << 5) + 0x201D0) & 0xC00) { }
            if (i == 0) { func_80140E88(0, 4, (s32)D_801812E8[0]); func_80142B28(0, (u8)D_801BEC04); }
            else { func_80140FC8(1, 4, (s32)D_801812E8[1]); func_80142B28(1, D_801BEC00); }
            if (PRESS) { func_8013ECE0(i, 17); func_8013EE48(i, 1); *choices.p[i] = 0; *states.p[i] = 202; }
            break;
        case 202:
            TOGGLE(1)
            if (PRESS) {
                func_8013EEF8(i);
                if (*choices.p[i] == 1) { func_8013ECE0(i, 15); *states.p[i] = 200; }
                else {
                    *states.p[i] = 204;
                    if (D_801BEB84[(u8)D_801BEC05 * 8] == 0 && i == 0) { func_8013ECE0(i, 16); *states.p[i] = 203; }
                    if (D_801BEBAC[D_801BEC01 * 8] == 0 && i == 1) { func_8013ECE0(i, 16); *states.p[i] = 203; }
                }
            }
            break;
        case 203: if (PRESS) { func_8013ECE0(i, 15); *states.p[i] = 200; } break;
        case 204:
            if (i == 0) result = func_801424D0(0, (u8)D_801BEC05, 0);
            else result = func_801424D0(i, D_801BEC01, i);
            if (result == 0) { func_8013ECE0(i, 19); *states.p[i] = 207; }
            else { func_8013ECE0(i, 18); *states.p[i] = 205; }
            break;
        START(205, 1, 1)
        case 206:
            TOGGLE(1)
            if (PRESS) {
                func_8013EEF8(i);
                if (*choices.p[i] == 0) {
                    func_8013ECE0(i, 2);
                    *states.p[i] = 207;
                } else {
                    func_8013ECE0(i, 13);
                    *states.p[i] = 208;
                }
            }
            break;
        ENDSTATE(207)
        RESET(208)
        case 254: break;
        case 255: break;
        }
    }
    if (D_801BEBCD == 255 && (u8)D_801BEBCC == 255) {
        func_800023A8(0); func_800023A8(1); return 1;
    }
    if (D_801BEBCD == 254 && (u8)D_801BEBCC == 254) {
        func_8013ECE0(0, 0); *(u8 *)&D_801BEBCC = 255;
        func_8013ECE0(1, 0); D_801BEBCD = 255;
        func_80017990(D_801812D8);
    }
    return 0;
}
