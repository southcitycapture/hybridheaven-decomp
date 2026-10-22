#include "context.h"
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
typedef struct func_8012AEE0_Struct { u8 pad0[0x12]; s16 unk12; } func_8012AEE0_Struct;
typedef struct func_8012AEE0_Obj { u8 pad0[0x2C]; func_8012AEE0_Struct *unk2C; func_8012AEE0_Struct *unk30; } func_8012AEE0_Obj;
typedef struct func_8012AEE0_Arg { u8 pad0[0x24]; func_8012AEE0_Obj *unk24; u8 pad1[0x18]; f32 unk40; u8 pad2[4]; f32 unk48; } func_8012AEE0_Arg;
void func_8012AEE0(func_8012AEE0_Arg *arg0, f32 arg1) {
    f32 v;
    if (arg0->unk24->unk2C != NULL) {
        v = arg0->unk24->unk2C->unk12;
    } else {
        v = arg0->unk24->unk30->unk12;
    }
    arg0->unk40 = (f64)(func_8001EAD0((s16)v) * arg1);
    arg0->unk48 = (f64)(func_8001EB64((s16)v) * arg1);
}
