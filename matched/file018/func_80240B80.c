#include "context.h"
void func_80240C04(s32 arg0);
extern s32 func_8020394C();
typedef struct func_80241DE0_Struct2 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_80241DE0_Struct2;
extern s32 func_8012C4D0(s32, func_80241DE0_Struct2, s32);
extern func_80241DE0_Struct2 D_8024F6A0;
extern u8 func_80240C04_dummy;

void func_80240B80(s32 arg0, s32 arg1) {
    if (func_8020394C() != 0) {
        func_8012C4D0(arg0, D_8024F6A0, 3);
        func_800058DC(arg0, func_80240C04);
    }
}
