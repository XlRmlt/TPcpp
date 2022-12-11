
//---------- Interface de la classe <trajet> (fichier trajet.h) ----------------
#if ! defined ( Trajet_H )
#define Trajet_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <trajet>
//La classe trajet représente un trajet entre 2 villes.
//C'est une classe abstraite qui sert à manipuler une collection  de trajet sans distinction de leurs natures
//------------------------------------------------------------------------

class trajet 
{
//----------------------------------------------------------------- PUBLIC


//----------------------------------------------------- Méthodes publiques
    
  public:
virtual void Afficher();
  // Mode d'emploi :
    //Affiche le trajet en question
  // Contrat :
    //doit être redéfini dans les classes filles
virtual char* getArrivee() const = 0 ; 
  // Mode d'emploi :
    // renvoie un pointeur pour la chaîne de caractère représentant la ville de départ
  // Contrat :
    //doit être redéfini dans les classes filles
  virtual char* getDepart() const = 0 ; 
    // Mode d'emploi :
  // renvoie un pointeur sur la chaîne de caractère représentant la ville d'arrivée
    // Contrat :
  //doit être redéfini dans les classes filles

virtual trajet* Clone() const = 0 ; 
  // Mode d'emploi :
    //réalise une copie en profondeur du trajet , renvoie son pointeur
  // Contrat :
    //rien 


//-------------------------------------------- Constructeurs - destructeur
 

trajet () ;
  // Mode d'emploi :
    //Rien 
  // Contrat :
    //Rien

virtual ~trajet () ; 
  // Mode d'emploi :
    // rien 
  // Contrat :
    // rien

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

#endif // Trajet_H