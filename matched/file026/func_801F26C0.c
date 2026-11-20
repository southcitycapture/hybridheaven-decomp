#include "common.h"
extern s32 D_801CC470(s32, s32, s32, s32, f32);
struct func_801EC5B4_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801EC5B4_Struct2 {
    u8 pad0[0x2C];
    struct func_801EC5B4_Struct3 *unk2C;
};
struct func_801EC5B4_Struct1 {
    u8 pad0[0x24];
    struct func_801EC5B4_Struct2 *unk24;
};
struct func_801EC5B4_Struct0 {
    u8 pad0[8];
    struct func_801EC5B4_Struct1 *unk8;
};
extern struct func_801EC5B4_Struct0 *D_801DAB14;
extern s32 D_801FB7F8;
void D_8038BD88(f32, f32, f32);
extern void D_8038C158(void);
extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801C0B8C(u64 time);
void func_8038BD50(f32, f32, f32);
void func_8038BE98(f32);


extern f32 D_801FCF70;
extern f32 D_801FCF74;
extern f32 D_801FCF78;
extern f32 D_801FCF7C;
extern f32 D_801FCF80;
extern f32 D_801FCF84;
extern f32 D_801FCF88;
extern f32 D_801FCF8C;
extern f32 D_801FCF90;
extern f32 D_801FCF94;
extern f32 D_801FCF98;
extern f32 D_801FCF9C;
extern f32 D_801FCFA0;
extern f32 D_801FCFA4;
extern f32 D_801FCFA8;
extern f32 D_801FCFAC;
extern f32 D_801FCFB0;
extern f32 D_801FCFB4;
extern f32 D_801FCFB8;
extern f32 D_801FCFBC;
extern f32 D_801FCFC0;
extern f32 D_801FCFC4;
extern f32 D_801FCFC8;
extern f32 D_801FCFCC;
extern f32 D_801FCFD0;
extern f32 D_801FCFD4;
extern f32 D_801FCFD8;
extern f32 D_801FCFDC;
extern f32 D_801FCFE0;
extern f32 D_801FCFE4;
extern f32 D_801FCFE8;
extern f32 D_801FCFEC;
extern f32 D_801FCFF0;
extern f32 D_801FCFF4;
extern f32 D_801FCFF8;
extern f32 D_801FCFFC;
extern f32 D_801FD000;
extern f32 D_801FD004;
extern f32 D_801FD008;
extern f32 D_801FD00C;
extern f32 D_801FD010;
extern f32 D_801FD014;
extern f32 D_801FD018;
extern f32 D_801FD01C;
extern f32 D_801FD020;
extern f32 D_801FD024;
extern f32 D_801FD028;
extern f32 D_801FD02C;
extern f32 D_801FD030;
extern f32 D_801FD034;
extern f32 D_801FD038;

struct func_801F26C0_StructLeaf {
    u8 pad[4];
    f32 x, y, z;
    u8 pad10[2];
    s16 angle;
};
struct func_801F26C0_StructNode {
    u8 pad[8];
    struct func_801F26C0_StructNode *next;
    u8 padC[0x18];
    struct func_801F26C0_StructNode *child;
    u8 pad28[4];
    struct func_801F26C0_StructLeaf *leaf;
};
#define ROOT26 (*(struct func_801F26C0_StructNode **)&D_801DAB14)

s32 func_801F26C0(s32 arg0, s32 arg1) {
    f32 shared0, shared1, shared2, shared3, case3a;
    switch (D_801FB7F8) {
    case 0:
        case3a = D_801FCF70;
        if (D_8038C17C(0.0f, D_801FCF74, -53.7f, -12.1f,
            case3a, D_801FCF78, D_801FCF7C, D_801FCF80,
            case3a, D_801FCF84, D_801FCF88, D_801FCF8C,
            D_801FCF90, D_801FCF94, 13.5f, D_801FCF98)) {
            D_8038C158();
            D_801FB7F8 = 1;
        }
        break;
    case 1:
        if (D_8038C17C(0.0f, D_801FCF9C, -10.3f, 34.3f,
            D_801FCFA0, D_801FCFA4, 7.0f, D_801FCFA8,
            D_801FCFAC, D_801FCFB0, D_801FCFB4, D_801FCFB8,
            13.0f, D_801FCFBC, 41.5f, 41.5f)) {
            D_8038C158();
            D_801FB7F8 = 2;
        }
        break;
    case 2:
        if (D_8038C17C(0.0f, D_801FCFC0, -7.7f, -3.3f,
            D_801FCFC4, D_801FCFC8, D_801FCFCC, D_801FCFD0,
            D_801FCFD4, 17.0f, D_801FCFD8, D_801FCFDC,
            14.5f, -14.5f, 19.0f, 19.0f)) {
            D_8038C158();
            D_801FB7F8 = 3;
        }
        break;
    case 3:
        shared0 = D_801FCFE0;
        case3a = D_801FCFE4;
        if (D_8038C17C(0.0f, D_801FCFE8, 10.7f, 31.5f,
            D_801FCFEC, D_801FCFF0, D_801FCFF4, 29.0f,
            case3a, D_801FCFF8, -12.0f, D_801FCFFC,
            D_801FD000, D_801FD004, shared0, shared0)) {
            D_8038C158();
            D_801FB7F8 = 4;
        }
        break;
    case 4:
        shared0 = D_801FD008;
        shared1 = D_801FD00C;
        shared2 = D_801FD010;
        shared3 = D_801FD014;
        if (D_8038C17C(0.0f, D_801FD018, 2.5f, 103.5f,
            D_801FD01C, 1.0f, 30.5f, -1.5f,
            shared0, shared1, shared2, shared0,
            shared1, shared2, shared3, shared3)) {
            D_801FB7F8 = 5;
        }
        break;
    case 5:
        if (func_801C0B8C(0x36746DF)) {
            func_8038BE98(D_801FD020);
            func_8038BD50(D_801FD024, D_801FD028, -5.7f);
            D_8038BD88(D_801FD02C, D_801FD030, 6.8f);
            ROOT26->next->child->leaf->x = -2.0f;
            ROOT26->next->child->leaf->y = 0.0f;
            ROOT26->next->child->leaf->z = D_801FD034;
            ROOT26->next->child->leaf->angle = 0x999;
            D_801CC470(0, 0x2A80018, 0, 0x1000, 3.0f);
            ROOT26->next->next->child->leaf->x = 5120.0f;
            ROOT26->next->next->child->leaf->y = 0.0f;
            ROOT26->next->next->child->leaf->z = D_801FD038;
            ROOT26->next->next->child->leaf->angle = 0x1800;
            D_801CC470(1, 0x1900001, 0, 0x100, 1.0f);
            return 14;
        }
        break;
    }
    return 13;
}
