#include "cercle.h"
#include <iostream>

float cercle::surface(float rayon)
{
float surf= (rayon*rayon)*3.14;

  return surf;
}

float cercle::perimetre(float rayon)
{
float peri= 2*rayon*3.14;
  return peri;
}
