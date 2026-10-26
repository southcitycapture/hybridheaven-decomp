#include "context.h"

struct func_801D7314_StructA { s32 a, b, c; };
struct func_801D7314_StructB { s32 a, b; f32 c; };
struct func_801D7314_StructQ { u8 pad[0x76]; u8 u76; };
struct func_801D7314_StructP { u8 pad[0x5C]; struct func_801D7314_StructQ *u5C; };
struct func_801D7314_StructC { u8 pad[0x5C]; struct func_801D7314_StructA v; };
struct func_801D7314_StructD { u8 pad[0x2C]; struct func_801D7314_StructC *u2C; };
struct func_801D7314_StructR { u8 pad[4]; struct func_801D7314_StructD *u4; };

extern s32 func_801CC540();
extern s32 func_800058DC();
void func_80006214(s32 arg0);
void func_801D83AC(s32 arg0);
extern struct func_801D7634_Struct D_801E17C8;
extern void func_8013A2E0(void *, struct func_801D7314_StructA);
extern s32 func_80011140();
extern s32 func_80010550();
extern u8 D_801BC025[];
extern u8 D_801D7314[];
extern struct func_801D7314_StructA *D_801DBAD4_p;

void func_801D7314(struct func_801D7314_StructP *arg0, struct func_801D7314_StructR *arg1) {
    struct func_801D7314_StructB *p;
    if (D_801DBAEC == 0) {
        if (func_801CC540() != 0) {
            func_800058DC(arg0, D_801D7314);
            return;
        }
        if (D_801DBAD4 != 0) {
            func_80006214((s32)arg0);
            func_8013A2E0(D_8008DA88, *(struct func_801D7314_StructA *)D_801DBAD4);
            p = (struct func_801D7314_StructB *)arg0->u5C;
            ((struct func_801D7314_StructQ *)p)->u76 = 1;
            D_801DBAD4 = 0;
        }
        p = (struct func_801D7314_StructB *)D_801DBAD8;
        if (p != 0) {
            if (func_80011140(arg1, arg0->u5C, *(struct func_801D7314_StructA *)p, (u32)p->c) != 0) {
                D_801DBAD8 = 0;
            }
        } else {
            if (func_80010550(arg1, arg0->u5C) != 0) {
                D_801DBADC = 1;
            } else {
                D_801DBADC = 0;
            }
            *(struct func_801D7314_StructA *)&D_801E17C8 = arg1->u4->u2C->v;
            *(struct func_801D7314_StructA *)&D_801E17B8 = *(struct func_801D7314_StructA *)(D_801BC025 + 3);
        }
        if (D_801DBAE0 != 0) {
            func_801D83AC((s32)arg0);
        }
    }
}
