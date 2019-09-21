#include "cpu.h"

cpu::cpu()
{
  regs.pc = 0;
  regs.af = 0;
  regs.bc = 0;
  regs.de = 0;
  regs.hl = 0;
  regs.sp = 0;
  regs.m = 0;
  regs.t = 0;
}

  
