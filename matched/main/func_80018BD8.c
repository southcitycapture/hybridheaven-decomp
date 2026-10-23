#define LPC(a, b) a##b
#define LP(a, b) LPC(a, b)
#define func_800158C0 LP(fA, __LINE__)
#include "context.h"
#undef func_800158C0

extern u8 D_8008EC1C[];

typedef struct func_80018BD8_Struct8 {
    u16 unk0;
    u8 unk2;
    u8 pad3[4];
    u8 unk7;
} func_80018BD8_Struct8;

typedef struct func_80018BD8_Struct {
    u8 pad0[0x10];
    func_80018BD8_Struct8 ent[1];
    u8 pad18[0x11A - 0x18];
} func_80018BD8_Struct;

s32 func_80018BD8(void) {
    u8 i;
    s32 result;
    u8 j;
    func_80018BD8_Struct *p;

    i = 0;
    p = func_8001B154(D_8008EBC2 * 4);
    result = 0;
    for (; i < D_8008EC1C[D_8008EBC2 * 0x26]; i++, p++) {
        if (p->ent[0].unk0 != 0) {
            result = 1;
        }
        for (j = 0; p->ent[j].unk2 != 0xFF; j++) {
            if (p->ent[j].unk7 != 0) {
                result = 1;
            }
        }
    }
    return result;
}
