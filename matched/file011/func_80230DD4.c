#include "common.h"
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_802176F0[];
struct func_8022F680_Ret {
    u8 pad0[0x90];
    u8 unk90;
};
extern struct func_8022F680_Ret *func_80005670();
s32 func_8022B640(u16 arg0);
struct func_8022DA7C_C { u8 pad[0x12]; s16 u12; };
struct func_8022DA7C_B { u8 pad[0x2C]; struct func_8022DA7C_C *u2C; };
struct func_8022DA7C_A { u8 pad[0x24]; struct func_8022DA7C_B *u24; };
s32 func_8022DA7C(struct func_8022DA7C_A *arg0);
struct func_8022F248_Struct {
    u8 pad0[0x8E];
    u16 unk8E[6];
    u8 pad1[0x2B8 - 0x9A];
    s16 unk2B8[6];
    u8 pad2[0x2F0 - 0x2C4];
    u8 unk2F0;
};
void func_8022F248(struct func_8022F248_Struct *arg0, u16 arg1);


extern u8 D_8038972C[];
extern u8 D_801842A5[];
extern void func_80020718(s32);
extern s32 func_8013D3F8(void *);
extern void func_8023011C(u16);

#define BYTE(p,n) (((u8 *)(p))[n])
#define HALF(p,n) (*(s16 *)((u8 *)(p)+(n)))
#define UHALF(p,n) (*(u16 *)((u8 *)(p)+(n)))
#define PTR(p,n) (*(u8 **)((u8 *)(p)+(n)))
#define FLOAT(p,n) (*(f32 *)((u8 *)(p)+(n)))
#define SCALE(n) \
    shift = BYTE(PTR(arg3,0x334),n); damage = (s16)((f32)damage * (f32)(u32)(u8)shift / 100.0f + 0.5); \
    break;

s32 func_80230DD4(s32 arg0, u16 arg1, u16 arg2, u8 *arg3)
{
    s32 fl;
    u8 *other;
    s16 damage;
    u8 *effect;
    f32 f;
    f32 g;
    u8 *info;
    s32 shift;

    if (D_801BBBF0 == arg3 - 0x44C) other = D_801BC3D8;
    else other = D_801BC03C;
    damage = arg1 - arg2;
    if (D_801BBBF0 == arg3 - 0x44C) info = PTR(D_801BBBF0,0x444);
    else info = PTR(D_801BBBF0,0x448);
    if (damage < 0) damage = 0;
    if (UHALF(other,0x300) < 100 && BYTE(other,0x2D9) < 0x52) {
        g = UHALF(other,0x300) % 100;
        damage = (s16)((f32)damage * g / 100.0f + 0.5);
    }
    if (BYTE(other,0x2D8) < 2) {
        f = FLOAT(other,0x2F4);
        damage = (s16)((f32)damage * f + 0.5);
        if (f <= 0.33333) {
            effect = (u8 *)func_80005670(arg0,D_8038972C);
            BYTE(effect,0x90) = 1;
            damage /= 2;
        } else if (f >= 1.0) {
            BYTE(other,0x30C)++;
            if (UHALF(other,0x300) >= 100) {
                if (((s8 *)other)[0x2D] % (64-((UHALF(other,0x302) < 20) ? 32 : 0)) == 0) {
                    damage = (s16)((f32)damage * 2.0 + 0.5);
                    func_80005670(arg0,D_8038972C)->unk90 = 0;
                    func_80020718(0x21B);
                }
            }
        }
        if (func_8022DA7C((struct func_8022DA7C_A *)(other == D_801BBBF0+0x44C ? PTR(D_801BBBF0,0xEC) : PTR(D_801BBBF0,0xDC))) == 0) {
            damage = (s16)((f32)damage * 1.5 + 0.5);
        }
    } else if (BYTE(arg3,0x2DB) == 0) {
        BYTE(other,0x30C)++;
    }
    if (BYTE(other,0x2DD) && (BYTE(other,0x2D8) == 0 || BYTE(other,0x2D8) == 1)) {
        damage = (s16)(damage * 1.5);
        BYTE(arg3,0x2DB) = 0;
    }
    if (arg3 == D_801BBBF0+0x7E8 && BYTE(PTR(D_801BBBF0,0x448),0x74) == 3) {
        switch (BYTE(other,0x2D9)) {
        case 0: case 1: case 8: case 9: case 85:
            SCALE(0x5B)
        case 2: case 3: case 10: case 11:
            SCALE(0x5C)
        case 4: case 5: case 12: case 13: case 84:
            SCALE(0x5E)
        case 6: case 7:
            SCALE(0x5D)
        case 26: case 27: case 28: case 29: case 30: case 31:
            SCALE(0x5F)
        case 14: case 15: case 16: case 17: case 18: case 19: case 80: case 81:
            SCALE(0x60)
        case 20: case 21: case 22: case 23: case 24: case 25:
            SCALE(0x62)
        case 32: case 33: case 35: case 36: case 82: case 83:
            SCALE(0x61)
        case 57: case 58: case 59: case 60: case 61:
            SCALE(0x64)
        case 56: case 65: case 66: case 67: case 68: case 69: case 70:
        case 71: case 72: case 73: case 74: case 75: case 76:
            SCALE(0x65)
        default:
            SCALE(0x63)
        }
    }
    if (BYTE(other,0x2D8) < 11) {
        switch (BYTE(info,0x75)) {
        case 1:
            if (BYTE(other,0x2D9) < 14 || BYTE(other,0x2D9) == 84 || BYTE(other,0x2D9) == 85)
                damage = (s16)((f32)damage * 1.02 + 0.5);
            else if (BYTE(other,0x2D9) < 37 || BYTE(other,0x2D9) == 82 || BYTE(other,0x2D9) == 83 || BYTE(other,0x2D9) == 80 || BYTE(other,0x2D9) == 81)
                damage = (s16)((f32)damage * 0.95 + 0.5);
            else damage = (s16)((f32)damage * 1.02 + 0.5);
            break;
        case 2:
            if (BYTE(other,0x2D9) < 14 || BYTE(other,0x2D9) == 84 || BYTE(other,0x2D9) == 85)
                damage = (s16)((f32)damage * 1.02 + 0.5);
            else if (BYTE(other,0x2D9) < 37 || BYTE(other,0x2D9) == 82 || BYTE(other,0x2D9) == 83 || BYTE(other,0x2D9) == 80 || BYTE(other,0x2D9) == 81)
                damage = (s16)((f32)damage * 1.02 + 0.5);
            else damage = (s16)((f32)damage * 0.95 + 0.5);
            break;
        case 3:
            if (BYTE(other,0x2D9) < 14 || BYTE(other,0x2D9) == 84 || BYTE(other,0x2D9) == 85)
                damage = (s16)((f32)damage * 0.95 + 0.5);
            else if (BYTE(other,0x2D9) < 37 || BYTE(other,0x2D9) == 82 || BYTE(other,0x2D9) == 83 || BYTE(other,0x2D9) == 80 || BYTE(other,0x2D9) == 81)
                damage = (s16)((f32)damage * 1.02 + 0.5);
            else damage = (s16)((f32)damage * 1.02 + 0.5);
            break;
        }
    }
    damage = (100 - func_8013D3F8(other)) * damage / 100;
    damage += func_8022B640(damage / 10);
    fl = BYTE(D_801BBBF0,0x1033);
    if (fl & 7) damage = damage * (8 - fl) / 8;
    if (BYTE(arg3,0x2DB)) {
        if (BYTE(arg3,0x2D8) == 13) damage = (s16)((f32)damage / 3.0f + 0.5);
        else if (BYTE(arg3,0x2D8) == 18) damage = (s16)((f32)damage * 0.4 + 0.5);
        else if (BYTE(arg3,0x2D8) != 14 && BYTE(arg3,0x2D8) != 20 && BYTE(other,0x2D8) != 16) damage = 0;
    }
    if (damage >= 10000) damage = 9999;
    if ((fl & 8) && D_801BBBF0 == arg3 - 0x44C) damage = 0;
    func_8023011C(damage);
    HALF(arg3,0x40) = damage;
    UHALF(arg3,0x9A) = damage;
    effect = (u8 *)func_80005670(arg0,D_802176F0);
    UHALF(effect,0x94) = damage;
    if (D_801BBBF0 == arg3 - 0x44C) BYTE(effect,0x96) = 0;
    else BYTE(effect,0x96) = 1;
    BYTE(effect,0x97) = 0;
    BYTE(effect,0x98) = 1;
    damage = (s16)((f32)(u32)D_801842A5[BYTE(other,0x2D9)*28] * (f32)damage / 100.0f + 0.5);
    func_8022F248((struct func_8022F248_Struct *)arg3, damage);
    return (u16)damage;
}

/* later callers in the file use the (s32, u16, s32, void *) prototype */
extern s32 D_80230DD4(s32, u16, s32, void *);
