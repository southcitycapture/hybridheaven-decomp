#include "context.h"

typedef struct func_801BF6C4_StructElem {
    s32 a;
    s32 b;
    s32 c;
    u8 pad[0xC];
} func_801BF6C4_StructElem;

typedef struct func_801BF6C4_StructObj {
    s32 unk0;
    s32 pad4;
    func_801BF6C4_StructElem elems[20];
    s32 unk1E8;
    s16 unk1EC;
    s16 pad1EE;
    s32 unk1F0;
} func_801BF6C4_StructObj;

s32 func_801BF6C4(s32 arg0) {
    func_801BF6C4_StructObj **entry;
    s32 i;

    entry = (func_801BF6C4_StructObj **)&D_801D8D04[arg0];
    (*entry)->unk0 = arg0;
    for (i = 0; i < 20; i++) {
        (*entry)->elems[i].a = arg0;
        (*entry)->elems[i].b = 0;
        (*entry)->elems[i].c = 0;
    }
    (*entry)->unk1E8 = 0x40000;
    (*entry)->unk1EC = 0;
    (*entry)->unk1F0 = 0;
    return 1;
}
