#include "common.h"


typedef struct func_80031FF0_Struct {
    s32 status;
    void *queue;
    s32 channel;
    u8 id[32];
    u8 label[32];
    s32 version;
    s32 dir_size;
    s32 inode_table;
    s32 minode_table;
    s32 dir_table;
    s32 inode_start_page;
    u8 banks;
    u8 activebank;
} func_80031FF0_Struct;

extern s32 func_80033E10(void *mq, s32 channel, u16 address, u8 *buffer, s32 force);
extern s32 func_80034060(void *mq, s32 channel, u16 address, u8 *buffer);
extern s32 func_80029B00(void *mq, s32 channel);
extern void func_80030610(void *mq, void *msg, s32 count);
extern s32 func_80034560(void *t, u64 countdown, u64 interval, void *mq, void *msg);
extern s32 func_800266B0(void *mq, void *msg, s32 flag);
extern u8 D_800CD6B0[];
extern u8 D_800CD6D0[];
extern u8 D_800CD6E8[];

s32 func_80031FF0(void *mq, func_80031FF0_Struct *pfs, s32 channel) {
    s32 i;
    s32 ret;
    u8 temp[32];

    pfs->status = 0;
    for (i = 0; i < 32; i++)
        temp[i] = 0xFE;
    ret = func_80033E10(mq, channel, 0x400, temp, 0);
    if (ret == 2)
        ret = func_80033E10(mq, channel, 0x400, temp, 0);
    if (ret != 0)
        return ret;
    ret = func_80034060(mq, channel, 0x400, temp);
    if (ret == 2)
        ret = 4;
    if (ret != 0)
        return ret;
    if (temp[31] == 0xFE)
        return 11;
    i = 0;
    do {
        temp[i] = 0x84;
        i++;
    } while (i < 32);
    ret = func_80033E10(mq, channel, 0x400, temp, 0);
    if (ret == 2)
        ret = 4;
    if (ret != 0)
        return ret;
    ret = func_80034060(mq, channel, 0x400, temp);
    if (ret == 2)
        ret = 4;
    if (ret != 0)
        return ret;
    if (temp[31] != 0x84)
        return 11;
    ret = func_80029B00(mq, channel);
    if (ret != 0)
        return ret;
    func_80030610(D_800CD6D0, D_800CD6E8, 1);
    func_80034560(D_800CD6B0, 0x895440, 0, D_800CD6D0, D_800CD6E8);
    func_800266B0(D_800CD6D0, NULL, 1);
    pfs->queue = mq;
    pfs->status = 0x10;
    pfs->channel = channel;
    pfs->activebank = 0x84;
    pfs->banks = 0xFF;
    pfs->version = 0xFF;
    pfs->dir_size = 0xFF;
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80031FF0/func_80032220.s")

