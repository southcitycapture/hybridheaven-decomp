#include "context.h"

typedef struct func_801D3788_StructState {
    u8 pad[0x24];
    s32 flags;
    u8 pad28[8];
    s32 address;
    u8 pad34[0x14];
    u8 r, g, b, a;
} func_801D3788_StructState;
typedef struct func_801D3788_StructObject {
    u8 pad[0x2C];
    func_801D3788_StructState *state;
} func_801D3788_StructObject;
typedef struct func_801D3788_StructList {
    u8 pad[4];
    s32 entries;
    u8 pad8[4];
    u16 count;
} func_801D3788_StructList;
typedef struct func_801D3788_StructRoot {
    u8 pad[0x5C];
    func_801D3788_StructList *list;
} func_801D3788_StructRoot;
extern func_801D3788_StructObject *D_8008DA88[];
extern u8 D_801D9360[];
extern u8 D_801D93B8[];
extern s32 D_801DB390;
extern f32 D_801E14C8[3];

void func_801D3788(f32 arg0, f32 arg1, f32 arg2)
{
  s32 *entry;
  s32 offset;
  func_801D3788_StructObject **object;
  func_801D3788_StructList *list;
  func_801D3788_StructState *state;
  D_801E14C8[0] = arg0;
  D_801E14C8[1] = arg1;
  D_801E14C8[2] = arg2;
 func_80006214(D_801E14A0); list = ((func_801D3788_StructRoot *) D_801E14A0)->list; offset = 4; object = (func_801D3788_StructObject **) list->entries; entry = ((s32 *) object) + 1; if (((s32) list->count) >= 2) { do { object = (func_801D3788_StructObject **) (((u8 *) D_8008DA88) + offset); if ((*entry) < 0) { } else { state = (*object)->state; state->flags = state->flags | 0x100; state = (*object)->state; if ((state->flags & 0xFF) == 0x15) {
          state->address = ((s32) D_801D9360) | 0x40000000;
        }
        else
        {
          state->address = ((s32) D_801D93B8) | 0x40000000;
        }
        (*object)->state->r = 0;
        (*object)->state->g = 0;
        (*object)->state->b = 0;
        (*object)->state->a = 0xFF;
      }
      offset += 4;
      entry++;
    }
    while (offset < (list->count * 4));
  }
  D_801DB390 = 0;
}
