#include "context.h"

extern u8 D_8017B768[];

struct func_80147924_Obj { u8 pad[0x34]; u32 unk34; };
struct func_80147924_Node {
    u8 pad0[0x10];
    struct func_80147924_Node *unk10;
    u8 pad1[0x18];
    struct func_80147924_Obj *unk2C;
};
struct func_80147924_Struct { u8 pad[0x24]; struct func_80147924_Node *unk24; };

s32 func_80147924(struct func_80147924_Struct *arg0, u8 arg1, u8 arg2)
{
    u8 i = 0;
    struct func_80147924_Node *n;
    if (arg0 != NULL) {
        n = arg0->unk24;
        if (n != NULL) {
            do {
                if (i == arg1) n->unk2C->unk34 = (u32)D_8017B768 | 0x40000000;
                if (i == arg2) {
                    n->unk2C->unk34 = (u32)D_8017B768 | 0x40000000;
                }
                n = n->unk10;
                i++;
            } while (n != NULL);
        }
        return 1;
    }
    return 0;
}
