/*cada estado chama a ula ↑ 
[a saída é representada como um estado?]

função saída - switch case para cada registro, ex: case m1 == 1 receba o valor da variável do estado {saber qual estado, depende ↓}

FTE - switch case para cada estado, (em cada estado chama a saída ou a ula, ou as duas)
*/

#ifndef _pc_
#define _pc_
#include<iostream>
#include"ula.h"
#include"regs.h"
using namespace std;
class PC {
    
    private: 
    int EA, PE; // estado atual, proximo estado
    bool lastState;
    ULA ula;
    REGS regs;
    
    public:
    PC(ULA _ula, REGS _regs);
    
    void FTE_FS ();
    
    void updateState ();
        
    bool getLastState();
};

#endif
