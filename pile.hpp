#ifndef PILE_HPP
#define PILE_HPP

#include <array>
#include <cstddef>

constexpr std::size_t CAPACITE = 5;

using Pile = std::array<int, CAPACITE>;

void push(Pile& pile, std::size_t& taille, int valeur);
void pop(const Pile& pile, std::size_t& taille);
int top(const Pile& pile, std::size_t taille);
int& top(Pile& pile, std::size_t taille);
bool empty(const Pile& pile, std::size_t taille);
std::size_t size(const Pile& pile, std::size_t taille);
void clear(const Pile& pile, std::size_t& taille);

#endif