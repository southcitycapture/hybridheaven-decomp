#include "context.h"

typedef struct func_8022B518_Struct {
    u8 pad[0x90];
    u8 unk90;
} func_8022B518_Struct;

void func_800058DC(void *arg0, void *arg1);
void func_8022B544(void);

void func_8022B518(func_8022B518_Struct *arg0, s32 arg1) {
    arg0->unk90 = 0;
    func_800058DC(arg0, func_8022B544);
}
