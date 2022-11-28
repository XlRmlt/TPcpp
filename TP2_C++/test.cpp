#include <iostream>
using namespace std;
#include "trajet.h"
#include "TrajetSimple.h"
#include "liste_chainee.h" 
#include "TrajetCompose.h"

int main (){
    char D[]="Paris";
    char A[]="Lyon";
    char T[]="Chameau";
    trajet * t = new TrajetSimple(D,A,T);
    TrajetCompose * tc = new TrajetCompose() ;
    trajet* t2  = new TrajetSimple("Lyon","tunis","avion") ; 
    
    tc->ajouterElem(t) ; 
    t->Afficher();
    cout<<endl ; //on rajoute un endl à chaque fois qu'on passe d'un trajet à un autre 
    tc->Afficher() ;
    cout<<endl ;  
    tc->ajouterElem(t2) ; 
    tc->ajouterElem(t2) ;  
    tc->Afficher() ; 
    cout<<endl ; 

    return 0;
    
}