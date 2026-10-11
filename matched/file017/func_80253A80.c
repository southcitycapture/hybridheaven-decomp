#include "context.h"

typedef struct {
    u8 pad[0x4C];
    u8 unk4C;
} func_80253A80_Inner;

typedef struct {
    u8 pad[0x30];
    func_80253A80_Inner *unk30;
} func_80253A80_Mid;

typedef struct {
    u8 pad[0x10];
    func_80253A80_Mid *unk10;
    func_80253A80_Mid *unk14;
} func_80253A80_Arg1;

typedef struct {
    u8 pad[0x90];
    u16 unk90;
    u16 unk92;
} func_80253A80_Arg0;

void func_80253A80(func_80253A80_Arg0 *arg0, func_80253A80_Arg1 *arg1) {
    arg1->unk10->unk30->unk4C = (u32)arg0->unk90 * 0.5;
    arg1->unk14->unk30->unk4C = (u32)arg0->unk92 * 0.5;
    arg0->unk90++;
    arg0->unk92--;
}
