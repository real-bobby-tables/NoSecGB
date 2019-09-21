#pragma once

#include <functional>
#include <array>

#include "memory.h"

struct gb_registers
{
  uint16 pc; //program counter
  struct
  {
    //note that the flags register is f
    union {
      struct {
        uint a;
        uint f;
      };
      uint16 af;
    };

    union {
      struct {
        uint b;
        uint c;
      };
      uint16 bc;
    };
    union {
      struct {
        uint d;
        uint e;
      };
      uint16 de;
    };

    union {
      struct {
        uint h;
        uint l;
      };
      uint16 hl;
    };

      
  uint16 sp; //stack pointer
  uint16 m, t; //something for timing i think?
}
struct clock
{
  uint16 m, t;
}

class cpu
{
 public:
  cpu();
  void run();
  uint readPC();
    
 private:
  gb_registers regs;
  
  //gonna do this the opcode map style
  //std::array<std::function<uint>> instructionArray;
  
}
