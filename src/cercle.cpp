#include "cercle.h"
#include <iostream>

void cercle::surface(float rayon)
{
int surf= (rayon*rayon)*3.14;

  std::cout << "l'aire du cercle est " << surf << std::endl;
}

void cercle::perimetre(float rayon)
{
int peri= 2*rayon*3.14;
  std::cout << "le perimetre du cercle est " << peri << std::endl;
}
