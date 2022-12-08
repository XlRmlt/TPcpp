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

 char* TrajetCompose::getDepart()const
{
    return (lst->premierTrajet()->getDepart()) ; //prendre le départ du début de la liste chainée
}//----------fin de getDepart

char* TrajetCompose::getArrivee()const
{
    return (lst->dernierTrajet()->getArrivee()); //prendre l'arrivée de la fin de la liste chainée
}//----------fin de getArrivee

void TrajetCompose::Afficher()
{
    Cellule* courant = this->lst->getPremierCellule()  ;
    int i = 0 ; 
    while (courant != 0)
    {
        courant->t->Afficher() ; 
        if(i!= this->lst->getLongueur()-1){

            cout<< " - " ;
        } 
        i++ ; 
        courant = courant->suivant;
    } 
}//----------fin de Afficher

trajet* TrajetCompose :: Clone() const{
    TrajetCompose* a = new TrajetCompose() ; 
    for (int i = 0 ; i<lst->getLongueur() ; i++){
        a->ajouterElem(lst->acceder(i)) ; 
    }
    return a ; 
}//----------fin de Clone

void TrajetCompose::ajouterElem(trajet* traj){
    lst->ajouterElem(traj) ; 
}//----------fin de ajouterElem


//-------------------------------------------- Constructeurs - destructeur

TrajetCompose :: TrajetCompose(const TrajetCompose & unTrajetCompose) {
    #ifdef MAP
        cout << "Appel au constructeur de copie <TrajetCompose>" << endl;
    #endif
    lst = new liste_chainee(* unTrajetCompose.lst) ; 
}//----- Fin de TrajetCompose
 

TrajetCompose::TrajetCompose()
// Algorithme :
//
{
    #ifdef MAP
        cout << "Appel au constructeur par défaut de <TrajetCompose>" << endl;
    #endif
    this->lst = new liste_chainee() ; 

}//----- Fin de TrajetCompose



TrajetCompose::~TrajetCompose()
{
    #ifdef MAP
        cout << "Appel au destructeur de <TrajetCompose>" << endl;
    #endif
    delete lst ; 
    
} //----- Fin de ~TrajetCompose
