#include "context.h"
struct func_802457A8_Inner { u8 pad[0xC]; f32 unkC; };
struct func_802457A8_Mid { u8 pad[0x30]; struct func_802457A8_Inner *unk30; };
void func_802457A8(s32 arg0, struct func_802457A8_Mid **arg1) {
    arg1[0]->unk30->unkC = (f32)((f64)arg1[0]->unk30->unkC + 1.5);
    if (arg1[0]->unk30->unkC >= 40.0f) {
        arg1[0]->unk30->unkC = 0.0f;
    }
}
