#include "context.h"

extern s32 D_801DA138;

#define OBJ (*(func_801D766C_StructObject **)(D_8008DA88 + i * 4))

void func_801D82B8(u8 arg0) {
    s32 entries;
    s32 i;
    func_801D766C_StructList *list;

    func_80006214(D_801E17B0);
    list = ((func_801D766C_StructRoot *)D_801E17B0)->list;
    entries = list->entries;
    if (list->count < 2) {
        return;
    }
    i = 1;
    do {
        if (*(s32 *)(entries + i * 4) < 0) {
        } else {
            OBJ->state->flags |= 0x100;
            OBJ->state->address = (s32)&D_801DA138 | 0x40000000;
            OBJ->state->r = 0xFF;
            OBJ->state->g = 0xFF;
            OBJ->state->b = 0xFF;
            OBJ->state->a = arg0;
        }
        i++;
    } while (i * 4 < list->count * 4);
}
