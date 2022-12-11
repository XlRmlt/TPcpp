//---------- Réalisation de la classe <TrajetSimple> (fichier TrajetSimple.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <cstring>

//------------------------------------------------------ Include personnel
#include "TrajetSimple.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

char *TrajetSimple::getDepart() const
{
    return (this->Depart);
} //-----------fin de getDepart

char *TrajetSimple::getArrivee() const
{
    return (this->Arrivee);
} //-----------fin de getArrivee

void TrajetSimple::Afficher()
{
    cout << "De " << getDepart() << " à " << getArrivee() << " en " << this->Transport;
} //-----------fin de Afficher

trajet *TrajetSimple::Clone() const
{
    return new TrajetSimple(*this);
} //-----------fin de Clone

//-------------------------------------------- Constructeurs - destructeur

TrajetSimple::TrajetSimple(char *D, char *A, char *T)
{
#ifdef MAP
    cout << "Appel au constructeur de <TrajetSimple>" << endl;
#endif
    Depart = new char[strlen(D) + 1];
    strcpy(Depart, D);
    Arrivee = new char[strlen(A) + 1];
    strcpy(Arrivee, A);
    Transport = new char[strlen(T) + 1];
    strcpy(Transport, T);
} //----- Fin de TrajetSimple

TrajetSimple::TrajetSimple(const TrajetSimple &unTrajetSimple)
{
#ifdef MAP
    cout << "Appel au constructeur de <TrajetSimple>" << endl;
#endif
    Depart = new char[strlen(unTrajetSimple.Depart) + 1];
    strcpy(Depart, unTrajetSimple.Depart);
    Arrivee = new char[strlen(unTrajetSimple.Arrivee) + 1];
    strcpy(Arrivee, unTrajetSimple.Arrivee);
    Transport = new char[strlen(unTrajetSimple.Transport) + 1];
    strcpy(Transport, unTrajetSimple.Transport);
} //----- Fin de TrajetSimple

TrajetSimple::~TrajetSimple()

{
#ifdef MAP
    cout << "Appel au destructeur de <TrajetSimple>" << endl;
#endif

    delete[] this->Depart;
    delete[] this->Arrivee;
    delete[] this->Transport;

} //----- Fin de ~TrajetSimple
