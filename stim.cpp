#include "stim.h"

void Stim::stimulus(){

	wait();
	for(int i = 1; i < 8; i++){
		a = i;
		b = 6;
		wait();

	}
	sc_stop();

}
