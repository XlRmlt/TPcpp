/*************************************************************************
Trajet  -  description
-------------------
début                : 11/18
copyright            : (C) 2018 par Lelouard M, Tondereau A
e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Trajet> (fichier Trajet.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <cstring>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Trajet.h"

//------------------------------------------------------------- Constantes
//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

void Trajet::Afficher () const
{

  cout << "Trajet de " << depart << " à " << arrivee << endl;
}

char* Trajet::GetDepart() const
{
  return depart;
}
char* Trajet::GetArrivee() const
{
  return arrivee;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Trajet::Trajet ( const Trajet & unTrajet )
{
  #ifdef MAP
  cout << "Appel au constructeur de copie de <Trajet>" << endl;
  #endif
} //----- Fin de Trajet (constructeur de copie)

Trajet::~Trajet ( const Trajet & unTrajet )
{
  #ifdef MAP
  cout << "Appel au deconstructeur de copie de <Trajet>" << endl;
  #endif
} //----- Fin de Trajet (deconstructeur de copie)

