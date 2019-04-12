CC = g++

ula.o: ula.cpp ula.h
	$(CC) ula.cpp -c

regs.o: regs.cpp regs.h
	$(CC) regs.cpp -c 

pc.o: pc.cpp pc.h ula.o regs.o
	$(CC) pc.cpp -c

PO_PC_HW.o: PO_PC_HW.cpp ula.o regs.o pc.o
	$(CC) PO_PC_HW.cpp -c

PO_PC_HW: PO_PC_HW.o ula.o regs.o pc.o
	$(CC) PO_PC_HW.o ula.o regs.o pc.o -o PO_PC_HW

clear:
	rm *.
