/*************************************************************************
                           Xxx  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Xxx> (fichier Xxx.h) ----------------
#if ! defined ( LISTE_H )
#define LISTE_H

#include "trajet.h"



typedef struct Cellule {
 trajet *t; 
 Cellule *suivant; 
}Cellule;


//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Xxx>
//
//
//------------------------------------------------------------------------

class liste_chainee 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //


//------------------------------------------------- Surcharge d'opérateurs
  

//-------------------------------------------- Constructeurs - destructeur
    liste_chainee ( const liste_chainee & liste );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :

    liste_chainee() ; 

    liste_chainee(trajet* traj) ; 

    void ajouterElem(trajet* traj) ; 
    // Mode d'emploi :
    //
    // Contrat :
    //

    trajet* premierTrajet()const ; 

    int getLongueur() ; 

    trajet* dernierTrajet()const ; 

    virtual ~liste_chainee ();

    Cellule* getPremierCellule() ; 
    // Mode d'emploi :
    //
    // Contrat :
    //


//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
Cellule* racine ; 
unsigned int longueur ; 
};

//-------------------------------- Autres définitions dépendantes de <Xxx>

#endif // LISTE_H

