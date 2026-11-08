#include "common.h"
#ifndef G
extern int func_80005204(unsigned short);
#endif
extern u8 D_801BBBF0[];
typedef struct func_801300E8_Struct {
    u8 pad0[0x30];
    u16 unk30;
    u8 pad32[0x324 - 0x32];
    f32 unk324;
    u8 pad328[0x112C - 0x328];
    s32 unk112C;
    f32 unk1130;
    u8 pad1134[4];
    s32 unk1138;
    u8 pad113C[8];
    f32 unk1144;
    f32 unk1148;
    f32 unk114C;
} func_801300E8_Struct;
#define G ((func_801300E8_Struct *)D_801BBBF0)


typedef struct func_8012C3A0_StructNode {
    struct func_8012C3A0_StructNode *next;
    u8 pad[0x30];
    u8 type;
} func_8012C3A0_StructNode;

typedef struct func_8012C3A0_StructList {
    u8 pad[8];
    func_8012C3A0_StructNode *head;
} func_8012C3A0_StructList;

s32 func_8012C3A0(s32 arg0, u8 arg1)
{
    s32 count = 0;
    s32 limit = 999;
    func_8012C3A0_StructNode *node;

    switch (arg1) {
    case 0:
        arg0 = *(s32 *)(D_801BBBF0 + 0x40);
        break;
    case 3:
        arg0 = *(s32 *)(D_801BBBF0 + 0x44);
        break;
    case 1:
        arg0 = *(s32 *)(D_801BBBF0 + 0x4C);
        break;
    case 2:
        arg0 = *(s32 *)(D_801BBBF0 + 0x50);
        break;
    case 4:
        limit = *(s32 *)(D_801BBBF0 + 0x22C);
        arg0 = *(s32 *)(D_801BBBF0 + 0x44);
        break;
    case 7:
        limit = 48;
        arg0 = *(s32 *)(D_801BBBF0 + 0x50);
        break;
    case 5:
        return arg0;
    case 6:
        limit = 30;
        arg0 = *(s32 *)(D_801BBBF0 + 0x44);
        break;
    case 8:
        arg0 = *(s32 *)(D_801BBBF0 + 0x3C);
        break;
    default:
        return *(s32 *)(D_801BBBF0 + 0x3C);
    }
    if (arg0 != 0) {
        node = ((func_8012C3A0_StructList *)arg0)->head;
        if (node != NULL) {
            while (node != NULL) {
                if (node->type == arg1) {
                    count++;
                }
                node = node->next;
            }
        }
    }
    if (count > limit) {
        return 0;
    }
    return arg0;
}
