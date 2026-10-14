#include "context.h"

typedef struct func_80151DA4_Struct {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
    u8 pad[0x1C - 0xA];
    s32 unk1C;
} func_80151DA4_Struct;

typedef struct func_80151DA4_Rec {
    u16 unk0;
    u16 unk2;
    u8 unk4;
    u8 unk5;
    s16 unk6;
    s16 unk8;
    u8 unkA;
    u8 unkB;
    s16 unkC;
    s16 unkE;
    u8 unk10;
    u8 unk11;
} func_80151DA4_Rec;

typedef struct func_80151DA4_Rec6 {
    u16 w[3];
} func_80151DA4_Rec6;

typedef struct func_80151DA4_Obj {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[0x30 - 0x14];
    f32 unk30;
    u8 pad34[4];
    f32 unk38;
    f32 unk3C;
    u8 pad40[4];
    f32 unk44;
    s32 unk48;
    s32 unk4C;
    s32 unk50;
} func_80151DA4_Obj;

typedef struct func_80151DA4_Holder {
    u8 pad[0x2C];
    func_80151DA4_Obj *unk2C;
} func_80151DA4_Holder;

#define G_U16(o) (*(u16 *)((u8 *)&D_801BBBF0 + (o)))
#define G_PTR(o) (*(func_80151DA4_Holder **)((u8 *)&D_801BBBF0 + (o)))

extern func_80151DA4_Struct D_80089474;
extern u8 D_800892B0[];
extern u8 D_801909F0[];
extern u8 D_801909FC[];
extern u8 D_80190A08[];

extern void func_8001B204(s32, s32, s32, void *);
extern void func_80020718(s32);
extern void func_80119F9C(s16 *, s16 *);
extern void func_8011A0F0(s16 *);
extern void func_8011A148(s16, s16, s16, s32 *, s32 *, s32 *);
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern s32 func_80130078(void);
extern void func_80133830(void);
extern void func_80133950(void);
extern void func_80133A70(void);

func_80151DA4_Struct func_80151DA4(void) {
    func_80151DA4_Struct s;
    func_80151DA4_Rec *rec;
    s16 a;
    s16 b;
    s16 c;
    func_80151DA4_Obj *o;
    u16 v;

    s = D_80089474;
    if (D_801BBBF0.unk170 != 0) {
        if ((*(u16 *)(D_800892B0 + 0xA8) % 21) < 18) {
            if (G_U16(0x2C) != 5) {
                func_8001B204(0xF, 0x7C, 0x74, D_801909F0);
            } else {
                func_8001B204(0xF, 0x18, 0xD0, D_801909FC);
            }
        } else {
            func_8001B204(0xF, 0, 0, D_80190A08);
        }
        if (func_80130078() == 0 && (*(u16 *)(D_800892B0 + 0x1C8) & 0xF000)) {
            G_U16(4) = 0x73;
            func_8012FE50(2, G_U16(4), 1, 1, 2);
            func_80020718(0xA);
        }
        while (1) {
            rec = (func_80151DA4_Rec *)(D_801BBBF0.unk16E * 6 + D_801BBBF0.unk170);
            if (rec->unk0 != 0xC00) {
                break;
            }
            if (rec->unk2 == 0) goto c0;
            if (rec->unk2 == 1) goto c1;
            if (rec->unk2 != 2) goto end;
            goto c2;
            c0: {
                func_80133830();
                func_80133950();
                func_80133A70();
                D_801BBBF0.unk16E = 0;
                goto end;
            }
            c1: {
                func_80133830();
                func_80133950();
                func_80133A70();
                G_U16(4) = 0x73;
                func_8012FE50(2, G_U16(4), 1, 1, 2);
                G_U16(2) = 1;
                goto end;
            }
            c2: {
                if (G_U16(0x2C) != 5) {
                    G_PTR(0xE0)->unk2C->unk4 = rec->unk6 / 40.0;
                    G_PTR(0xE0)->unk2C->unkC = rec->unk8 / 40.0;
                    G_PTR(0xE0)->unk2C->unk12 = rec->unk4 + (rec->unk5 << 8);
                    func_8011A0F0(&c);
                    G_PTR(0xE8)->unk2C->unk30 = rec->unkC / 40.0;
                    G_PTR(0xE8)->unk2C->unk38 = rec->unkE / 40.0;
                    G_PTR(0xE8)->unk2C->unk3C = (s16)(rec->unkA + (rec->unkB << 8)) / 40.0;
                    G_PTR(0xE8)->unk2C->unk44 = (s16)(rec->unk10 + (rec->unk11 << 8)) / 40.0;
                }
                if (G_U16(0x2C) != 5) {
                    func_80119F9C(&a, &b);
                    o = G_PTR(0xE8)->unk2C;
                    func_8011A148(a, b, c, &o->unk48, &o->unk4C, &o->unk50);
                }
                D_801BBBF0.unk16E += 2;
            }
        end:
            D_801BBBF0.unk16E++;
        }
        s.unk2 = rec->unk0;
        s.unk4 = rec->unk2;
        s.unk6 = (s8)rec->unk4;
        s.unk8 = (s8)rec->unk5;
        D_801BBBF0.unk16E++;
    }
    return s;
}
