#include <iostream>
using namespace std;
#include "liste_chainee.h"
#include "trajet.h"
#include "TrajetSimple.h"

int main (){
    char D[]="Paris";
    char A[]="Lyon";
    char T[]="Chameau";
    TrajetSimple e(D,A,T);
    e.Afficher();
    return 0;
}