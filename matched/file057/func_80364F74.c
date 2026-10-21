#include "context.h"

typedef struct func_80364F74_Struct {
    s32 unk0;
    u16 unk4;
    u8 unk6;
    u8 pad7;
} func_80364F74_Struct;
typedef struct func_80364F74_Struct2 {
    s32 unk0;
    u16 unk4;
    u8 pad6[2];
    f32 unk8;
} func_80364F74_Struct2;
extern func_80364F74_Struct D_80386830[];

u8 func_80364F74(func_80364F74_Struct2 *arg0) {
    func_80364F74_Struct *p;

    for (p = D_80386830; p->unk0 != 0; p++) {
        if (arg0->unk0 == p->unk0) {
            if (arg0->unk4 == func_80011590((u16)(u32)((f32)(u32)p->unk4 * arg0->unk8))) {
                return p->unk6;
            }
            return 0;
        }
    }
    return 0;
}
