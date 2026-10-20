#include "context.h"

typedef struct func_8035A070_StructCopy {
    s32 words[10];
} func_8035A070_StructCopy;
typedef struct func_8035A070_StructLeaf {
    u8 pad[0x34];
    void *unk34;
} func_8035A070_StructLeaf;
typedef struct func_8035A070_StructMid {
    u8 pad[0x2C];
    func_8035A070_StructLeaf *unk2C;
} func_8035A070_StructMid;
typedef struct func_8035A070_StructObj {
    u8 pad[0x24];
    func_8035A070_StructMid *unk24;
} func_8035A070_StructObj;
typedef struct func_8035A070_StructArg {
    u8 pad[0xC];
    func_8035A070_StructObj *unkC;
} func_8035A070_StructArg;
extern func_8035A070_StructCopy D_801BCD58;
extern func_8035A070_StructCopy D_8038CBC0;
extern func_8035A070_StructCopy D_8038CBE8;
extern u8 D_803854D0[];
extern u8 D_80385508[];
extern void func_8035A120();

void func_8035A070(func_8035A070_StructArg *arg0, s32 arg1) {
    func_8035A070_StructCopy *dst;
    void *value;

    if (D_801BBCCC == (s32)arg0->unkC) {
        dst = &D_8038CBC0;
    } else {
        dst = &D_8038CBE8;
    }
    if (D_801BBCCC == (s32)arg0->unkC) {
        value = D_803854D0;
    } else {
        value = D_80385508;
    }
    *dst = D_801BCD58;
    arg0->unkC->unk24->unk2C->unk34 = value;
    func_800058DC(arg0, func_8035A120);
}
