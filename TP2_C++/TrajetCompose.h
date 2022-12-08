//---------- Interface de la classe <TrajetCompose> (fichier TrajetCompose.h) ----------------
#if ! defined ( TrajetCompose_H )
#define TrajetCompose_H
#include "liste_chainee.h" 
#include "trajet.h"
//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TrajetCompose>
//TrajetCompose hérite publiquement de trajet
//Cette classe contient comme attributs un pointeur vers liste_chainee
//En effet un TrajetCompose est representé comme la succession de plusieurs trajets simple
//------------------------------------------------------------------------

class TrajetCompose : public trajet
{
    //----------------------------------------------------------------- PUBLIC

 
    //----------------------------------------------------- Méthodes publiques
public:
virtual  char* getDepart() const ;
    // Mode d'emploi :
        //Renvoie un pointeur sur la chaîne de caractère représentant la ville de départ
    // Contrat :
        //La liste de trajet est non vide
virtual char* getArrivee()const ;
// Mode d'emploi :
        //Renvoie un pointeur sur la chaîne de caractère représentant la ville d'arrivée
    // Contrat :
        //La liste de trajet est non vide
virtual void Afficher();
// Mode d'emploi :
    //Affiche une description du trajet Compose
// Contrat :
    //Rien
virtual trajet* Clone() const ; 
// Mode d'emploi :
    //Renvoie un pointeur sur une copie en profondeur du trajet composé(copie alloué dynamiquement)
// Contrat :
    //Ne pas oublier de désallouer la mémoire nouvellement allouée    

void ajouterElem(trajet* traj);
// Mode d'emploi :
    //ajoute un sous-pointeur à la suite de la listes de trajets
    //On crée une copie en profondeur du trajet pointée par traj(allocation dynamique)
// Contrat :
    //Rien 

//-------------------------------------------- Constructeurs - destructeur
    
TrajetCompose(const TrajetCompose & unTrajetCompose) ; 
// Mode d'emploi :
    // Crée une copie en profondeur de unTrajetCompose
// Contrat :
    //Rien

TrajetCompose() ;
// Mode d'emploi :
    //alloue dynamiquement de la mémoire pour le trajetCompose
// Contrat :
    //Rien

virtual ~TrajetCompose();
// Mode d'emploi :
    //Libère toute la mémoire allouée lors de la construction et de l'ajout de trajets
// Contrat :
    //Rien 
    
    //------------------------------------------------------------------ PRIVE

    
    //----------------------------------------------------- Méthodes protégées

    //----------------------------------------------------- Attributs protégés
protected:
    liste_chainee* lst;
};


#endif // TrajetCompose_H