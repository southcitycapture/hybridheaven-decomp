#include "context.h"

struct func_80236788_Part {
    u8 pad[0x38];
    u32 unk38;
};
struct func_80236788_Struct {
    u8 pad0[0x1C];
    void *unk1C;
    u8 pad20[0x78];
    struct func_80236788_Part *unk98;
    u8 pad9C[6];
    s8 unkA2;
    u8 padA3[2];
    s8 unkA5;
    u8 padA6[4];
    u8 unkAA;
};
extern u8 D_8023E3A8;
extern void func_80237250();
extern void func_80238E60();
extern void func_8023748C();
extern void func_80237EC8();
extern void func_802380EC();
extern void func_802398FC();
extern void func_80238928();
extern void func_80239048();
extern void func_802378DC();
extern void func_80237B7C();
extern void func_802397A8();
extern void func_802393F8();
#define G ((struct func_80236788_Struct *)D_8023E3B8)

u8 func_80236788(void) {
    struct func_80236788_Part *a2;

    if (G != NULL) {
        a2 = G->unk98;
        if (G->unk1C == (void *)func_80237250) {
            return 1;
        }
        if (D_8023E3A8 == 1) {
            return 8;
        }
        if ((G->unk1C == (void *)func_80238E60) || (G->unk1C == (void *)func_80238928)) {
            if (G->unkA2 == 0) {
                return 0xA;
            }
            if (func_80236348((void *)G) != 0) {
                if (G->unkA5 == 0) {
                    return 0xB;
                }
                if (G->unkA5 == 1) {
                    return 0xD;
                }
            }
            if ((a2->unk38 >> 31) != 0) {
                if (G->unkA5 == 0) {
                    return 0xF;
                }
                if (G->unkA5 == 1) {
                    return 0x10;
                }
                if (G->unkA5 == 2) {
                    return 0xE;
                }
            }
            if (G->unkA5 == 0) {
                return 0xC;
            }
            if (G->unkA5 == 1) {
                return 0xD;
            }
            if (G->unkA5 == 2) {
                return 0xB;
            }
        }
        if (G->unk1C == (void *)func_8023748C) {
            if (G->unkA5 == 0) {
                return 6;
            }
            if (G->unkA5 == 1) {
                return 7;
            }
        }
        if (G->unk1C == (void *)func_802378DC) {
            if (func_80236374((void *)G) != 0) {
                return 4;
            }
            if (func_8023639C(G) != 0) {
                if (G->unkA5 == 0) {
                    return 3;
                }
                if (G->unkA5 == 1) {
                    return 4;
                }
            }
            if (G->unkA5 == 0) {
                return 2;
            }
            if (G->unkA5 == 1) {
                return 3;
            }
            if (G->unkA5 == 2) {
                return 5;
            }
        }
        if (G->unk1C == (void *)func_80237B7C) {
            return G->unkAA;
        }
        if (G->unk1C == (void *)func_80237EC8) {
            if (G->unkA5 == 0) {
                return 8;
            }
            if (G->unkA5 == 1) {
                return 9;
            }
        }
        if (G->unk1C == (void *)func_802380EC) {
            return 9;
        }
        if ((G->unk1C == (void *)func_802397A8) || (G->unk1C == (void *)func_802398FC) || (G->unk1C == (void *)func_80239048) || (G->unk1C == (void *)func_802393F8)) {
            return 0xB;
        }
    }
    return 0;
}
