#include "ui.hpp"
#include <iostream>
#include <limits>

using namespace std;

//была идея использовать getline, но кажется она громосткой и тяжёлой, так что так
void afficher_menu() {
    cout << "1 - Empiler\n"
         << "2 - Dépiler\n"
         << "3 - Consulter le sommet\n"
         << "4 - Modifier l'élément au sommet\n"
         << "5 - Vérifier si la pile est vide\n"
         << "6 - Afficher le nombre de valeurs\n"
         << "7 - Vider la pile\n"
         << "8 - Afficher toute la pile\n"
         << "0 - Quitter\n";
}

//lire_choix - <3
int lire_choix() {
    int choix{};
    do {
        cout << "Votre choix : ";
        if (!(cin >> choix)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            choix = -1;
        }
    } while (choix < 0 || choix > 8);

    return choix;
}


void afficher_pile(const Pile& pile, size_t taille) {
    switch (taille) {
        case 0:
            cout << "La pile est vide.\n";
            break;
        case 1:
            cout << "Sommet / Fond -> " << pile[0] << endl;
            break;
        default:
            cout << "Sommet -> " << pile[taille - 1] << endl;
            for (size_t i = taille - 2; i > 0; --i) {
                cout << "          " << pile[i] << endl;
            }
            cout << "Fond   -> " << pile[0] << endl;
            break;
    }
}