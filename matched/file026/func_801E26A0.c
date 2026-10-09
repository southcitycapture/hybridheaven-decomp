#include "context.h"
void D_8038BD88(f32, f32, f32);
extern void D_8038C158(void);
s32 func_801C0B8C(u64 time);
void func_8038BD50(f32, f32, f32);
extern s32 func_8038D28C(s32 arg0);

extern f32 D_801FBD3C;
extern f32 D_801FBD40;
extern f32 D_801FBD44;
extern u8 *D_8008DA88[];
extern s32 func_8038D8B8[];

void func_80006214(s32);

s32 func_801E26A0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0294B4A0) != 0) {
        func_8038BD50(D_801FBD3C, 21.5, 27.0);
        D_8038BD88(D_801FBD40, D_801FBD44, 0.16);
        func_8038D28C(0x694);
        func_80006214(func_8038D8B8[5]);
        D_8008DA88[6][0x22] = 0;
        D_8038C158();
        return 4;
    }
    return 3;
}
