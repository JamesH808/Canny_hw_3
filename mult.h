// mult.h
#include "systemc.h"

SC_MODULE(Mult){

	sc_in<int> a;
	sc_in<int> b;
	sc_out<int> f;

	void action();

	SC_CTOR(Mult)
	{
		SC_METHOD(action);
		sensitive << a << b;
	}
};
