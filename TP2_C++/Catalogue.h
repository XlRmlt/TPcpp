
//---------- Interface de la classe <Catalogue> (fichier Catalogue.h) ----------------
#if ! defined ( Catalogue_H )
#define catalogue_H

//--------------------------------------------------- Interfaces utilisées
#include "liste_chainee.h" 
#include "trajet.h"
#include "TrajetCompose.h" 
#include "TrajetSimple.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Catalogue>
//
//
//------------------------------------------------------------------------

class Catalogue 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

void Interface() ; 
// Mode d'emploi :
    //Menu qui permet de faire le lien entre l'utilisateur et l'application : 
    //Elle propose 3 types de service : Affichage du catalogue , recherche de parcours , ajouts de trajets
//Contrat
    //Rien
void afficher() ; 
// Mode d'emploi :
    //affiche tous les trajets disponible dans l'application 
//contrat  : 
    //rien 
void recherche_simple() ; 
// Mode d'emploi :
    //
// Contrat :
    //

void ajouter_trajet_simple() ; 
// Mode d'emploi : 
    //Service qui permet d'ajouter au catalogue un trajet Simple
//Contrat : 
    //Les données rentrées par l'utilisateur sont correctes 


void ajouter_trajet_compose() ; 
// Mode d'emploi : 
    //Service qui permet d'ajouter au catalogue un trajet Composé
//Contrat : 
    //Les données rentrées par l'utilisateur sont correctes 


//-------------------------------------------- Constructeurs - destructeur

Catalogue ( );
// Mode d'emploi :
    //Construction d'un catalogue de trajets vides
// Contrat :
    //Rien

virtual ~Catalogue ( );
// Mode d'emploi :
    //Rien
// Contrat :
    //Rien
    

//------------------------------------------------------------------ PRIVE

protected:

//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
liste_chainee Cat ; 
};

//-------------------------------- Autres définitions dépendantes de <Xxx>

#endif // Catalogue_H

