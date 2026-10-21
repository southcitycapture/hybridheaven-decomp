#include "context.h"

struct func_80006F8C_StructB {
    u8 pad[0x6C];
    u16 unk6C;
};
struct func_80006F8C_Struct {
    struct func_80006F8C_Struct *unk0;
    u8 pad4[4];
    struct func_80006F8C_Struct *unk8;
    u8 padC[0x1C];
    u16 unk28;
    u16 unk2A;
    struct func_80006F8C_StructB *unk2C;
};
extern s32 func_80006AB4(void *);
struct func_80006F8C_StructE {
    struct func_80006F8C_Struct *unk0;
    u8 pad[0x80];
};
extern struct func_80006F8C_StructE D_8005D050[][60];
extern u8 D_80062D20[];
extern struct func_80006F8C_Struct *D_8008D5D8[];

void func_80006F8C(u16 arg0, struct func_80006F8C_Struct *arg1) {
    struct func_80006F8C_Struct *s1;
    s32 s2;
    s32 a0;
    s32 v;
    u8 n;
    u8 *p;
    s32 t;

    s2 = 0;
    if (arg1 != NULL) {
        do {
            s1 = arg1->unk0;
            if ((arg1->unk28 & arg0) && func_80006AB4(arg1) && arg1->unk2A == 6) {
                v = arg1->unk2C->unk6C;
                if (v & 0xF0) {
                    if (v & 2) {
                        a0 = 0;
                    } else if (v & 4) {
                        a0 = 1;
                    } else {
                        a0 = 2;
                    }
                    D_8005D050[a0][D_80062D20[a0]++].unk0 = arg1;
                }
            }
            if (arg1->unk8 != NULL) {
                if (s1 != NULL) {
                    D_8008D5D8[s2] = s1;
                    s2++;
                }
                arg1 = arg1->unk8;
            } else if (s1 == NULL && (t = s2 - 1, s2 != 0)) {
                arg1 = D_8008D5D8[t];
                s2 = t;
            } else {
                arg1 = s1;
            }
        } while (arg1 != NULL);
    }
}
