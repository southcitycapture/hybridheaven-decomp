extern s32 func_80032DD0();
extern u8 D_8005CE70[];

void func_80002750(s32 arg0, s32 a1, s32 a2) {
    s32 temp_a3;

    temp_a3 = arg0 & 0xFF;
    func_80032DD0(D_8005CE70 + (temp_a3 * 0x68), a1, a2, temp_a3);
}
