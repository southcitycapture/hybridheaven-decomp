#include "common.h"
typedef struct func_8001F498_Struct {
    s32 unk0;
    s32 unk4;
    struct func_8001F498_Struct *unk8;
    struct func_8001F498_Struct *unkC;
} func_8001F498_Struct;
extern func_8001F498_Struct D_80091BC0;
void func_8001F160(s32 arg0, s32 arg1);


/* GGA: heapInit */
void func_8001F204(func_8001F498_Struct *blk, s32 size) {
    func_8001F498_Struct *head;
    func_8001F498_Struct *tail;

    func_8001F160((s32)blk, size);
    D_80091BC0.unk0 = (s32)blk;
    D_80091BC0.unk4 = size;
    head = (func_8001F498_Struct *)D_80091BC0.unk0;
    head->unk8 = NULL;
    head->unkC = NULL;
    head->unk4 = 0x10;
    head->unk0 = D_80091BC0.unk0;
    tail = (func_8001F498_Struct *)((s32)D_80091BC0.unk0 + D_80091BC0.unk4) - 1;
    tail->unkC = NULL;
    tail->unk4 = 0x10;
    tail->unk8 = head;
    tail->unk0 = (s32)D_80091BC0.unk0 + D_80091BC0.unk4 - 0x10;
    head->unkC = tail;
    D_80091BC0.unkC = tail;
    D_80091BC0.unk8 = head;
}
