# nes_emu_c_plus_plus

An implementation of an NES emulator in C++, maintained for my personal education.


So far, only the 6502 Processor and a bus it can read/write from is complete. The 6502 can interpret instructions based 
on bytes read (now just stored in an array, but will emulate cartridge ROM later) from the bus. The 6502 instruction set 
has been implemented, but not fully tested. However, adjusting and incrementing registers, storing and reading values
from memory, and adding using the accumulator have all been tested and work.


This build simply multiplies two numbers together.



Credit to One_Lone_Coder on youtube for the basic template and heavy hand-holding. olc also provides the gui for this build 
as well.

Once this is in a satisfactory state, the next step will be to redo from scratch in a web browser.
