#include "common.h"
unsigned short func_80017014(int arg0);            /* identical to context.h:323 */
int func_80017384(int arg0, unsigned short arg1);  /* identical to context.h:378 */
extern void *D_80044124[];
extern u16 D_800892B0[];
extern u16 D_8008EBC0;
extern u16 D_8008EBC2;
extern u16 D_8008EBCC;
extern s16 D_8008EBE2;
extern s16 D_8008EBE6;
extern s16 D_8008EBEC;
extern s16 D_8008EBFC;
typedef struct func_8001800C_Struct {
    s16 unk0;
    s16 unk2;
    u8 unk4;
    u8 pad5;
    s16 unk6;
    s16 unk8;
    u8 unkA;
    u8 padB;
    u16 unkC;
    u16 unkE;
    u8 pad10[0x16];
} func_8001800C_Struct;
extern func_8001800C_Struct D_8008EC18[];
extern u8 *D_8008EE8C;
extern s32 func_800058DC(s32, void *);
void func_800189C8(void);
s32 func_80018BD8(void);
extern void *func_8001B154(s32);


typedef struct func_80019460_Struct10 { u8 b[10]; } func_80019460_Struct10;
typedef struct func_80019460_Struct8 { u8 b[8]; } func_80019460_Struct8;
typedef struct func_80019460_Struct5 { u8 b[5]; } func_80019460_Struct5;
typedef struct func_80019460_StructEntry {
    u8 pad0;
    u8 unk1;
    u8 pad2[2];
    s16 unk4;
    u8 pad6[4];
    u8 unkA;
    u8 unkB;
    u8 padC[0x10E];
} func_80019460_StructEntry;
typedef struct func_80019460_StructFlags { u8 pad[4]; u16 unk4; } func_80019460_StructFlags;
extern func_80019460_Struct10 D_800441F8;
extern func_80019460_Struct8 D_80044204;
extern func_80019460_Struct5 D_8004420C;
extern void func_80019758(s32, s32);

void func_80019460(s32 arg0, s32 arg1) {
    u8 i;
    func_80019460_StructEntry *p;
    func_80019460_Struct10 sp34 = D_800441F8;
    func_80019460_Struct8 sp2C = D_80044204;
    func_80019460_Struct5 sp24 = D_8004420C;

    D_8008EBFC = D_800892B0[0x1E8 / 2] | D_800892B0[0x1C8 / 2];
    if (func_80018BD8() == 0) {
        for (i = 0, p = func_8001B154(D_8008EBC2 * 4); i < D_8008EC18[D_8008EBC2].unk4; i++, p++) {
            arg1 = 1;
            if (p->unk1 && p->unk4 == D_8008EC18[D_8008EBC2].unk2) {
                p->unkB = arg1;
                p->unkA = sp24.b[(u16)D_8008EBE6] + (u16)D_8008EBE2;
            }
        }
        for (i = 0, p = func_8001B154(D_8008EBC2 * 4); i < D_8008EC18[D_8008EBC2].unk4; i++, p++) {
            if (p->unk1 && p->unk4 != D_8008EC18[D_8008EBC2].unk2) {
                p->unkB = 2;
                p->unkA = sp24.b[(u16)D_8008EBE6] + (u16)D_8008EBE2;
                p->unk4 = (s16)(p->unk4 - ((u8)p->unkA));
            }
        }
        *(func_80019460_Struct8 *)D_8008EE8C = sp2C;
        func_800058DC(arg0, func_80019758);
        return;
    }
    if (*(u16 *)((u8 *)D_80044124[D_8008EBC0] + 4) & 0xF000) {
        if (*(u16 *)((u8 *)D_80044124[D_8008EBC0] + 4) & 0xB000) {
            D_8008EBEC = 0;
        } else {
            D_8008EBEC = 1;
        }
        if (D_8008EBCC == 0) {
            func_800189C8();
        }
    }
}
