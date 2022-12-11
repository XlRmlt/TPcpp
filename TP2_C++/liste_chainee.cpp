



//---------- Réalisation de la classe <liste_Chainee> (fichier liste_chainee.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "liste_chainee.h" 

#include <cstring> 
//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
trajet* liste_chainee:: acceder(unsigned int indice)const{
    if (indice>= longueur){
        return 0 ; 
    }

    Cellule* a = racine ; 
    for (unsigned int i =0 ; i<indice ; i++){
        a = a->suivant ; 
    }
    return a->t ; 
}//----- Fin de acceder

void liste_chainee :: ajouterElem(trajet* traj ,int  tri) {   
    
    Cellule* cel = new Cellule ; 
    cel->t = traj->Clone()   ; 
    cel->suivant = 0 ; 
    if (longueur == 0){
        this->racine = cel ; 
    }else{
        Cellule* courant = this->racine ;
        if (tri == 0){
            while(courant->suivant != 0){
                courant = courant->suivant ; 
            }
            courant->suivant = cel ; 
        }else{
            while(strcmp(cel->t->getDepart() ,courant->t->getDepart()) < 0 
            && courant->suivant != 0){
                courant = courant->suivant ; 
            }
            cel->suivant = courant->suivant ; 
            courant->suivant = cel ; 
        }
    }
    this->longueur++ ;
}//----- Fin de ajouterElem

trajet* liste_chainee::premierTrajet()const{
    return racine->t ; 
}//----- Fin de premierTrajet

int liste_chainee::getLongueur(){
    return this->longueur ; 
}//----- Fin de getLongueur



trajet* liste_chainee::dernierTrajet()const{
    return this->acceder(longueur -1) ;  
}//----- Fin de dernierTrajet

Cellule* liste_chainee::getPremierCellule(){
    return this->racine ; 
}//----- Fin de getPremierCellule


//-------------------------------------------- Constructeurs - destructeur




liste_chainee :: liste_chainee(const liste_chainee & liste){
    #ifdef MAP
        cout << "Appel au constructeur de copie de liste_chainee" << endl;
    #endif
    for (unsigned int i = 0 ;  i <liste.longueur ; i++){
        this->ajouterElem(liste.acceder(i) , 0) ; 
    } 
}//----- Fin de liste_chainee

liste_chainee::liste_chainee(){
    #ifdef MAP
        cout << "Appel au constructeur par defaut de liste_chainee" << endl;
    #endif
    this->longueur = 0 ; 
}//----- Fin de liste_chainee


liste_chainee::~liste_chainee ()
{
#ifdef MAP
    cout << "Appel au destructeur de <liste_chainee>" << endl;
#endif
    Cellule* courant = racine ; 
    while(courant){
        Cellule* suivant = courant->suivant;
        delete courant->t;
        delete courant ; 
        courant = suivant ; 
    }
} //----- Fin de ~liste_chainee



