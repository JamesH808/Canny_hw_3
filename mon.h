#include <systemc.h>

SC_MODULE(Mon){

	sc_in<bool> clk;
	sc_in<int> a;
	sc_in<int> b;
	sc_in<int> f;

	void monitor();

	SC_CTOR(Mon){
		SC_THREAD(monitor);
		sensitive << clk.neg();
	}
};
