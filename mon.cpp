#include "mon.h"

void Mon::monitor(){
	wait();
	while(true){
		wait();
		printf("a=%d b=%d f=%d\n",a->read(),b->read(),f->read());
	}
}
