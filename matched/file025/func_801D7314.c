#include "context.h"

extern void func_8013A2E0(void *, struct func_801D6D98_StructA);
extern u8 D_801D7314[];
void func_801D83AC(s32 arg0);
extern struct func_801D7634_Struct D_801E17C8;

void func_801D7314(struct func_801D6D98_StructT *arg0, struct func_801D6D98_StructR *arg1) {
    struct func_801D6D98_StructB *p;
    if (D_801DBAEC == 0) {
        if (func_801CC540() != 0) {
            func_800058DC(arg0, D_801D7314);
            return;
        }
        if (D_801DBAD4 != 0) {
            func_80006214(arg0);
            func_8013A2E0(D_8008DA88, *(struct func_801D6D98_StructA *)D_801DBAD4);
            p = (struct func_801D6D98_StructB *)arg0->u5C;
            ((struct func_801D6D98_StructQ *)p)->u76 = 1;
            D_801DBAD4 = 0;
        }
        p = (struct func_801D6D98_StructB *)D_801DBAD8;
        if (p != 0) {
            if (func_80011140(arg1, arg0->u5C, *p, (u32)p->c) != 0) {
                D_801DBAD8 = 0;
            }
        } else {
            if (func_80010550(arg1, arg0->u5C) != 0) {
                D_801DBADC = 1;
            } else {
                D_801DBADC = 0;
            }
            *(struct func_801D6D98_StructA *)&D_801E17C8 = *(struct func_801D6D98_StructA *)&arg1->u4->u2C->u5C;
            *(struct func_801D6D98_StructA *)&D_801E17B8 = *(struct func_801D6D98_StructA *)(D_801BC025 + 3);
        }
        if (D_801DBAE0 != 0) {
            func_801D83AC((s32)arg0);
        }
    }
}
