



//---------- Réalisation de la classe <trajet> (fichier trajet.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "trajet.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

void trajet::Afficher(){
  #ifdef MAP
     cout << "Appel au constructeur de la méthode affichée de trajet " << endl;
#endif
}





//-------------------------------------------- Constructeurs - destructeur

trajet::trajet ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <trajet>" << endl;
#endif
} //----- Fin de trajet


trajet::~trajet ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <trajet>" << endl;
#endif
} //----- Fin de ~trajet


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

