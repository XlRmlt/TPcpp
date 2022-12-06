using namespace std;
#include <iostream>

#include "Catalogue.h" 


liste_chainee quicksort(liste_chainee Cat) {
    if ((Cat->longueur) > 0) {
        Cellule* courant = Cat->racine;
        char * pivot1 = getDepart(courant->t);
        char * pivot2 = getArrivee(courant->t);
        unsigned int n = Cat->longueur;
        for (int i = 1; i <n ; i++) {
            courant = courant->suivant;
            if (strcmp(getDepart(courant->t),pivot1)>0) {
                if (!droite) {
                    liste_chainee droite(courant->t);
                }
                else {
                    droite->ajouterElem(courant->t);
                }
            }
            else if(strcmp(getDepart(courant->t), pivot1) < 0) {
                if (!gauche) {
                    liste_chainee gauche(courant->t);
                }
                else {
                    gauche->ajouterElem(courant->t);
                }
            }
            else {
                if (strcmp(getArrivee(courant->t), pivot2) > 0 ) {
                    if (!droite) {
                        liste_chainee droite(courant->t);
                    }
                    else {
                        droite->ajouterElem(courant->t);
                    }
                }
                else {
                    if (!gauche) {
                        liste_chainee gauche(courant->t);
                    }
                    else {
                        gauche->ajouterElem(courant->t);
                    }
                }
            }
        }
        // mise bout à bout des listes triées par récursion
        gauche = quicksort(gauche);
        droite = quicksort(droite);
        Cellule* crt = gauche->racine;
        while (crt->suivant != 0) {
            crt = crt->suivant;
        }
        crt->suivant = Cat->racine; //récupération du pivot
        crt = crt->suivant;
        crt->suivant = droite->racine;
    }
}

void Rechercher(char * Dep,char* Arr, const liste_chainee Cat) {
    Cellule* courant = Cat->racine;
    while (strcmp( getDepart(courant),Dep) > 0) {
        courant = courant->suivant;
    }
    if (!strcmp(getDepart(courant), Dep)) {
        while (strcmp(getArrivee(courant), Arr) > 0) {
            courant = courant->suivant;
        }
        while (!strcmp(getArrivee(courant), Arr)) {
            Afficher(courant->t);
            courant = courant->suivant;
        }
    }
}