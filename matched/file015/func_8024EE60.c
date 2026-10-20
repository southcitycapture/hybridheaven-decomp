#include "context.h"

typedef struct func_8024EE60_Struct { u8 pad[0x3C]; u16 unk3C; } func_8024EE60_Struct;
typedef struct func_8024EE60_Struct_T { u8 pad[0x4B]; u8 unk4B; } func_8024EE60_Struct_T;
typedef struct func_8024EE60_Struct_R { u8 pad[0x30]; func_8024EE60_Struct_T *unk30; } func_8024EE60_Struct_R;
typedef struct func_8024EE60_Struct_P { func_8024EE60_Struct_R *unk0; func_8024EE60_Struct_R *unk4; } func_8024EE60_Struct_P;

extern void func_8024EED0();

void func_8024EE60(func_8024EE60_Struct *arg0, func_8024EE60_Struct_P *arg1) {
    if (arg0->unk3C++ >= 0x46) {
        arg1->unk4->unk30->unk4B += 3;
        if (arg1->unk4->unk30->unk4B >= 0xFB) {
            arg1->unk4->unk30->unk4B = 0xFF;
            func_800058DC(arg0, func_8024EED0);
        }
    }
}
