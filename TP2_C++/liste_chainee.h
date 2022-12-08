

//---------- Interface de la classe <liste_chainee> (fichier liste_chainee.h) ----------------
#if ! defined ( LISTE_H )
#define LISTE_H

//--------------------------------------------------- Interfaces utilisées
#include "trajet.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types
typedef struct Cellule {
 trajet *t; 
 Cellule *suivant; 
}Cellule;
//------------------------------------------------------------------------
// Rôle de la classe <liste_chainee>
//Une liste_chainee est une collection ordonnée de Cellule. 
//Chaque cellule contient un pointeur vers son trajet ainsi qu'un pointeur vers la prochaine cellule
//Cette classe sera utilisé à la fois pour la constitution de trajets composées mais aussi dans le cadre du catalogue
//------------------------------------------------------------------------

class liste_chainee 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
trajet* acceder (unsigned int indice) const ;  
// Mode d'emploi  :
    // permet d'acceder au trajet a l'indice "indice" et 0 si l'indice n'est pas valide
// Contrat :
    // Rien

void ajouterElem(trajet* traj) ; 
// Mode d'emploi :
    //ajoute le trajet pointé par traj en faisant une copie en profondeur
// Contrat :
    //Rien 

trajet* premierTrajet()const ; 
// Mode d'emploi :
    //Renvoie un pointeur vers le premier trajet de Liste_chainee
// Contrat :
    //Au moins un élément a été ajouté au préalable

int getLongueur() ; 
// Mode d'emploi (constructeur par défaut) :
    //Renvoie la longueur de la liste chainee
// Contrat :
    //Rien

trajet* dernierTrajet()const ; 
// Mode d'emploi :
    //Renvoie un pointeur vers le dernier trajet de Liste_chainee et 0 si aucun trajet n'est présent
// Contrat :
    //Rien
    
Cellule* getPremierCellule() ;
// Mode d'emploi :
    //Renvoie un pointeur vers la première cellule de la liste Chainée et 0 si aucun trajet n'est présent
// Contrat :
    //Au moins un élément a été ajouté au préalable

//-------------------------------------------- Constructeurs - destructeur
liste_chainee ( const liste_chainee & liste );
// Mode d'emploi (constructeur de copie) :
    //Recopie en profondeur la liste_chainee
// Contrat :
    //Rien

liste_chainee() ; 
// Mode d'emploi (constructeur par défaut) :
    //initialise l'attribut longueur de liste chainee 
// Contrat :
    //Rien
    



virtual ~liste_chainee ();
// Mode d'emploi :
    //libération de la mémoire allouée à chaque trajet
// Contrat :
    //Rien


//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
Cellule* racine ; 
unsigned int longueur ; 
};


#endif // LISTE_H

