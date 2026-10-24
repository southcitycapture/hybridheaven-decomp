#include "context.h"

struct func_8002C4D0_StructG {
    u32 w0;
    u32 w1;
};
struct func_8002C4D0_StructV;
struct func_8002C4D0_StructV {
    u8 pad0[4];
    struct func_8002C4D0_StructG *(*handler)(struct func_8002C4D0_StructV *, s16 *, s32, s32, struct func_8002C4D0_StructG *);
    s32 (*setParam)(struct func_8002C4D0_StructV *, s32, void *);
};
struct func_8002C4D0_StructN {
    u8 pad0[8];
    s32 (*handler)(struct func_8002C4D0_StructN *);
    u8 padC[4];
    s32 samplesLeft;
};
struct func_8002C4D0_Struct {
    s32 head;
    u8 pad4[0x18];
    s32 paramSamples;
    s32 curSamples;
    u8 pad24[0x14];
    struct func_8002C4D0_StructV *outputFilter;
    u8 pad3C[0xC];
    s32 maxOutSamples;
};

struct func_8002C4D0_StructG *func_8002C4D0(struct func_8002C4D0_StructG *cmdList, s32 *cmdLen, s16 *outBuf, s32 outLen) {
    struct func_8002C4D0_StructN *client;
    struct func_8002C4D0_StructV *output;
    struct func_8002C4D0_Struct *drvr = (struct func_8002C4D0_Struct *)D_800498F0;
    s16 tmp = 0;
    struct func_8002C4D0_StructG *cmdlEnd = cmdList;
    struct func_8002C4D0_StructG *cmdPtr;
    s32 nOut;
    s16 *lOutBuf = outBuf;

    if (drvr->head == 0) {
        *cmdLen = 0;
        return cmdList;
    }

    for (drvr->paramSamples = func_8002C7F4((void *)drvr, (void *)&client);
         drvr->paramSamples - drvr->curSamples < outLen;
         drvr->paramSamples = func_8002C7F4((void *)drvr, (void *)&client)) {
        drvr->paramSamples &= ~0xf;
        client->samplesLeft += func_8002C780((void *)drvr, (*client->handler)(client));
    }

    drvr->paramSamples &= ~0xf;

    while (outLen > 0) {
        nOut = (drvr->maxOutSamples < outLen) ? drvr->maxOutSamples : outLen;

        cmdPtr = cmdlEnd;
        {
            struct func_8002C4D0_StructG *_a = cmdPtr++;
            _a->w0 = ((u32)(((u32)(7) & ((0x01 << (8)) - 1)) << (24)));
            _a->w1 = ((u32)(((u32)(0) & ((0x01 << (8)) - 1)) << (24))) | ((u32)(((u32)(0) & ((0x01 << (24)) - 1)) << (0)));
        }
        output = drvr->outputFilter;
        (*output->setParam)(output, 6, lOutBuf);
        cmdlEnd = (*output->handler)(output, &tmp, nOut, drvr->curSamples, cmdPtr);

        outLen -= nOut;
        lOutBuf += nOut << 1;
        drvr->curSamples += nOut;
    }
    *cmdLen = (s32)(cmdlEnd - cmdList);

    func_8002C6E8(drvr);

    return cmdlEnd;
}
