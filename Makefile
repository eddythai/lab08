strFuncsTest: tddFuncs.o strFuncs.o strFuncsTest.o
	g++ -Wall -Wno-uninitialized $^ -o $@

clean: 
	/bin/rm -f tddFuncs.o strFuncs.o strFuncsTest.o
