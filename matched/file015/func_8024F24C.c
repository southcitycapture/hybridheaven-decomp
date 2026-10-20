#include "context.h"
typedef struct func_8024F24C_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024F24C_Struct;
extern func_8024EF6C_Vec D_80254ADC;
struct func_8024F2D4_Obj;
void func_8024F2D4(void *arg0, struct func_8024F2D4_Obj **arg1);

void func_8024F24C(func_8024F24C_Struct *arg0, void **arg1) {
    extern s32 func_80010550();
    s32 v = arg0->unk5C;
    if ((func_80010550(arg1, v) != 0) && (func_800178E8() != 0)) {
        func_8013A1B4(arg1, D_80254ADC, 0xFFFFFF);
        func_800058DC(arg0, func_8024F2D4);
    }
}
