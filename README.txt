My code pretty much follows the example we did in class. My multiplier module and stimulus module were the only two that needed significant changes. One thing I was confused about was how to break up 
the sections of code into header and cpp files but after looking at the slides, I realized it was just the action that went in the cpp files. I also changed the posedge to neg edge for the clock.
One problem I encountered was the monitor was reading a = 0 and b = 0 for the first line, even though the stimulus was starting at a = 1 and b = 6. I solved it by putting a 
another wait outside of the while loop on the mon.cpp file. That way it would wait for the values to be assigned. Other than that, I did not have any errors. 


