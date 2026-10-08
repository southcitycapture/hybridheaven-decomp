#include "context.h"

typedef struct func_801C9154_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 unk91;
    u8 pad92[2];
    s16 unk94;
    s16 unk96;
    s16 unk98;
} func_801C9154_Struct;

extern void *func_80005670(s32, void *);
extern s16 func_8012C6B4(s32);
extern u8 D_801CD164;
extern u8 D_801CFD70;

void func_801C9154(s32 arg0, void *arg1) {
    u8 var_s1;
    u8 *temp_s2;
    func_801C9154_Struct *temp_v0;

    for (var_s1 = 0; var_s1 < 4; var_s1++) {
        temp_s2 = &D_801CFD70 + var_s1;
        if (*temp_s2 == 0) {
            temp_v0 = func_80005670(arg0, &D_801CD164);
            if (temp_v0 != NULL) {
                temp_v0->unk90 = var_s1;
                temp_v0->unk91 = func_8012C6B4(0x28) + 0xA;
                temp_v0->unk94 = func_8012C6B4(0xFF);
                temp_v0->unk96 = func_8012C6B4(0xFF);
                temp_v0->unk98 = func_8012C6B4(0xFF);
            }
            *temp_s2 = 1;
        }
    }
}
