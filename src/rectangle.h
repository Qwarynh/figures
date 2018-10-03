/*! \file rectangle.h
* \brief fichier de la classe rectangle
* \author Paul
* \version 1.0
*/

#pragma once
#include <string>
#include <iostream>
#include "figure.h"

/*! \class rectangle
* \brief classe rectangle, classe fille de figure contenant plusieurs methodes pour calculer la surface et le perimetre du rectangle
*/

class rectangle  : public figure  // classe fille de Figure
{
public:

/*! \brief methode surface, affiche l'aire de la figure
* \ param longueur float
* \ param largeur float
*/
        void surface(float longueur, float largeur);


/*! \brief methode perimetre, affiche le perimetre de la figure
* \ param longueur float
* \ param largeur float
*/
	void perimetre(float longueur, float largeur);


protected:


private:
};
