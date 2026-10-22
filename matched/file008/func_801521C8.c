#include "context.h"
extern u16 D_801BBD5E;
extern void func_80150584(void);
void func_801521C8(void)
{
  int new_var;
  u16 *new_var2;
  new_var = D_801BBD5E;
  ;
  if (new_var == 0)
  {
    func_80151C34();
  }
  new_var2 = &D_801BBD5E;
  if (((D_801BBD5E % 30) == 0) ^ 0)
  {
    func_80150584();
  }
  D_801BBD5E = (*new_var2) + 1;
}
