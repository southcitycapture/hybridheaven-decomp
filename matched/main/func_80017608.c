#include "common.h"
extern u16 D_800892B0[];
extern u16 D_8008E7C0[];
extern s16 D_8008E9C0[];
s32 func_800170C8(s32 arg0);


struct func_80017608_Struct {
    u8 pad[0x42FC];
    u16 unk42FC;
};

s32 func_80017608(void)
{
    u16 temp_s0;

    temp_s0 = ((struct func_80017608_Struct *) D_800892B0)->unk42FC;
    if (temp_s0 != 0) {
        do {
            ((struct func_80017608_Struct *) D_800892B0)->unk42FC--;
            func_800170C8(D_8008E7C0[((struct func_80017608_Struct *) D_800892B0)->unk42FC]);
            temp_s0 = ((struct func_80017608_Struct *) D_800892B0)->unk42FC;
            D_8008E9C0[temp_s0] = 0;
            D_8008E7C0[temp_s0] = 0;
        } while (temp_s0 != 0);
    }
    ((struct func_80017608_Struct *) D_800892B0)->unk42FC = 0;
    return 1;
}
