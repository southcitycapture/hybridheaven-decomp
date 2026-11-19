#include "common.h"


typedef struct func_80383E54_Struct {
    u32 w0;
    u32 w1;
} func_80383E54_Struct;
extern void func_80383F34(void *, void *, void *, u8);
extern u8 D_80385070[];
extern u8 D_80387D30[];
extern u8 D_8038BD30[];
extern u8 D_8038BF30[];
extern u8 D_8038D2BC[];
extern u8 D_8038D73C[];
extern u8 D_8038DAFC[];
extern u8 D_8038DB44[];
extern u8 D_8038DBA4[];
extern s32 D_8038DBBC;
extern u8 D_8038DBC0;
extern s32 D_8038DBD0;
extern u8 D_8038DBD4;
extern s32 D_8038DBD8;
extern func_80383E54_Struct *D_8038DDC0;

void *func_80383E54(void *arg0, void *arg1)
{
  D_8038DDC0 = arg1;
  if (D_8038DBD8 == 1)
  {
    func_80383F34(D_8038DBA4, D_8038BD30, D_8038D73C, 0xFF);
  }
  if (D_8038DBBC == 1)
  {
    func_80383F34(D_8038DAFC, D_80385070, D_8038BF30, D_8038DBC0);
  }
  if (D_8038DBD0 == 1)
  {
    func_80383F34(D_8038DB44, D_80387D30, D_8038D2BC, D_8038DBD4);
  }
  {
    func_80383E54_Struct *g = D_8038DDC0++;
    g->w1 = 0;
    g->w0 = 0xDF000000;
  }
  return D_8038DDC0;
}
