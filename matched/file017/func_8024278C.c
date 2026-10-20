#include "context.h"

struct func_8024278C_SB { u8 pad[0x22]; u8 b22; };
struct func_8024278C_SC { u8 pad[8]; f32 f8; };
struct func_8024278C_SD { u8 pad[0x30]; struct func_8024278C_SC *p30; };
struct func_8024278C_SA { struct func_8024278C_SD *p0; u8 pad[0x10]; struct func_8024278C_SB *p14; };
struct func_8024278C_SE { u8 pad[0x2C]; struct func_8024278C_SC *p2C; };
struct func_8024278C_S0 { u8 pad[0x3C]; u16 u3C; };
extern void func_80243E48(void *, void *);
extern u8 D_8025C404[];
extern f32 D_8025C700;
extern u8 func_802428B8[];

void func_8024278C(struct func_8024278C_S0 *arg0, struct func_8024278C_SA *arg1)
{
  int sp5C;
  sp5C = arg0->u3C;
  arg0->u3C = arg0->u3C + 1;
  func_80243CC0(arg0, (s32) arg1);
  func_80243E48(arg0, arg1);
  if (sp5C == 0)
  {
    arg1->p14->b22 = 1;
  }
  if (sp5C >= 0xB4)
  {
    func_8011AAF4(D_8025C404, 0x2AA, arg0, 0, 1, 0.0f, 235.0f, 250.0f, D_8025C700, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 55.0f, -1, -1);
    arg1->p0->p30->f8 = -450.0f;
    ((struct func_8024278C_SE *) D_801BBCD0)->p2C->f8 = -450.0f;
    func_802441AC();
    func_80020718(0x6C5);
    func_800058DC(arg0, func_802428B8);
  }
}
