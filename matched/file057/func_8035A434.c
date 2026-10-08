#include "common.h"

typedef struct func_8035A434_Struct {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
} func_8035A434_Struct;

s32 func_8035A380(u8, void *);
s32 func_8035A3D8(u8, void *);

s32 func_8035A434(void *arg0) {
    func_8035A434_Struct *s = arg0;

    if (s->unk2D8 == 0xC) {
        return func_8035A380(s->unk2D9, arg0);
    }
    if (s->unk2D8 == 0x13) {
        return func_8035A3D8(s->unk2D9, arg0);
    }
    return 0;
}
