#ifndef _ula_
#define _ula_
  #include<iostream>
  using namespace std;
  class ULA {
    
   private:
     int a, b, s;
     bool cond;
   
   public:
     ULA();
     void readA(int _a);
     void readB(int _b);
     int writeResult();
     void op(int ulaOP); 
     bool getCond();
  };
#endif
