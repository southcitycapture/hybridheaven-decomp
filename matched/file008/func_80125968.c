#include "common.h"
extern u8 D_80037744[];
extern u8 D_8008D54C[];
extern s32 D_8008D558[];
extern u16 **D_80171CEC[];
typedef struct func_801262D4_Struct {
    s32 unk0;
    s32 unk4;
    u16 unk8;
} func_801262D4_Struct;
extern func_801262D4_Struct *D_80175490[];
extern u8 D_801BBBF0[];
void func_801257DC(void);
u16 func_80125808(u16 arg0);

extern s32 func_80016F90(void);
extern s32 func_80017014(s32);
extern u16 func_8012FF4C(void);
extern void func_80020718(u16);
extern void func_80151B98(s32);
extern void func_80151C08(u8);
extern void func_80151C40(u8);
extern s32 func_80151C34(void);
extern void func_80152608(void);
extern s32 func_80151BFC(void);
extern void func_801BF610(s32);
extern void func_801BF61C(s32);
extern s16 D_8017DC40;
extern s16 D_8017DC42;

#define B(o) (*(s8 *)(D_801BBBF0 + (o)))
#define H(o) (*(u16 *)(D_801BBBF0 + (o)))
#define F(o) (*(f32 *)(D_801BBBF0 + (o)))
typedef struct func_80125968_StructState {
    u8 pad0[4];
    u8 flag;
    u8 pad1[0x14];
    u8 running;
    u8 pad2[2];
    s32 unk1C;
} func_80125968_StructState;
#define ST ((func_80125968_StructState *)D_8008D558)
#define CUR (*(s16 **)(D_8008D54C + 8))

s32 func_80125968(u16 arg0, u16 arg1)
{
    s32 op;
    s32 u2;
    s16 *p;
    s16 *saved;
    func_801262D4_Struct *obj;

    obj = D_80175490[arg0];
    if (D_8008D54C[0x25] == 0) {
        p = *(s16 **)((u8 *)obj + 0xC);
        *(s32 *)(D_8008D54C + 0x28) = 0;
        if (D_8008D54C[4] != 0) {
            ST->running = 1;
        }
    } else {
        p = CUR;
    }
    while (*p != -1) {
        op = *p;
        saved = p;
        switch (op) {
        case 15:
            p++;
            if (!func_80017014(func_80016F90()) && !func_80125808(*p)) {
                CUR = saved;
                return 0;
            }
            break;
        case 10:
            p++;
            if (!(*p & *(u16 *)&arg1)) {
                p++;
                break;
            }
        case 1:
            p++;
            if (!func_80017014(func_80016F90())) {
                if (ST->flag == 0) {
                    if (!func_80125808((*D_80171CEC[*p])[0] & 0x0FFFFFFF)) {
                        CUR = saved;
                        return 0;
                    }
                    ST->flag = 1;
                }
                if (ST->flag == 1) {
                    if (!func_80125808((*D_80171CEC[*p])[1] & 0x0FFFFFFF)) {
                        CUR = saved;
                        return 0;
                    }
                    ST->flag = 0;
                }
            }
            break;
        case 17:
            if (24 != func_8012FF4C()) {
                F(0x198) = *++p;
                F(0x19C) = *++p;
                F(0x1A0) = *++p;
                H(0x32) = *++p;
                if (D_80037744) { }
                if (D_80037744[0] != 0) { }
            } else {
                p += 4;
            }
            break;
        case 3:
            if (24 != func_8012FF4C()) {
                F(0x198) = *++p;
                F(0x19C) = *++p;
                F(0x1A0) = *++p;
                H(0x32) = 0;
            } else {
                p += 3;
            }
            break;
        case 21:
            if (24 != func_8012FF4C()) {
                F(0x111C) = *++p;
                F(0x1120) = *++p;
                F(0x1124) = *++p;
                F(0x1128) = *++p;
                if (D_80037744) { }
                if (D_80037744[0] != 0) { }
            } else {
                p += 4;
            }
            break;
        case 20:
            if (24 != func_8012FF4C()) {
                F(0x111C) = *++p;
                F(0x1120) = *++p;
                F(0x1124) = *++p;
                F(0x1128) = 0;
            } else {
                p += 3;
            }
            break;
        case 4:
            D_801BBBF0[0xF20] = *++p;
            D_801BBBF0[0xF21] = *++p;
            D_801BBBF0[0xF22] = *++p;
            D_801BBBF0[0xF36] = D_801BBBF0[0xF20];
            D_801BBBF0[0xF37] = D_801BBBF0[0xF21];
            D_801BBBF0[0xF38] = D_801BBBF0[0xF22];
            break;
        case 5:
            D_801BBBF0[0xF23] = *++p;
            D_801BBBF0[0xF24] = *++p;
            D_801BBBF0[0xF25] = *++p;
            D_801BBBF0[0xF39] = D_801BBBF0[0xF23];
            D_801BBBF0[0xF3A] = D_801BBBF0[0xF24];
            D_801BBBF0[0xF3B] = D_801BBBF0[0xF25];
            break;
        case 6:
            B(0xF26) = *++p;
            B(0xF27) = *++p;
            B(0xF28) = *++p;
            B(0xF3C) = B(0xF26);
            B(0xF3D) = B(0xF27);
            B(0xF3E) = B(0xF28);
            break;
        case 7:
            D_801BBBF0[0xF29] = *++p;
            D_801BBBF0[0xF2A] = *++p;
            D_801BBBF0[0xF2B] = *++p;
            D_801BBBF0[0xF3F] = D_801BBBF0[0xF29];
            D_801BBBF0[0xF40] = D_801BBBF0[0xF2A];
            D_801BBBF0[0xF41] = D_801BBBF0[0xF2B];
            break;
        case 8:
            B(0xF2C) = *++p;
            B(0xF2D) = *++p;
            B(0xF2E) = *++p;
            B(0xF42) = B(0xF2C);
            B(0xF43) = B(0xF2D);
            B(0xF44) = B(0xF2E);
            break;
        case 9:
            D_801BBBF0[0xF32] = *++p;
            D_801BBBF0[0xF33] = *++p;
            D_801BBBF0[0xF34] = *++p;
            D_801BBBF0[0xF35] = *++p;
            D_801BBBF0[0xF45] = D_801BBBF0[0xF32];
            D_801BBBF0[0xF46] = D_801BBBF0[0xF33];
            D_801BBBF0[0xF47] = D_801BBBF0[0xF34];
            D_801BBBF0[0xF48] = D_801BBBF0[0xF35];
            break;
        case 14:
            p++;
            if (9 != func_8012FF4C() && 24 != func_8012FF4C() &&
                30 != func_8012FF4C() && 31 != func_8012FF4C() && 29 != func_8012FF4C()) {
                H(6) = *p;
            }
            break;
        case 13:
            while (*++p != 0) {
                if (9 != func_8012FF4C() && 24 != func_8012FF4C() &&
                    30 != func_8012FF4C() && 31 != func_8012FF4C() && 29 != func_8012FF4C()) {
                    func_80020718(*p);
                }
            }
            break;
        case 19:
            func_80151B98(2);
            func_80151C08(p[1]);
            func_80151C40(p[2]);
            switch (func_80151C34()) {
            case 2:
                D_8017DC40 = 0x555;
                D_8017DC42 = 0x555;
                break;
            case 0:
            case 3:
                func_80152608();
                break;
            }
            if (func_80151BFC() == 0) {
                switch (H(0x2C)) {
                case 4:
                    func_80020718(0x6D);
                    break;
                case 5:
                case 10:
                case 11:
                case 15:
                    func_80020718(0x6E);
                    break;
                }
            }
            p += 2;
            break;
        case 11:
            B(0x2AD) = *++p;
            B(0x2AE) = *++p;
            B(0x2B5) = *++p;
            F(0x2C0) = *++p;
            F(0x2CC) = *++p;
            F(0x2D8) = *++p;
            F(0x2E8) = *++p;
            F(0x2F4) = *++p;
            F(0x300) = *++p;
            B(0x298) = 1;
            break;
        case 12:
            func_801BF610(*++p);
            func_801BF61C(*++p);
            break;
        case 18:
            F(0x29C) = *++p;
            F(0x2A0) = *++p;
            F(0x2A4) = F(0x29C);
            F(0x2A8) = F(0x2A0);
            break;
        case 16:
            if (H(6) && (p[3] & H(6))) {
                F(0x29C) = p[1];
                F(0x2A0) = p[2];
            }
            F(0x2A4) = F(0x29C);
            F(0x2A8) = F(0x2A0);
            p += 3;
            break;
        default:
            p++;
            break;
        }
        p++;
    }
    func_801257DC();
    return 1;
}
