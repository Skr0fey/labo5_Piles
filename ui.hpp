#ifndef UI_HPP
#define UI_HPP

#include "pile.hpp"
#include <cstddef>

void afficher_menu();
int lire_choix();
void afficher_pile(const Pile& pile, std::size_t taille);

#endif
