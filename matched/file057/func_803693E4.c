#include "common.h"
extern u8 D_8008DA88[];
extern u8 D_801BBBF0[];
typedef struct func_80369094_Struct {
    u8 pad0;
    u8 unk1;
    u8 pad2[6];
    s16 unk8;
    u8 pad10[0x2D9 - 0x0A];
    u8 unk2D9;
} func_80369094_Struct;
extern struct func_80369094_Struct D_801BC03C;
extern struct func_80369094_Struct D_801BC3D8;
extern void func_800058DC(s32, void *);
s32 func_80006214();
s32 func_80010550(void *, s32);
typedef struct func_80368E58_Struct { s32 a; s32 b; s32 c; } func_80368E58_Struct;
extern void func_8013A28C(s32, func_80368E58_Struct);
typedef struct func_80367C30_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_80367C30_Struct;
extern void func_80368374(s32, s32);
extern void func_80374F04(s32, f32);


typedef struct func_803693E4_StructSub {
    u8 pad[0x1C];
    func_80368E58_Struct v;
    u8 pad2[0x7C - 0x28];
    s32 unk7C;
    u32 unk80:16, unk82:16;
} func_803693E4_StructSub;
typedef struct func_803693E4_StructG {
    u8 pad[0xDC];
    func_80367C30_Struct *unkDC;
    u8 padE0[0xC];
    func_80367C30_Struct *unkEC;
    u8 padF0[0x1030 - 0xF0];
    u8 unk1030;
} func_803693E4_StructG;
typedef struct func_803693E4_StructSt {
    u8 pad0[0x30];
    u32 b30_0:7, b30_7:1, b30_8:1, b30_9:2, b30_11:8, b30_19:1, b30_20:12;
    u8 pad34[4];
    u32 b38_0:1, b38_1:2, b38_3:1, b38_4:28;
    u8 pad3C[0x2D4 - 0x3C];
    void *unk2D4;
    u8 unk2D8, unk2D9, unk2DA, unk2DB, pad2DC, unk2DD;
    u8 pad2DE[0x2FA - 0x2DE];
    u8 unk2FA;
} func_803693E4_StructSt;
typedef struct func_803693E4_StructRet {
    u8 pad[0xC];
    s32 unkC, unk10;
} func_803693E4_StructRet;
extern void func_8022C0A0(void);
extern void func_80231CEC(void);
extern void func_8035EF60(func_80367C30_Struct *, s32, func_803693E4_StructSub *);
extern u8 D_801842A0[];
extern func_80368E58_Struct D_80385650;
extern void func_8035DF80();
extern struct func_80369094_Struct *D_803677B0(u8);
#define G ((func_803693E4_StructG *)D_801BBBF0)

void func_803693E4(func_80367C30_Struct *arg0, s32 arg1) {
    func_80367C30_Struct *o;
    func_803693E4_StructSt *a, *b;
    func_803693E4_StructSub *sa, *sb;
    u8 c;
    func_80368E58_Struct *t;

    if (arg0 != G->unkDC) o = G->unkDC;
    else o = G->unkEC;
    if (arg0 == G->unkDC) a = (func_803693E4_StructSt *)&D_801BC03C;
    else a = (func_803693E4_StructSt *)&D_801BC3D8;
    if (arg0 != G->unkDC) b = (func_803693E4_StructSt *)&D_801BC03C;
    else b = (func_803693E4_StructSt *)&D_801BC3D8;
    sa = (func_803693E4_StructSub *)arg0->unk5C;
    sb = (func_803693E4_StructSub *)o->unk5C;
    if (func_80010550((void *)arg1, (s32)sa) != 0 && a->b30_19 == 1) {
        if (a->unk2D8 == 0x10 && a->unk2DB != 0) {
            a->b30_19 = 0;
            b->b30_19 = 1;
            G->unk1030 ^= 1;
            func_8022C0A0();
            func_80231CEC();
            a->unk2D8 = 2;
            a->unk2DD = 1;
            if (a->b38_3 == 1) {
                c = a->unk2D9;
                if (c != 0x4F) {
                    c = a->unk2D9 = 0x4F;
                    a->unk2D4 = D_801842A0 + c * 0x1C;
                }
            } else {
                c = a->unk2D9;
                if (c < 0x25 || (c >= 0x4E && c != 0x4E)) {
                    c = a->unk2D9 = 0x4E;
                    a->unk2D4 = D_801842A0 + c * 0x1C;
                }
            }
            t = (func_80368E58_Struct *)D_803677B0(c);
            a->unk2FA = 0;
            b->unk2FA = 0;
            sa->unk7C = ((func_803693E4_StructRet *)t)->unkC;
            sb->unk7C = ((func_803693E4_StructRet *)t)->unk10;
            sa->unk82 = sb->unk82 = 0;
            sa->unk80 = sb->unk80 = 2;
            func_80374F04((s32)arg0, 1.0f);
            func_800058DC((s32)arg0, func_80368374);
            func_800058DC((s32)o, func_80368374);
            return;
        }
        if (a->unk2D8 == 0x11 && a->unk2DA != 0) {
            func_8035EF60(arg0, arg1, sa);
            return;
        }
        t = &sa->v;
        *t = D_80385650;
        if (a->b30_9 == 3) ((u16 *)t)[3] ^= 0x10;
        func_8013A28C(arg1, *t);
        a->b30_7 = 0;
        a->b38_0 = 1;
        func_800058DC((s32)arg0, func_8035DF80);
        sb->v = D_80385650;
        t = &sb->v;
        if (b->b30_9 == 3) ((u16 *)t)[3] ^= 0x10;
        func_80006214(o);
        func_8013A28C((s32)D_8008DA88, *t);
        func_80006214(arg0);
        b->b30_7 = 0;
        b->b38_0 = 1;
        func_800058DC((s32)o, func_8035DF80);
    }
}
