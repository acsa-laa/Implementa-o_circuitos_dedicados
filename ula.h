#ifndef _ula_
#define _ula_
  #include<iostream>
  using namespace std;
  class ULA {
    
   private:
     double a, b;
     double s;
     bool cond;
   
   public:
     ULA();
     void readA(double _a);
     void readB(double _b);
     double writeResult();
     void op(int ulaOP); 
     bool getCond();
  };
#endif
