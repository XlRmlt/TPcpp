//---------- Réalisation de la classe <TrajetCompose> (fichier TrajetCompose.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <cstring>

//------------------------------------------------------ Include personnel
#include "TrajetCompose.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type TrajetCompose::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
char* TrajetCompose::getDepart()
{
    return (getDepart(this->lst)); //prendre le départ du début de la liste chainée
}

char* TrajetCompose::getArrivee()
{
    return (getArrivee(this->lst)); //prendre l'arrivée de la fin de la liste chainée
}

void TrajetCompose::Afficher()
{
    Cellule* courant = this->lst->racine;
    while (courant->suivant != 0)
    {
        courant->t->Afficher();
        courant = courant->suivant;
    }
}

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur



TrajetCompose::TrajetCompose(trajet* traj)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <TrajetCompose>" << endl;
#endif
    this->lst->racine = new Cellule;
    racine->suivant = 0;
    racine->t = traj;

} //----- Fin de TrajetCompose


TrajetCompose::~TrajetCompose()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <TrajetCompose>" << endl;
#endif
    Cellule* courant = racine;
    while (courant)
    {
        Cellule* suivant = courant->suivant;
        delete courant;
        courant = suivant;
    }
} //----- Fin de ~TrajetCompose

void TrajetCompose::ajouterElem(trajet* traj)
{

    Cellule* cel = new Cellule;
    cel->t = traj;
    cel->suivant = 0;
    if (longueur == 0)
    {
        this->lst->racine = cel;
    }
    else
    {
        Cellule* courant = this->lst->racine;
        while (courant->suivant != 0)
        {
            courant = courant->suivant;
        }
        courant->suivant = cel;

    }
}

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
