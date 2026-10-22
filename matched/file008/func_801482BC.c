#include "context.h"

extern u8 func_8013D4A0(u8, s32);
extern s32 func_80147E34(void *, u16, u8, f32, f32, f32, s32);

typedef struct func_801482BC_Struct {
    u8 pad0[0x90];
    s8 unk90;
    s8 unk91;
    u8 pad92[6];
    void *unk98;
} func_801482BC_Struct;

typedef struct func_801482BC_Rec {
    u8 pad0[2];
    u16 unk2;
    u8 unk4;
    u8 unk5;
} func_801482BC_Rec;

typedef struct func_801482BC_Obj {
    u8 pad0[0x22];
    u8 unk22;
} func_801482BC_Obj;

typedef struct func_801482BC_Blk {
    u8 pad[0x44C];
} func_801482BC_Blk;

void func_801482BC(void *arg0, s32 arg1) {
    s8 i;
    s8 j;
    u8 sp7D;
    func_801482BC_Blk *sp64;
    func_801482BC_Struct *p;
    u8 r;
    u8 t4;
    u8 k;
    func_801482BC_Blk *s1;
    extern s32 D_80148124(u8, u8);

    p = arg0;
    s1 = p->unk98;
    sp7D = func_80006214(p);
    sp64 = s1 - 1;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            p->unk90 = D_80148124(j, i);
            r = func_8013D4A0(((func_801482BC_Rec (*)[20])D_80181ABC)[p->unk91][p->unk90].pad0[1],
                              (u8)((sp64 == (func_801482BC_Blk *)D_801BBBF0) ? 0 : 1));
            t4 = func_80006214(p);
            func_80147E34(p, ((func_801482BC_Rec (*)[20])D_80181ABC)[p->unk91][p->unk90].unk2,
                          ((func_801482BC_Rec (*)[20])D_80181ABC)[p->unk91][p->unk90].unk4,
                          (f32)(j * 32 + 0x2A), (f32)(i * 32 + 0x3B), 0.0f, 0);
            func_8014813C((s8 *)p, r, (s16)(j * 32 + 0x32), (s16)(i * 32 + 0x41));
            if (r == 0 || func_80148270((func_80148270_Struct *)p) == 0) {
                k = 0;
                do {
                    (*(func_801482BC_Obj **)(arg1 + t4 * 4 + k++ * 4))->unk22 = 0;
                } while (k < 3);
            }
        }
    }
    D_801BED24 = ((s32 *)arg1)[sp7D];
}
