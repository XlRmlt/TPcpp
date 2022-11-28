

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

#include <cstring> 
//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Xxx::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode








//-------------------------------------------- Constructeurs - destructeur

 //----- Fin de Xxx

liste_chainee::liste_chainee (trajet* traj){
    Cellule* cel = new Cellule ; 
    cel->t = traj   ; 
    cel->suivant = 0 ; 
    this->racine = cel ; 
    this->longueur = 1 ; 
}
liste_chainee::liste_chainee(){
    this->longueur = 0 ; 

}
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
        if (strcmp(traj->getDepart(), courant->t->getArrivee())== 0){
            courant->suivant = cel ; 
            this->longueur++ ; 
        }
    }
    this->longueur++ ; 
}


trajet* liste_chainee::premierTrajet()const{
    return racine->t ; 
}

Cellule* liste_chainee::getPremierCellule(){
    return this->racine ; 
}

int liste_chainee::getLongueur(){
    return this->longueur ; 
}

trajet* liste_chainee::dernierTrajet()const{
    Cellule* courant = racine ;
    if (longueur == 0){
        return 0 ; 
    }
    for (int i = 0 ; i<longueur ; i++){
        courant = courant->suivant ; 
    }
    return courant->t ; 
    
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

