#include "rectangle.h"
#include <iostream>

void rectangle::surface(float longueur, float largeur)
{
float surf= longueur*largeur;

  std::cout << "l'aire du rectangle est " << surf << std::endl;
}

void rectangle::perimetre(float longueur, float largeur)
{
float peri= (longueur+largeur)*2;
  std::cout << "le perimetre du rectangle est " << peri << std::endl;
}
