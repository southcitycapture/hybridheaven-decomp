#include "common.h"
#include "common.h"

typedef struct func_8036B7EC_Struct {
    u32 unk0;
    u8 pad[0xC - 4];
    s16 unkC;
} func_8036B7EC_Struct;

typedef struct func_803698D0_Entry {
    u8 id;
    u8 pad[0x1F];
} func_803698D0_Entry;

extern func_803698D0_Entry D_80387860[];

func_8036B7EC_Struct *func_803698D0(u8 *arg0) {
    func_803698D0_Entry *p;
    s32 r;

loop:
    for (p = D_80387860; p->id != 0x57; p++) {
        if ((r = arg0[0x2D9]) == p->id) {
            return (func_8036B7EC_Struct *)p;
        }
    }
    r = arg0[0x2D8];
    if (r != 4) {
        if (r == 5) goto c5;
        if (r == 6) goto c6;
        if (r == 7) goto c7;
        r = 0x41;
        goto d2;
    }
    goto d;
c7:
    r = 0x47;
    if (1) goto e;
c6:
    r = 0x44;
    if (1) goto e;
c5:
    r = 0x49;
    if (1) goto e;
d:
    r = 0x41;
d2:
    arg0[0x2D8] = 4;
e:
    arg0[0x2D9] = r;
    goto loop;
}
