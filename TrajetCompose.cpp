//---------- Réalisation de la classe <TrajetCompose> (fichier TrajetCompose.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <cstring>

//------------------------------------------------------ Include personnel
#include "TrajetCompose.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type TrajetCompose::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
char * TrajetCompose::getDepart(){
    return(this->Depart); //prendre le départ du début de la liste chainée
}

char * TrajetCompose::getArrivee(){
    return(this->Arrivee); //prendre l'arrivée de la fin de la liste chainée
}

void TrajetCompose::Afficher()
{
    // Pour chaque élément de la liste chainée: Afficher() de chaque élément
}

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur



TrajetCompose::TrajetCompose ( char * D, char * A, char * T)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <TrajetCompose>" << endl;
#endif
Depart= new char [strlen(D)+1];
strcpy(Depart,D);
Arrivee= new char [strlen(A)+1];
strcpy(Arrivee,A);
Transport= new char [strlen(T)+1];
strcpy(Transport,T);
} //----- Fin de TrajetCompose


TrajetCompose::~TrajetCompose ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <TrajetCompose>" << endl;
#endif
} //----- Fin de ~TrajetCompose


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

