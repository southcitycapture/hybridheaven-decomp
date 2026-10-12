#include "context.h"
extern void func_800058DC(s32, void *);
void func_801BF9B0(s32 arg0);
void func_801BF9B0(s32 arg0);
typedef struct func_801BFF20_Struct {
    u8 pad[8];
    s32 unk8;
} func_801BFF20_Struct;
extern func_801BFF20_Struct *D_801D8D60;

extern s32 D_801D8CEC;
extern s32 D_801D8CF8;
extern s32 D_801D8CFC;
extern s32 D_801D8D64;
void func_801BF1F8(s32 arg0, s32 arg1);

void func_801BF1A0(s32 arg0, s32 arg1) {
    D_801D8D60 = arg0;
    D_801D8D64 = arg1;
    D_801D8CEC = 0;
    D_801D8CF8 = 0;
    D_801D8CFC = 0;
    func_801BF9B0(arg0);
    func_800058DC(arg0, func_801BF1F8);
}
