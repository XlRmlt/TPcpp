test : test.o trajet.o TrajetSimple.o liste_chainee.o TrajetCompose.o
	g++ -o test test.o trajet.o TrajetSimple.o liste_chainee.o TrajetCompose.o

test.o : test.cpp
	g++ -c test.cpp

TrajetSimple.o : TrajetSimple.cpp
	g++ -c TrajetSimple.cpp

liste_chainee.o : liste_chainee.cpp
	g++ -c liste_chainee.cpp

TrajetCompose.o : TrajetCompose.cpp
	g++ -c TrajetCompose.cpp

trajet.o : trajet.cpp
	g++ -c trajet.cpp
