#ifndef __E6809_H
#define __E6809_H

/* user defined read and write functions */

extern unsigned char e6809_read8(unsigned address);
extern void e6809_write8(unsigned address, unsigned char data);

extern void e6809_instruction(unsigned address);

void e6809_reset (int trace);
unsigned e6809_sstep (unsigned irq_i, unsigned irq_f);

#endif
