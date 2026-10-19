#include "context.h"

struct func_80230318_Struct {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
    u8 unk2DA;
    u8 unk2DB;
};

#define A ((struct func_80230318_Struct *)arg0)
#define B ((struct func_80230318_Struct *)arg1)
extern f32 D_801BC780;
#define F D_801BC780

void func_80230318(struct func_80231B28_Struct *arg0, struct func_80231B28_Struct *arg1) {
    s8 r;

    if (arg0 == NULL) {
        arg0 = (struct func_80231B28_Struct *)D_801BC03C;
    }
    if (arg1 == NULL) {
        arg1 = (struct func_80231B28_Struct *)D_801BC3D8;
    }
    r = func_8022B640(10);
    if (A->unk2D8 == 0xD) {
        if (r < 8 || F < 30.0f) {
            A->unk2D9 = 1;
            A->unk2DB = 1;
            if (r != 0 || F < 30.0f) {
                B->unk2DA = 1;
            } else {
                B->unk2DA = 0;
            }
        } else {
            A->unk2DB = 0;
            B->unk2DA = 1;
        }
    } else if (A->unk2D8 == 0xE) {
        if (r < 5 || F < 30.0f) {
            A->unk2DB = 0;
            B->unk2DA = 1;
        } else {
            A->unk2DB = 1;
            B->unk2DA = 0;
        }
    } else if (A->unk2D8 == 0xF) {
        A->unk2DB = 0;
        B->unk2DA = 1;
    } else if (A->unk2D8 == 0x14) {
        A->unk2DB = 0;
        B->unk2DA = 1;
    }
}
