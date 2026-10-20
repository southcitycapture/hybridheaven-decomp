#include "context.h"

typedef struct func_801D35BC_StructPos {
    u8 pad[4];
    f32 x, y, z;
} func_801D35BC_StructPos;
typedef struct func_801D35BC_StructObj {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_801D35BC_StructPos *unk30;
} func_801D35BC_StructObj;
typedef struct func_801D35BC_StructInner {
    u8 pad[0xC];
    void *unkC;
} func_801D35BC_StructInner;
typedef struct func_801D35BC_Struct {
    u8 pad0[0xC];
    func_801D35BC_StructInner *unkC;
    u8 pad10[0x84];
    u8 unk94;
} func_801D35BC_Struct;

extern s32 func_80006214(void *);
extern void func_801D3060(f32 *, void *, func_801D35BC_StructObj **);
extern void func_801D36C0();
extern func_801D35BC_StructObj *D_8008DA88[];

void func_801D35BC(func_801D35BC_Struct *arg0, s32 arg1) {
    s32 i;
    void *inner;
    struct { f32 x, y, z; } pos;
    s8 flag;
    func_801D35BC_StructPos *dest;

    inner = arg0->unkC->unkC;
    flag = 0;
    if (func_801CE0E8(arg0, &flag) == 0) {

        i = 0;
        arg1 = 0;
        if ((s32)arg0->unk94 > 0) {
            do {
                func_80006214(inner);
                func_801D3060(&pos.x, inner, D_8008DA88);
                func_80006214(arg0);
                dest = D_8008DA88[i]->unk30;
                dest->x = pos.x;
                dest->y = pos.y;
                dest->z = pos.z;
                if (arg1 >= 2) {
                    D_8008DA88[i]->unk22 = 0;
                }
                i = (i + 1) & 0xFF;
                arg1 = i;
            } while (i < (s32)arg0->unk94);
        }
        func_800058DC(arg0, (s32)func_801D36C0);
    }
}
