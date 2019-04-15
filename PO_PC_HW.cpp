#include"ula.h"
#include"pc.h"
#include"regs.h"

int main() {

        ULA ula = ULA();
        REGS regs= REGS();
        PC pc= PC(ula, regs);
        
        for(int _clock=0; _clock < 1000; _clock++) {

            pc.FTE_FS();  // e envir a palavra de controle antes da troca de estado
            pc.updateState();
            if(pc.getLastState() == true) 
                break;  
        }/*
        while(true){
            pc.FTE_FS();  // e envir a palavra de controle antes da troca de estado
            pc.updateState();
            if(pc.getLastState() == true) 
                break;
        }  */

        return 0;
    }    
