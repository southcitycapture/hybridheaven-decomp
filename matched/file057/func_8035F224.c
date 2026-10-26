#include "common.h"
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
void func_800058DC(void *arg0, void *arg1);
extern s32 func_80010550(s32, s32);
extern s32 func_802233B0();
extern void func_802237B0(void *arg0, s32 arg1);


extern s32 func_802320DC();
extern u16 func_80011590();
extern void func_8035F8D8();
extern void func_8035F544();
extern void func_8035F6B4();

typedef struct func_8035F224_Globals {
    u8 pad0[0xDC];
    void *unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8035F224_Globals;

typedef struct func_8035F224_Arg {
    u8 pad[0x5C];
    s32 unk5C;
} func_8035F224_Arg;

typedef struct func_8035F224_StructE {
    u8 pad0[2];
    s16 unk2;
    u8 pad1[0x2C];
    u32 b0 : 1;
    u32 bf2 : 2;
    u32 r30 : 29;
    u8 pad2[4];
    u32 hi : 1;
    u32 mode : 2;
    u32 flag : 1;
    u32 rest : 28;
} func_8035F224_StructE;

typedef struct func_8035F224_Sub {
    u8 pad0[4];
    u16 unk4;
} func_8035F224_Sub;

typedef struct func_8035F224_Obj {
    u8 pad0[0x24];
    f32 unk24;
} func_8035F224_Obj;

void func_8035F224(void *arg0, s32 arg1) {
    s32 objSave[1];
    func_8035F224_StructE *entry;
    void *other;
    func_8035F224_Sub *sub;
    u16 sp1E;
    s32 objPtr;

    objSave[0] = ((func_8035F224_Arg *)arg0)->unk5C;
    entry = (func_8035F224_StructE *)(((void *)arg0 == ((func_8035F224_Globals *)D_801BBBF0)->unkDC) ? D_801BC03C : D_801BC3D8);
    if ((void *)arg0 != ((func_8035F224_Globals *)D_801BBBF0)->unkDC) {
        other = D_801BC03C;
    } else {
        other = D_801BC3D8;
    }
    if (entry->unk2 <= 0 || entry->bf2 != 0) {
        func_802233B0(arg0, arg1, entry);
        return;
    }
    if (((func_8035F224_Globals *)D_801BBBF0)->unk1031 != 0xF) {
        func_802237B0(arg0, 1);
        entry->mode = 2;
        sp1E = func_80010550(arg1, objSave[0]);
        objPtr = objSave[0];
        if (!entry->flag) {
            if (func_80011590((u16)(u32)(((func_8035F224_Obj *)((objPtr += 0x1C) - 0x1C))->unk24 * 30.0f)) < ((func_8035F224_Sub *)objPtr)->unk4) {
                if (func_802320DC(other) == 0) {
                    func_8035F8D8(arg0, arg1);
                    return;
                }
                func_800058DC(arg0, func_8035F544);
                return;
            }
        }
        objPtr = objSave[0];
        if (entry->flag == 1) {
            if (func_80011590((u16)(u32)(((func_8035F224_Obj *)((objPtr += 0x1C) - 0x1C))->unk24 * 13.0f)) == ((func_8035F224_Sub *)objPtr)->unk4 && func_802320DC(other) == 0) {
                func_8035F8D8(arg0, arg1);
                return;
            }
            if (sp1E != 0) {
                func_800058DC(arg0, func_8035F6B4);
            }
        }
    }
}
