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
// type TrajetSimple::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
char * TrajetSimple::getDepart() const {
    return(this->Depart);
}

char * TrajetSimple::getArrivee() const{
    return(this->Arrivee);
}



void TrajetSimple::Afficher()
{
    cout << "de " << getDepart() <<"à "<< getArrivee() <<"en "<< this->Transport<<endl ;
}

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur



TrajetSimple::TrajetSimple ( char * D, char * A, char * T)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <TrajetSimple>" << endl;
#endif
Depart= new char [strlen(D)+1] ;
strcpy(Depart,D);
Arrivee= new char [strlen(A)+1];
strcpy(Arrivee,A);
Transport= new char [strlen(T)+1];
strcpy(Transport,T);
} //----- Fin de TrajetSimple


TrajetSimple::~TrajetSimple ()
// Algorithme :
//
{
    #ifdef MAP
        cout << "Appel au destructeur de <TrajetSimple>" << endl;
    #endif

    delete this->Depart ; 
    delete this->Arrivee ; 
    delete this->Transport ;

} //----- Fin de ~TrajetSimple


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
