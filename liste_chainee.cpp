

/*************************************************************************
                           Xxx  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Xxx> (fichier Xxx.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "liste_chainee.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Xxx::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
void liste_chainee ::Afficher(){

    Cellule* courant = this->racine ; 
    while(courant->suivant != 0){
        courant->t->Afficher() ; 
        courant = courant->suivant ; 
    }
    #ifdef MAP
        cout << "Appel au constructeur de la méthode affichée de trajet " << endl;
    #endif
}








//-------------------------------------------- Constructeurs - destructeur

liste_chainee::liste_chainee ( trajet* traj )
// Algorithme :
//
 

{
#ifdef MAP
    cout << "Appel au constructeur de <Xxx>" << endl;
#endif
this->racine  = new Cellule ;
racine->suivant = 0 ; 
racine->t = traj  ; 

} //----- Fin de Xxx


liste_chainee::~liste_chainee ()
// Algorithme :
//
{
    

#ifdef MAP
    cout << "Appel au destructeur de <Xxx>" << endl;
#endif

Cellule* courant = racine ; 
    while(courant){
        Cellule* suivant = courant->suivant;
        delete courant;
        courant = suivant ; 
    }
} //----- Fin de ~Xxx

void liste_chainee :: ajouterElem(trajet* traj) {

    Cellule* cel = new Cellule ; 
    cel->t = traj   ; 
    cel->suivant = 0 ; 
    if (longueur == 0){
        this->racine = cel ; 
    }else{
        Cellule* courant = this->racine ; 
        while(courant->suivant != 0){
            courant = courant->suivant ; 
        }
        courant->suivant = cel ; 
       
    }
}

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

