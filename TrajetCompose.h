//---------- Interface de la classe <TrajetCompose> (fichier TrajetCompose.h) ----------------
#if ! defined ( TrajetCompose_H )
#define TrajetCompose_H
#include "liste_chainee.h" 
//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TrajetCompose>
//
//
//------------------------------------------------------------------------

class TrajetCompose
{
    //----------------------------------------------------------------- PUBLIC

    public:
    virtual char* getDepart();
    virtual char* getArrivee();
    virtual void Afficher();
    //----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //


    //------------------------------------------------- Surcharge d'opérateurs
    TrajetCompose & operator = ( const TrajetCompose & unTrajetCompose );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur


    TrajetCompose(trajet*traj);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~TrajetCompose();
    // Mode d'emploi :
    //
    // Contrat :
    //
    void TrajetCompose::ajouterElem(trajet* traj);
    //------------------------------------------------------------------ PRIVE

    protected:
        liste_chainee lst;
    //----------------------------------------------------- Méthodes protégées

    //----------------------------------------------------- Attributs protégés

};

//-------------------------------- Autres définitions dépendantes de <TrajetCompose>

#endif // TrajetCompose_H
