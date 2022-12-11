
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
//La classe Catalogue fait le lien entre l'utilisateur et les données
//Elle propose 3 service : 
//Afficher l'ensemble des trajets enregistrées
//ajouter des trajets
//rechercher des trajets à partir de trajets déjà présents dans la base de données

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
    //Demande à l'utilisateur une ville de départ et une ville d'arrivée
    //Montre à l'utilisateur les trajets qui correspondent à sa demande
// Contrat :
    //Les données rentrées par l'utilisateur sont correctes(pas plus que 50 caractères par entrée)

void ajouter_trajet_simple() ; 
// Mode d'emploi : 
    //Service qui permet d'ajouter au catalogue un trajet Simple
//Contrat : 
    //Les données rentrées par l'utilisateur sont correctes (pas plus que 50 caractères par entrée)


void ajouter_trajet_compose() ; 
// Mode d'emploi : 
    //Service qui permet d'ajouter au catalogue un trajet Composé
//Contrat : 
    //Les données rentrées par l'utilisateur sont correctes (pas plus que 50 caractères par entrée)


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



#endif // Catalogue_H

