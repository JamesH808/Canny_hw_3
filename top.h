#include "systemc.h"
#include "stim.h"
#include "mult.h"
#include "mon.h"


SC_MODULE(Top){
	sc_signal<int> asig, bsig, fsig;
	sc_clock testclk;
	Stim stim1;
	Mult uut;
	Mon mon1;

	SC_CTOR(Top):
		testclk("testclk", 10, SC_NS),
		stim1("stim1"),
		uut("uut"),
		mon1("mon1")
	{
		stim1.a(asig);
		stim1.b(bsig);
		stim1.clk(testclk);
		uut.a(asig);
		uut.b(bsig);
		uut.f(fsig);
		mon1.a.bind(asig);
		mon1.b.bind(bsig);
		mon1.f.bind(fsig);
		mon1.clk.bind(testclk);
	}
};
