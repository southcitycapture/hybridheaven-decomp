#include "context.h"
typedef struct func_803643CC_Struct {
    s32 x, y, z;
} func_803643CC_Struct;
typedef struct func_803643CC_Glob {
    u8 pad[0xDC];
    s32 unkDC;
    u8 padE0[0xC];
    s32 unkEC;
} func_803643CC_Glob;
struct func_803673B4_StructGlobal;
extern struct func_803673B4_StructGlobal D_801BBBF0;
extern void func_80006214();
extern void func_80360400();
extern u8 D_8008DA88[];
extern void D_80364340(s32, s32, func_803643CC_Struct);

void func_803643CC(s32 arg0, s32 arg1) {
    s32 a;
    func_803643CC_Struct sp28;

    if (arg0 != ((func_803643CC_Glob *)&D_801BBBF0)->unkDC) {
        a = ((func_803643CC_Glob *)&D_801BBBF0)->unkDC;
    } else {
        a = ((func_803643CC_Glob *)&D_801BBBF0)->unkEC;
    }
    func_80006214(a);
    func_80360400(&sp28, a, D_8008DA88);
    func_80006214(arg0);
    D_80364340(arg0, arg1, sp28);
}
