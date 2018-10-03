#include "triangle.h"
#include <iostream>

void triangle::surface(float cote1, float cote2, float cote3, float hauteur)
{
float surf;

if ((cote1 > cote2) && (cote1>cote3)){

surf= (cote1*hauteur)/2;
}else if ((cote2 > cote1) && (cote2>cote3)){

surf= (cote2*hauteur)/2;

} else {

surf= (cote3*hauteur)/2;

}
  std::cout << "l'aire du triangle est " << surf << std::endl;
}

void triangle::perimetre(float cote1, float cote2, float cote3)
{
float peri= cote1 + cote2 + cote3;
  std::cout << "le perimetre du triangle est " << peri << std::endl;
}
