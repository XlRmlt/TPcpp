

//---------- Réalisation de la classe <Catalogue> (fichier Catalogue.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <cstring>

//------------------------------------------------------ Include personnel
#include "Catalogue.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void Catalogue :: Interface(){
    int choix ;  
    do{
        cout<<"Bienvenue dans le catalogue de trajets"<< endl ; 
        cout<<endl ; 
        cout<<"--------------------Menu--------------------"<<endl ; 
        cout<<"0 -> Quitter l'apliccation "<<endl ; 
        cout<<"1 -> ajouter trajet Simple"<<endl ; 
        cout<<"2 -> ajouter trajet Compose"<<endl ; 
        cout<<"3 -> afficher" << endl ; 
        cout<<"4 -> Recherche Simple" << endl ; 
        cin>>choix ; 
        switch (choix){
            case 0 : 
                cout <<"Au revoir"<<endl ; 
                break ; 
            case 1 : 
                ajouter_trajet_simple() ; 
                break ;
            case 2 : 
                ajouter_trajet_compose() ; 
                break ; 
            case 3 : 
                afficher() ;  
                break ;
            case 4 : 
                recherche_simple() ;  
                break ;

            default : 
                cout<<"choix invalide" << endl ; 
                break ; 

 
    }
    }while(choix != 0) ;  
}//--------------fin de Interface

void Catalogue :: afficher(){
    cout<<endl ; 
    cout<<"le nombre de trajets disponibles :  "<<Cat.getLongueur()<<endl  ;
    cout<<"les trajets : "<<endl  ; 
    for (int i = 0 ; i<Cat.getLongueur() ; i++){
        Cat.acceder(i)->Afficher() ; 
        cout<<endl ; 
    }
    cout<<endl ; 
}//--------------fin de afficher


void Catalogue :: recherche_simple(){
    char Ville_Dep[50] ; 
    char Ville_Arriv[50] ; 
    cout<<"voyage récherché de " ; 
    cin>>Ville_Dep ; 
    cout<<" à " ;
    cin>>Ville_Arriv ; 
    cout<<endl ;
    int nb = 0 ;  
    for (int i = 0 ; i<Cat.getLongueur() ; i++){
        if(strcmp(Ville_Dep , Cat.acceder(i)->getDepart()) == 0 && strcmp(Ville_Arriv , Cat.acceder(i)->getArrivee()) == 0){
            cout<< "trajet : " ; 
            Cat.acceder(i)->Afficher() ; 
            cout<<"correspond bien à la demande requise" ; 
            cout<<endl ;
            nb++ ; 
        }
    }
    if(nb == 0){
        cout<<"Aucun trajet ne correspond à la demande requise"<<endl ;
    } 
}//--------------fin de recherche simple

void Catalogue :: ajouter_trajet_simple(){
    char Ville_Dep[50] ; 
    char Ville_Arriv[50] ; 
    char Transport[50] ; 
    cout<<"Veuillez saisir la ville de départ"<<endl  ;
    cin>>Ville_Dep ; 
    cout<<"Veuillez saisir la ville d'arrivée"<<endl  ;
    cin>>Ville_Arriv ; 
    cout<<"Veuillez saisir le moyen de transport"<<endl  ;
    cin>>Transport ; 
    TrajetSimple t(Ville_Dep , Ville_Arriv , Transport) ;  
    Cat.ajouterElem(&t) ; 
    cout<<"L'ajout a bien ete realise"<<endl ; 
}//--------------fin de ajouter_trajet_simple



void Catalogue :: ajouter_trajet_compose(){
    char Ville_Dep[50] ; 
    char Ville_Arriv[50] ; 
    char Transport[50] ; 
    cout<<"Veuillez saisir la ville de départ"<<endl  ;
    cin>>Ville_Dep ; 
    cout<<"Veuillez saisir la ville d'arrivée"<<endl  ;
    cin>>Ville_Arriv ; 
    cout<<"Veuillez saisir le moyen de transport"<<endl  ;
    cin>>Transport ; 
    TrajetSimple t(Ville_Dep , Ville_Arriv , Transport) ;
    TrajetCompose tc ; 
    tc.ajouterElem(&t) ; 
    while (1){
        cout<<"Si vous souhaitez vous arretez Entrez 0 , sinon, continuez à saisir les étapes du trajets en saisissant la nouvelle ville d'arrivee. "<<endl ; 
        strcpy(Ville_Dep ,Ville_Arriv) ; 
        cin>>Ville_Arriv ;
        if(strcmp(Ville_Arriv , "0") == 0){
            Cat.ajouterElem(&tc) ;
            break ; 
        }else{ 
            cout<<"Veuillez saisir le moyen de transport"<<endl  ;
            cin>>Transport ;
            TrajetSimple t2(Ville_Dep , Ville_Arriv , Transport) ; 
            tc.ajouterElem(&t2) ; 
        }
    } 
}//--------------fin de ajouter_trajet_compose

//-------------------------------------------- Constructeurs - destructeur



Catalogue::Catalogue ()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Catalogue>" << endl;
#endif

}//--------------fin de Catalogue


Catalogue::~Catalogue ()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Catalogue>" << endl;
#endif
} //----- Fin de ~Catalogue






//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

