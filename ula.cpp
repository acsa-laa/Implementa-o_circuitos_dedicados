/*função ula {ler,executar,escrever} 
ler - > preciso acessar/saber, valor de m1 e m0, e quem são as variáveis da vez
escrever - >  saída da ula, acessar variável de escrita ou a saída geral
executar - > chama a op da própria ula ↓
switch case para cada operação da ula
*/
#include"ula.h"
   
ULA::ULA() { cond= false; };

void ULA::readA(double _a) {
	a = _a;
};
void ULA::readB(double _b) {
	b= _b;
};
double ULA::writeResult() {
	cout << "Saída: " << s << endl;
  return(s);
};

void ULA::op(int ulaOP) {

    switch (ulaOP) {
        case 0 : s= a + b; 
        			break;
        case 1 : s= a - b; 
        			break;
        case 2 : s= a / b; 
        			break;
        case 3 : s= a * b; 
        			break;
        case 4 : if (a < b){
          			cond= true;}
          		    else cond= false; 
          		    break;
        case 5 : if (a == b){
          			cond= true;}
       		    	else cond= false; 
       		    	break;
        default: break;
    }

};
   
bool ULA::getCond() { return(cond); };
  
