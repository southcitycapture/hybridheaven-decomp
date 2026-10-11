#include "context.h"

typedef struct func_8021D36C_Struct {
    u8 pad0[0x12];
    u16 unk12;
    u16 unk14;
    u8 unk16;
    u8 unk17;
    u8 pad1[0x22 - 0x18];
    u8 unk22;
} func_8021D36C_Struct;
typedef struct func_8021D36C_Struct2 {
    u8 pad[0x36];
    u16 unk36;
} func_8021D36C_Struct2;
extern func_8021D36C_Struct2 *D_801BBCDC;
#define s ((func_8021D36C_Struct *)&D_8017DD7C)
extern void func_80152F7C();
extern s32 func_80153008();

void func_8021D36C(void *arg0, s32 arg1) {
    u16 t;
    s32 k =s->unk16;

    if (k == 0) {
        t = D_801BBCDC->unk36;
        if (t == 0x31) {
            func_8012FE50(0x20, 0xF1, 4, 4, 0);
        } else if (t == 0x148) {
            func_8012FE50(0x20, 0x103, 4, 4, 0);
        } else if (t == 0x11D) {
            func_8012FE50(0x20, 0xF6, 4, 4, 0);
        } else if (t == 0x11E) {
            func_8012FE50(0x20, 0xF7, 4, 4, 0);
        } else if (t == 0x11B) {
            func_8012FE50(0x20, 0xFE, 4, 4, 0);
        } else {
            func_8012FE50(0xE, 0x73, 1, 1, 0);
        }
    } else {
        s->unk22 += 1;
        if (s->unk22 < s->unk14) {
            func_80152F7C();
            func_8012FE50(0x20, func_80153008(), 5, 5, 0);
        } else if (s->unk17 != 0 && k == 2 && s->unk12 == 0x11B) {
            func_8012FE50(0x20, 0xC2, 1, 1, 0);
        } else {
            func_8012FE50(0x20, 0xC3, 1, 1, 0);
        }
    }
    func_80005700(arg0);
}
