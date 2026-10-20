#include "context.h"
typedef struct func_8038DC20_Struct0 { u8 pad[0xA5]; u8 unkA5; } func_8038DC20_Struct0;
typedef struct func_8038DC20_Struct1 { u8 pad0[6]; s16 unk6; u8 pad1[0x32B]; u8 unk333; } func_8038DC20_Struct1;
extern void func_8022A834();
void func_8038DC20(func_8038DC20_Struct0 *arg0, func_8038DC20_Struct1 *arg1) {
    u32 t = arg1->unk333;
    if (t == 0) goto a;
    if (t == 1) goto a;
    if (t != 2) goto end;
    goto b;
a:
    func_8022A834();
    arg1->unk333 = arg1->unk333 + 1;
    goto end;
b:
    if (arg1->unk6 >= 0x64) {
        arg0->unkA5 = 1;
    } else {
        func_8022A834();
    }
    arg1->unk333 = 0;
end:
    return;
}
