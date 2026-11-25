#include "pile.hpp"
#include "ui.hpp"
#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    Pile ma_pile{};
    size_t nombre = 0;
    int choix{};

    cout << "Ce programme permet de manipuler une pile d'entiers." << endl;

    do {
        afficher_menu();
        choix = lire_choix();

        try {
            switch (choix) {
                case 0:
                    cout << "Fin de programme." << endl;
                    break;

                case 1: {
                    int valeur{};
                    cout << "Valeur : ";
                    cin >> valeur;
                    push(ma_pile, nombre, valeur);
                    cout << "Valeur empilée." << endl;
                    break;
                }

                case 2: {
                    int valeur = top(ma_pile, nombre);
                    pop(ma_pile, nombre);
                    cout << "Valeur retirée : " << valeur << endl;
                    break;
                }

                case 3:
                    cout << "Sommet : " << top(ma_pile, nombre) << endl;
                    break;

                case 4: {
                    int valeur{};
                    cout << "Valeur de remplacement : ";
                    cin >> valeur;
                    top(ma_pile, nombre) = valeur;
                    cout << "Valeur remplacée." << endl;
                    break;
                }

                case 5:
                    if (empty(ma_pile, nombre)) {
                        cout << "La pile est vide." << endl;
                    } else {
                        cout << "La pile n'est pas vide." << endl;
                    }
                    break;

                case 6:
                    cout << "Nombre de valeurs : " << size(ma_pile, nombre) << endl;
                    break;

                case 7:
                    clear(ma_pile, nombre);
                    cout << "Pile vidée." << endl;
                    break;

                case 8:
                    afficher_pile(ma_pile, nombre);
                    break;

                default:
                    break;
            }
        } catch (const exception& erreur) {
            cout << "Erreur : " << erreur.what() << endl;
        }

    } while (choix != 0);

    return 0;
}
