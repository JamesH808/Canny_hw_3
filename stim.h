//stim.h

#include "systemc.h"

SC_MODULE(Stim){

	sc_in<bool> clk;
	sc_out<int> a;
	sc_out<int> b;

	void stimulus();

	SC_CTOR(Stim){
		SC_THREAD(stimulus);
		sensitive << clk.neg();
	}
};
