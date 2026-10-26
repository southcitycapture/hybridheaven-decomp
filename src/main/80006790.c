#include "common.h"


struct func_80006790_StructNode {
    struct func_80006790_StructNode *unk0;
    u8 pad4[0x20];
    u32 unk24;
    u16 unk28;
    u16 unk2A;
};

struct func_80006790_StructHeader {
    u32 unk0;
    u32 unk4;
};

struct func_80006790_StructState {
    u8 pad0[0x9E];
    s16 unk9E;
    s16 unkA0;
    s16 unkA2;
    s16 unkA4;
    u8 pad_A6[0x17C - 0xA6];
    struct func_80006790_StructNode *unk17C;
};

extern struct func_80006790_StructState D_800892B0;
extern struct func_80006790_StructHeader *D_8008D5BC;

#define func_800068C0 func_800068C0__decl
void func_800068C0(s32, void *);
s32 func_80006AB4(void *);
void func_80007750(void);
void func_800078AC(void);
void func_800079B0(struct func_80006790_StructHeader **);

void func_80006790(void) {
    s32 var_s2;
    u32 var_s1;
    struct func_80006790_StructNode *var_s0;

    {
        struct func_80006790_StructHeader *temp_v1;

        temp_v1 = D_8008D5BC++;
        temp_v1->unk0 = 0xDB060000;
        temp_v1->unk4 = 0;
    }
    if (D_800892B0.unk9E == 0) {
        func_800079B0(&D_8008D5BC);
    }
    func_80007750();
    if (D_800892B0.unkA0 == 0) {
        func_800078AC();
    }
    var_s1 = 0x8000;
    var_s2 = 0;
    if (D_800892B0.unkA4 == 0) {
        do {
            var_s0 = D_800892B0.unk17C;
            if ((var_s0 != NULL) && (var_s0->unk24 >= 0xFFFFFFFEU)) {
loop_7:
                if (((s32) var_s0->unk2A < 6) && (var_s0->unk28 & var_s1) && (func_80006AB4(var_s0) != 0)) {
                    func_800068C0(var_s1 & 0xFFFF, var_s0);
                } else {
                    var_s0 = var_s0->unk0;
                    if ((var_s0 != NULL) && (var_s0->unk24 >= 0xFFFFFFFEU)) {
                        goto loop_7;
                    }
                }
            }
            var_s2 = (var_s2 + 1) & 0xFFFF;
            var_s1 = (var_s1 >> 1) & 0xFFFF;
        } while (var_s2 < 0x10);
    }
}

#undef func_800068C0
#define D_8008D548 D_8008D548__func_800068C0
#define D_8008D5D8 D_8008D5D8__func_800068C0
#define func_800069A8 func_800069A8__func_800068C0
#define func_80006AB4 func_80006AB4__func_800068C0
s32 func_80006AB4(void *);


struct func_800068C0_StructNode {
    struct func_800068C0_StructNode *unk0;
    u8 pad4[4];
    struct func_800068C0_StructNode *unk8;
    u8 padC[0x1C];
    u16 unk28;
};
extern void func_800069A8(void *);
extern s32 D_8008D548;
extern struct func_800068C0_StructNode *D_8008D5D8[];

void func_800068C0(u16 arg0, struct func_800068C0_StructNode *arg1) {
    s32 temp_v0;
    s32 var_s2;
    struct func_800068C0_StructNode *temp_s1;

    var_s2 = 0;
    D_8008D548 = 0;
    while (arg1 != NULL) {
        temp_s1 = arg1->unk0;
        if ((arg1->unk28 & arg0) && (func_80006AB4(arg1) != 0)) {
            func_800069A8(arg1);
        }
        if (arg1->unk8 != NULL) {
            if (temp_s1 != NULL) {
                D_8008D5D8[var_s2] = temp_s1;
                var_s2 += 1;
            }
            arg1 = arg1->unk8;
        } else {
            if (temp_s1 == NULL && (temp_v0 = var_s2 - 1, var_s2 != 0)) {
                arg1 = D_8008D5D8[temp_v0];
                var_s2 = temp_v0;
            } else {
                arg1 = temp_s1;
            }
        }
    }
}
#undef D_8008D548
#undef D_8008D5D8
#undef func_800069A8
#undef func_80006AB4
#define func_800068C0 func_800068C0__decl

#define func_80007DE4 func_80007DE4__func_800069A8
#define func_800082C4 func_800082C4__func_800069A8
#define func_80008754 func_80008754__func_800069A8
#define func_80008B9C func_80008B9C__func_800069A8
#define func_80008F30 func_80008F30__func_800069A8
#define func_8000919C func_8000919C__func_800069A8
#define func_8000A06C func_8000A06C__func_800069A8
#define func_8000A828 func_8000A828__func_800069A8
#define func_8000C768 func_8000C768__func_800069A8
#define func_8000D1CC func_8000D1CC__func_800069A8
#define func_80011958 func_80011958__func_800069A8
#define func_80013828 func_80013828__func_800069A8
extern void func_80007DE4(void);
extern void func_800082C4(void);
extern void func_80008754(void);
extern void func_80008B9C(void);
extern void func_80008F30(void);
extern void func_8000919C(void);
extern void func_8000A06C(void);
extern void func_8000A828(void);
extern void func_8000C768(void);
extern void func_8000D1CC(void);
extern void func_80011958(void);
extern void func_80013828(void);
struct func_800069A8_Struct {
    u8 pad[0x1C];
    s32 unk1C;
    u8 pad2[0xA];
    u16 unk2A;
};
void func_800069A8(struct func_800069A8_Struct *arg0) {
    arg0->unk1C = 0;
    switch (arg0->unk2A) {
    case 1: func_80007DE4(); break;
    case 2: func_800082C4(); break;
    case 3: func_80008754(); break;
    case 4: func_80008B9C(); break;
    case 5: func_80008F30(); break;
    case 6: func_8000C768(); break;
    case 12: func_8000C768(); break;
    case 7: func_8000D1CC(); break;
    case 13: func_80011958(); break;
    case 8: func_8000A828(); break;
    case 9: func_8000919C(); break;
    case 10: func_8000A06C(); break;
    case 11: func_80013828(); break;
    }
}
#undef func_80007DE4
#undef func_800082C4
#undef func_80008754
#undef func_80008B9C
#undef func_80008F30
#undef func_8000919C
#undef func_8000A06C
#undef func_8000A828
#undef func_8000C768
#undef func_8000D1CC
#undef func_80011958
#undef func_80013828


struct func_80006AB4_StructNode {
    u8 pad0[0xC];
    struct func_80006AB4_StructNode *next;
    u8 pad10[0x12];
    u8 flag;
};

s32 func_80006AB4(void *arg0) {
    u8 value;
    value = ((struct func_80006AB4_StructNode *)arg0)->flag;
    if (value != 0 && ((volatile struct func_80006AB4_StructNode *)arg0)->next != NULL) {
        arg0 = ((struct func_80006AB4_StructNode *)arg0)->next;
loop:
        value = ((struct func_80006AB4_StructNode *)arg0)->flag;
        if (value != 0) {
            arg0 = ((struct func_80006AB4_StructNode *)arg0)->next;
            if (arg0 != NULL) {
                goto loop;
            }
        }
    }
    return value;
}

