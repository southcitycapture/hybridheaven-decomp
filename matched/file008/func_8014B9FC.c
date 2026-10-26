#include "common.h"
s32 func_8014B28C(u16 arg0, u8 arg1);


extern u8 D_801BED38;

typedef struct func_8014B9FC_Struct {
    u8 unk0;
    u8 unk1;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    u16 unkA;
    u8 unkC;
    u8 unkD;
    u16 unkE;
} func_8014B9FC_Struct;

#define FUNC_8014B9FC_E ((func_8014B9FC_Struct *)&D_801BED38)[i]

void func_8014B9FC(void) {
    extern s32 B_8012FF58(void);
    extern s32 B_8014ADB4(f32, f32, f32, s32, s32, s32, s32);
    extern s32 B_8014AEF4(f32, f32, f32, s32, s32, s32, s32);
    extern void B_8014B2FC(u16, u8);
    s32 i;
    s32 s3;
    u16 s2;
    u16 s1;
    s32 v;
    s32 t;

    s3 = B_8012FF58();
    i = 0;
loop: {
        t = FUNC_8014B9FC_E.unk0;
        if ((t & 1) && s3 == FUNC_8014B9FC_E.unkE) {
            s2 = t;
            if (FUNC_8014B9FC_E.unkA != 0) {
                FUNC_8014B9FC_E.unk0 = 0;
                if (!(s2 & 2)) {
                    s1 = v = B_8014ADB4((f32)FUNC_8014B9FC_E.unk2, (f32)FUNC_8014B9FC_E.unk4, (f32)FUNC_8014B9FC_E.unk6, FUNC_8014B9FC_E.unk8, FUNC_8014B9FC_E.unkA, FUNC_8014B9FC_E.unkC, FUNC_8014B9FC_E.unkD);
                } else {
                    s1 = v = B_8014AEF4((f32)FUNC_8014B9FC_E.unk2, (f32)FUNC_8014B9FC_E.unk4, (f32)FUNC_8014B9FC_E.unk6, FUNC_8014B9FC_E.unk8, FUNC_8014B9FC_E.unkA, FUNC_8014B9FC_E.unkC, FUNC_8014B9FC_E.unkD);
                }
                FUNC_8014B9FC_E.unk0 = s2;
                if (v != 0) {
                    B_8014B2FC(s1, s2);
                    func_8014B28C(s1, FUNC_8014B9FC_E.unk1);
                }
            }
        }
    }
    i++;
    if (i < 32) goto loop;
}

#undef FUNC_8014B9FC_E
