#include "rectangle.h"
#include <iostream>

float rectangle::surface(float longueur, float largeur)
{
float surf= longueur*largeur;

  return surf;
}

float rectangle::perimetre(float longueur, float largeur)
{
float peri= (longueur+largeur)*2;
  return peri;
}
