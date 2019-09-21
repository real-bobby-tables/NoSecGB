
/*
  gameboy memory map is like so:
  
  0000 - 3FFF is rom bank 0, this can never be swapped out
  4000 - 7FFF is rom bank n, this can be swapped out. n can be from 0 to 3 for a max of 4 different banks
  8000 - 97FF is tile ram, where the actual game tiles are stored
  9800 - 9FFF is background map 
  A000 - BFFF is cartridge ram
  C000 - DFFF is working ram
  E000 - FDFF is a mirror of the above, so this is effectively echo ram
  FE00 - FE9F is object attribute memory (OAM), this contains the games sprites
  FEA0 - FEFF is not used. reading gives 0s and writing does nothing
  FF00 - FF7F is where the I/O registers are located. 
  FF80 - FFFE is normal RAM, used for the stack
  FFFF is the interupt enable register 

*/


/*for io regs: https://fms.komkon.org/GameBoy/Tech/Software.html */
#define JOYPAD 0xFF00
#define TIMECNT 0xFF05
#define TIMEMOD 0xFF06
#define TIMECONT 0xFF07

class mmu
{
 public:
  mmu();
  uint readMemory(uint address);
  void writeMemory(uint address, uint val);
 private:
  uint ram[0xFFFF];
}
