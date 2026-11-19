#include "common.h"
extern u8 D_801842A0[];
extern u8 D_8038CEC0;
typedef struct { u8 flag; u8 pad[3]; u8 *p; } func_803765D4_E;
extern func_803765D4_E D_8038CEC4[];


typedef struct func_80376708_StructEntry {
    u8 pad[6];
    u8 unk6;
} func_80376708_StructEntry;

typedef struct func_80376708_StructArg {
    u8 pad[0xA];
    s16 value;
    u8 padC[0x1FE - 0xC];
    u8 flags[30];
} func_80376708_StructArg;

void func_80376708(arg0)
    func_80376708_StructArg *arg0;
{
    s32 count;
    func_80376708_StructEntry *entries[19];
    func_803765D4_E *out;
    u8 i;
    s32 n;

    count = 0;
    for (i = 0; i < 5; i++) {
        if (arg0->flags[i * 6] == 1) {
            entries[count] = (func_80376708_StructEntry *)(D_801842A0 + i * 0x1C + 0x63C);
            count = (count + 1) & 0xFF;
        }
    }
    if (count != 0) {
        D_8038CEC0 = count;
        for (out = D_8038CEC4, i = 0, n = count;i < n; i++, out++) {
            out->p = (u8 *)entries[i];
            if (arg0->value >= entries[i]->unk6) {
                out->flag = 1;
            } else {
                out->flag = 0;
            }
        }
    }
}
