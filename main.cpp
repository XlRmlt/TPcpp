#include "TrajetSimple.h"
using namespace std;
#include <iostream>
int main(){
    char D[]="Paris";
    char A[]="Lyon";
    char T[]="Chameau";
    TrajetSimple e(D,A,T);
    e.Afficher();
    return 0;
}