QueueDemo: main.o Test.o Queue.o
	g++ -g -Wall -std=c++11 main.o Test.o Queue.o -o QueueDemo

Test.o: Test.h Test.cpp
	g++ -g -std=c++11 -c Test.cpp

main.o: main.cpp
	g++ -g -std=c++11 -c main.cpp

clean:
	rm main.o QueueDemo *~
