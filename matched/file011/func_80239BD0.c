#include "context.h"

typedef struct func_80239BD0_StructData {
    u8 pad[0xA];
    u8 unkA;
} func_80239BD0_StructData;
typedef struct func_80239BD0_StructEntry {
    func_80239BD0_StructData *data;
    u32 pad;
} func_80239BD0_StructEntry;
typedef struct func_80239BD0_StructArg {
    u8 pad0[0x90];
    struct func_80239DFC_Inner *unk90;
    u8 pad1[0xD];
    s8 unkA1;
    u8 pad2[3];
    s8 unkA5;
    u8 pad3[6];
    u16 unkAC;
    u8 pad4[2];
    func_80239BD0_StructEntry *unkB0;
} func_80239BD0_StructArg;
typedef struct func_80239BD0_StructGlobal {
    u8 pad[0x2D4];
    func_80239BD0_StructData *unk2D4;
    u8 unk2D8;
    u8 unk2D9;
} func_80239BD0_StructGlobal;
extern void func_80376BE4(void *);
extern void func_80231CE4(void *);

void func_80239BD0(func_80239BD0_StructArg *arg0, s32 arg1) {
    u8 pad[8];
    func_80239BD0_StructGlobal *global;
    struct func_80239DFC_Inner *inner;
    s32 state;
    u8 index;
    func_80239BD0_StructEntry *table;

    inner = arg0->unk90;
    state = inner->unk74;
    global = (state == 0 || state == 2) ? (func_80239BD0_StructGlobal *) D_801BC03C
                                        : (func_80239BD0_StructGlobal *) D_801BC3D8;
    table = arg0->unkB0;
    if (arg0->unkAC >= 0x20) {
        index = arg0->unkA5 + arg0->unkA1 * 5 - 5;
        global->unk2D4 = table[index + 1].data;
        global->unk2D9 = global->unk2D4->unkA;
        func_80376BE4(global);
        func_80231CE4(global);
        func_800058DC(arg0, func_8023A09C);
    }
}
