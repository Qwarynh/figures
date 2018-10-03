/*! \file cercle.h
* \brief fichier de la classe cercle
* \author Paul
* \version 1.0
*/

#pragma once
#include <string>
#include <iostream>
#include "figure.h"


/*! \class cercle
* \brief classe cercle, classe fille de figure contenant plusieurs methodes pour calculer la surface et le perimetre du cercle
*/

class cercle : public figure // classe fille de Figure
{
public:

/*! \brief methode surface, affiche l'aire de la figure
* \ param rayon float
*/
        float surface(float rayon);


/*! \brief methode perimetre, affiche le perimetre de la figure
* \ param rayon float
*/
	float perimetre(float rayon);


protected:


private:
};


