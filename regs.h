#ifndef _regs_
#define _regs_    
    
    class REGS{
    	private:
            float regs[15];

    	public:
    		REGS();
            int readR(int _adress);
            void writeR(int _adress, float _v);
    };
#endif
