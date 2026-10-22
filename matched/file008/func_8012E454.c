#include "context.h"
void func_8012C9C0(void *arg);
void func_8012CB4C(func_8012CB4C_Struct *arg0);
void func_8012CE10(void *arg0);
void func_8012DE58(func_8012DE58_A *arg0);
extern void func_801C4A5C(void *, s32);
s32 func_80126944(void);
void func_8012E25C(struct func_8012E25C_StructA *arg0, s32 arg1);
extern void func_8012E31C(void *, s32);
typedef struct func_8012E454_StructC { s32 pad; f32 unk4; f32 unk8; f32 unkC; } func_8012E454_StructC;
typedef struct func_8012E454_StructB { u8 pad[0x2C]; func_8012E454_StructC *unk2C; } func_8012E454_StructB;
typedef struct func_8012E454_StructG {
    u8 pad0[0xE0];
    func_8012E454_StructB *unkE0;
    u8 pad1[0x374 - 0xE4];
    f32 unk374; f32 unk378; f32 unk37C;
    u8 pad2[0xEF0 - 0x380];
    u16 unkEF0;
    u8 pad3[0x1031 - 0xEF2];
    u8 unk1031;
} func_8012E454_StructG;
typedef struct func_8012E454_StructA { u8 pad[0x24]; s32 unk24; } func_8012E454_StructA;
extern s32 func_80108634(f32, f32, s32);
extern void func_8012DA90(void *);
extern void func_801C787C(void *);

#define G ((func_8012E454_StructG *)D_801BBBF0)

void func_8012E454(func_8012E454_StructA *arg0, s32 arg1) {
    func_8012E454_StructC *c;
    if (arg0->unk24 != 0) {
        func_8012D7A8(arg0);
        if (!(G->unkEF0 & 0x10)) {
            func_8012E25C((void *)arg0, arg1);
            func_8012DA90(arg0);
            func_8012CB4C((void *)arg0);
            func_8012C9C0(arg0);
            func_8012CE10(arg0);
            func_8012DE58((void *)arg0);
            c = G->unkE0->unk2C;
            if (func_80108634(c->unk4, c->unk8, *(s32 *)&c->unkC) != 0) {
                G->unkE0->unk2C->unk4 = G->unk374;
                G->unkE0->unk2C->unk8 = G->unk378;
                G->unkE0->unk2C->unkC = G->unk37C;
            }
            func_801C4A5C(arg0, 1);
            func_801C787C(arg0);
            if (func_80126944() == 1) {
                if (G->unk1031 != 5 && G->unk1031 != 7 && G->unk1031 != 0xA && G->unk1031 != 0xB) {
                    return;
                }
            }
            func_8012E31C(arg0, arg1);
        }
    }
}
