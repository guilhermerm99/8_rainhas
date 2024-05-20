all: testa_rainhas.cpp   rainhas.cpp rainhas.hpp rainhas.o
	g++ -std=c++11 -Wall rainhas.o testa_rainhas.cpp -o testa_rainhas
	./testa_rainhas
	#end

compile: testa_rainhas.cpp   rainhas.cpp rainhas.hpp rainhas.o
	g++ -std=c++11 -Wall rainhas.o testa_rainhas.cpp -o testa_rainhas
	
test: testa_rainhas	
	./testa_rainhas
	
rainhas.o : rainhas.cpp rainhas.hpp
	g++ -std=c++11 -Wall -Wall -c rainhas.cpp
	
testa_rainhas: 	testa_rainhas.cpp   rainhas.cpp rainhas.hpp rainhas.o
	g++ -std=c++11 -Wall rainhas.o testa_rainhas.cpp -o testa_rainhas

clean:
	rm -rf *.o *.exe *.gc*
