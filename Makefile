# Makefile for CENG 381, Assignment 4

SYSTEMC = /opt/pkg/systemc-2.3.4_c++11

INCLUDE = -I. -I$(SYSTEMC)/include
LIBRARY = $(SYSTEMC)/lib-linux64
CFLAG = -std=c++11 $(INCLUDE) -L$(LIBRARY) -Xlinker -R -Xlinker $(LIBRARY) -lsystemc -O2

CC = g++
RM = rm -f

TARGET	= hw4
OFILES = main.o \
	mon.o \
	stim.o \
	mult.o

all: $(TARGET)

test: hw4
	./hw4

clean:
	$(RM) *.o $(TARGET)


hw4: $(OFILES)
	$(CC) $^ $(CFLAG) -o $@

main.o : main.cpp top.h stim.h mult.h mon.h
	$(CC) -c main.cpp $(INCLUDE) $(CFLAG) -O2 -o $@

stim.o : stim.cpp stim.h
	$(CC) -c stim.cpp $(INCLUDE) $(CFLAG) -O2 -o $@

mon.o : mon.cpp mon.h
	$(CC) -c mon.cpp $(INCLUDE) $(CFLAG) -O2 -o $@

mult.o : mult.cpp mult.h
	$(CC) -c mult.cpp $(INCLUDE) $(CFLAG) -O2 -o $@
