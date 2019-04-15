#include"pc.h"
PC::PC (ULA _ula, REGS _regs) {
    ula= _ula; 
	regs= _regs;
	EA = 0;
	PE = 0;
    lastState= false;
};

void PC::FTE_FS () {
        
        switch (EA) {
            
            case 0 : { ula.readA(regs.readR(0));
            		   ula.readB(regs.readR(9));
            		   ula.op(5); // executa instrução de controle na ULA
                       if (ula.getCond() == true)
                        PE= 1; 
                       else 
                        lastState = true; // estado de controle
                       break; 
                     }; 
            
            case 1 : {  PE= 2; 
                        ula.readA(regs.readR(7)); 
                        ula.readB(regs.readR(7));
                        ula.op(3);
                        regs.writeR(8, ula.writeResult()); 
                        break;
            };
            case 2 : {  PE= 3; 
                        ula.readA(regs.readR(2)); 
                        ula.readB(regs.readR(8));
                        ula.op(1);
                        regs.writeR(3, ula.writeResult());  
                        break;

            };
            case 3 :{   PE= 4; 
                        ula.readA(regs.readR(8)); 
                        ula.readB(regs.readR(2));
                        ula.op(1);
                        regs.writeR(4, ula.writeResult()); 
                        break;
					};
            case 4 : {  PE= 5; 
                        ula.readA(regs.readR(1)); 
                        ula.readB(regs.readR(7));
                        ula.op(3);
                        regs.writeR(11, ula.writeResult()); 
                        break;
					};
            case 5 : {  PE= 6;
                        ula.readA(regs.readR(3)); ;
                        ula.readB(regs.readR(11));
                        ula.op(2);
                        regs.writeR(12, ula.writeResult());
                        break; 
                    };
    
            case 6 : {  PE= 7; 
                        ula.readA(regs.readR(7)); 
                        ula.readB(regs.readR(12));
                        ula.op(0);
                        regs.writeR(6, ula.writeResult());
                        break;
                    };
            case 7 : {  ula.readA(regs.readR(4));
                        ula.readB(regs.readR(9));
                        ula.op(4); // executa instrução de controle na ULA
                       if (ula.getCond() == true)
                        PE= 8; 
                       else 
                        PE=9; // estado de controle
                       break; 
                    };
            case 8 : {  PE= 9; 
                        ula.readA(regs.readR(4)); 
                        ula.readB(regs.readR(13));
                        ula.op(3);
                        regs.writeR(5, ula.writeResult());
                        break;
                    };
            case 9 : { ula.readA(regs.readR(4));
                       ula.readB(regs.readR(9));
                       ula.op(5); // executa instrução de controle na ULA
                       if (ula.getCond() == true)
                        PE= 10; 
                       else 
                        PE=11; // estado de controle
                       break;
                        };

            case 10 : { PE= 0; 
                        ula.readA(regs.readR(10));
                        ula.readB(regs.readR(9));
                        ula.op(0);
                        regs.writeR(0, ula.writeResult());
                        break;
                    };
            case 11 : {ula.readA(regs.readR(5));
                       ula.readB(regs.readR(14));
                       ula.op(4); // executa instrução de controle na ULA
                       if (ula.getCond() == true)
                        PE= 12; 
                       else 
                        PE=13; // estado de controle
                       break;
                        };   
            case 12 : { PE= 0; 
                        ula.readA(regs.readR(10));
                        ula.readB(regs.readR(9));
                        ula.op(0);
                        regs.writeR(0, ula.writeResult());
                        break;
                        };
            case 13 : { PE= 0; 
                        ula.readA(regs.readR(6));
                        ula.readB(regs.readR(9));
                        ula.op(0);
                        regs.writeR(7, ula.writeResult());
                        break;
                        };
            default: break;             
    }
};


void PC::updateState () {
    cout << "Estado atual: " << EA << endl;
    cout << "próximo estado: " << PE << endl;
    EA= PE;  
};

  
bool PC::getLastState() {
        cout << "raiz: " << regs.readR(7) << endl;
        return(lastState);
    };

