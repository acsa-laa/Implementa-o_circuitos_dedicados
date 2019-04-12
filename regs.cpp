#include"regs.h"
REGS::REGS(){
            //regs = [ contador, 2, num,aux1, aux2, ver, aux5, raiz,quadrado, 0, 1, aux3, aux4, -1, 0.00001];
            regs[0]= 0;
            regs[1] = 2;
            regs[2] = 4;
            regs[3] = 0;
            regs[4] = 0;
            regs[5] = 0;
            regs[6] = 0;
            regs[7] = 0;
            regs[8] = 0;
            regs[9] = 0;
            regs[10] = 1;
            regs[11] = 0;
            regs[12] = 0;
            regs[13] = -1;
            regs[14] = 0.00001;
            };
int REGS::readR(int _adress) {
    return (regs[_adress]);
};
void REGS::writeR(int _adress, float _v) {
    regs[_adress]= _v;
};
