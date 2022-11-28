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
 char* TrajetCompose::getDepart()const
{
    return (lst->premierTrajet()->getDepart()) ; //prendre le départ du début de la liste chainée
}

char* TrajetCompose::getArrivee()const
{
    return (lst->dernierTrajet()->getArrivee()); //prendre l'arrivée de la fin de la liste chainée
}

void TrajetCompose::Afficher()
{
    Cellule* courant = this->lst->getPremierCellule()  ;
    while (courant->suivant != 0)
    {
        courant->t->Afficher();
        courant = courant->suivant;
    }
    cout<<" - " ; 
}



//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur



TrajetCompose::TrajetCompose()
// Algorithme :
//
{
    #ifdef MAP
        cout << "Appel au constructeur de <TrajetCompose>" << endl;
    #endif
    this->lst = new liste_chainee() ; 

} //----- Fin de TrajetCompose


TrajetCompose::~TrajetCompose()
// Algorithme :
//
{
    #ifdef MAP
        cout << "Appel au destructeur de <TrajetCompose>" << endl;
    #endif
    delete this->lst ; 
    
} //----- Fin de ~TrajetCompose

void TrajetCompose::ajouterElem(trajet* traj)
{
    lst->ajouterElem(traj) ; 
    
}

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées