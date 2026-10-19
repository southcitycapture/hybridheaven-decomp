void func_80032AB0(void *, s32, s32, s32);
extern u8 D_8005CE70[];

void func_80002794(s32 arg0, s32 a1, s32 a2) {
    s32 temp_a3;

    temp_a3 = arg0 & 0xFF;
    func_80032AB0(D_8005CE70 + (temp_a3 * 0x68), a1, a2, temp_a3);
}
