#include "common.h"
extern s32 D_801D8CE4;
extern s32 D_801D8CE8;
extern s32 D_801D8D04[];
extern s32 D_801DE828;
typedef struct func_801BF850_Struct {
    u32 unk0;
    u16 unk4;
    u16 pad6;
    s32 unk8;
} func_801BF850_Struct;
extern s32 func_801C2024(s32, s32);
extern void (*D_801D8D28[])(void);


typedef s32 (*func_801C0464_Fn)(s32, s32);
typedef struct func_801C0464_Struct {
    u8 pad[0xC];
    s32 unkC;
    u8 pad2[8];
} func_801C0464_Struct;
extern void func_801C157C(s32, s32);
extern s32 func_801C1780(s32, s32);
extern s32 func_801C20C4(void *, s32, s32, s32, s32, s32);
extern func_801C0464_Fn ****D_801D8C74[];

s32 func_801C0464(s32 arg0, func_801BF850_Struct *arg1) {
    func_801C0464_Fn **tbl;
    s32 r;
    func_801C0464_Fn *f;
    s32 sp68;
    s32 i;

    tbl = D_801D8C74[D_801D8CE4][D_801D8CE8][arg0];
    if (tbl != NULL) {
        for (i = 0; (f = D_801D8C74[D_801D8CE4][D_801D8CE8][arg0][i]) != NULL; i++) {
            tbl = (func_801C0464_Fn **)D_801D8C74[D_801D8CE4][D_801D8CE8][arg0][i];
            r = ((func_801C0464_Fn *)tbl)[((func_801C0464_Struct *)D_801D8D04[arg0])[i].unkC](arg1->unk4, arg1->unk8);
            if (D_801DE828 != 0) {
                ((func_801C0464_Struct *)D_801D8D04[arg0])[i].unkC = r;
            } else if (func_801C2024(D_801D8CE4, D_801D8CE8) != -1) {
                if (func_801C20C4(&sp68, D_801D8CE4, D_801D8CE8, arg0, i, r) != 0) {
                    if (func_801C1780(arg0, i) == 0) {
                        func_801C157C(arg0, i);
                    }
                } else {
                    ((func_801C0464_Struct *)D_801D8D04[arg0])[i].unkC = r;
                }
            }
        }
        return 1;
    }
    return 0;
}
