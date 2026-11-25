#include "pile.hpp"
#include <stdexcept>

using namespace std;

void push(Pile& pile, size_t& taille, int valeur) {
    if (taille >= CAPACITE) {
        throw overflow_error("impossible d'empiler dans une pile pleine.");
    }
    pile[taille] = valeur;
    ++taille;
}

void pop(const Pile&, size_t& taille) {
    if (taille == 0) {
        throw underflow_error("impossible de dépiler une pile vide.");
    }
    --taille;
}

int top(const Pile& pile, size_t taille) {
    if (taille == 0) {
        throw underflow_error("impossible de consulter le sommet d'une pile vide.");
    }
    return pile[taille - 1];
}

int& top(Pile& pile, size_t taille) {
    if (taille == 0) {
        throw underflow_error("impossible de remplacer le sommet d'une pile vide.");
    }
    return pile[taille - 1];
}

bool empty(const Pile&, size_t taille) {
    return taille == 0;
}

size_t size(const Pile&, size_t taille) {
    return taille;
}

void clear(const Pile&, size_t& taille) {
    taille = 0;
}
