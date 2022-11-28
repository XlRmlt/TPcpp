main : main.o TrajetSimple.o
	g++ -o main main.o TrajetSimple.o
main.o : main.cpp TrajetSimple.h
	g++ -c main.cpp
TrajetSimple.o : TrajetSimple.cpp TrajetSimple.h
	g++ -c TrajetSimple.cpp 
