//---------- Interface de la classe <TrajetSimple> (fichier TrajetSimple.h) ----------------
#if ! defined ( TrajetSimple_H )
#define TrajetSimple_H
#include "trajet.h" 
//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TrajetSimple>
//
//
//------------------------------------------------------------------------

class TrajetSimple : public trajet
{
//----------------------------------------------------------------- PUBLIC


//----------------------------------------------------- Méthodes publiques
public:
virtual char * getDepart() const ;
// Mode d'emploi :
    //Retourne un pointeur sur la chaine de caractère représentant la ville de départ
// Contrat :
    //Rien
virtual char * getArrivee() const ;
// Mode d'emploi :
    //Retourne un pointeur sur la chaine de caractère représentant la ville d'arrivée
// Contrat :
    //Rien
virtual void Afficher();
// Mode d'emploi :
    //affiche les caractéristiques d'un trajet simple(Ville Départ // Transport // Ville d'arrivée)
// Contrat :
    //Si le trajet simple ne fait pas partie d'un trajet composée, Faire un retour à ligne
    //Sinon ne pas faire de retour à la ligne
trajet* Clone() const ;
// Mode d'emploi :
    //Renvoie un pointeur sur une copie en profondeur du trajet simple(copie alloué dynamiquement)
// Contrat :
    //Ne pas oublier de désallouer la mémoire nouvellement allouée
    


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur


TrajetSimple ( char * D, char * A, char * T);
// Mode d'emploi :
    //Recopie en profondeur les chaines de caractère dans les attributs correspondants
    //D ->ville de Départ // A ->Ville d'arrivée // T->Moyen de transport
// Contrat :
    //Rien

TrajetSimple(const TrajetSimple & unTrajetSimple)  ; 
// Mode d'emploi :
    // Crée une copie en profondeur de unTrajetSimple
// Contrat :
    //Rien 
     

    

virtual ~TrajetSimple ();
// Mode d'emploi :
    //Libère toute la mémoire allouée lors de la construction
// Contrat :
    //Rien 

//------------------------------------------------------------------ PRIVE


//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
protected:
    char * Depart;
    char * Arrivee;
    char * Transport;
};

//-------------------------------- Autres définitions dépendantes de <TrajetSimple>

#endif // TrajetSimple_H