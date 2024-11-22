#ifndef MAP_H
#define MAP_H

#include <array>
#include <SFML/Graphics.hpp>


constexpr int kRowSize = 5;
constexpr int kColSize = 5;


int random_number();


void DisplayMap ( std::array<int, kRowSize * kColSize >& map );

#endif