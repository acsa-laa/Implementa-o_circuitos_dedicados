#ifndef _regs_
#define _regs_    
    #include<iostream>
    using namespace std;
    class REGS{
    	private:
            double regs[15];

    	public:
    		REGS();
            double readR(int _adress);
            void writeR(int _adress, double _v);
    };
#endif
