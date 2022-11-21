//---------- Réalisation de la classe <TrajetSimple> (fichier TrajetSimple.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "TrajetSimple.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type TrajetSimple::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
virtual char * getDepart(){
    return(this->Depart);
}

virtual char * getArrivee(){
    return(this->Arrivee);
}

virtual void TrajetSimple::Afficher()
{
    cout << getDepart() << endl;
    cout << getArrivee() << endl;
    cout << this->Transport << endl;
}

//------------------------------------------------- Surcharge d'opérateurs
TrajetSimple & TrajetSimple::operator = ( const TrajetSimple & unTrajetSimple )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
TrajetSimple::TrajetSimple ( const TrajetSimple & unTrajetSimple )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <TrajetSimple>" << endl;
#endif
} //----- Fin de TrajetSimple (constructeur de copie)


TrajetSimple::TrajetSimple ( char * D, char * A, char * T)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <TrajetSimple>" << endl;
#endif
strcpy(Depart,D);
strcpy(Arrivee,A);
strcpy(Transport,T);
} //----- Fin de TrajetSimple


TrajetSimple::~TrajetSimple ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <TrajetSimple>" << endl;
#endif
} //----- Fin de ~TrajetSimple


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

