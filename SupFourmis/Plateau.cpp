//
//  Plateau.cpp
//  SupFourmis
//
//  Created by Maxence de Cussac on 17/12/2013.
//  Copyright (c) 2013 Maxence de Cussac. All rights reserved.
//
#include <iostream>
#include "Plateau.h"

/*!
 *Forme canonique coplien
 */

Plateau::Plateau()
{
    set_tab(9, 15);
}

Plateau::Plateau(int h, int l)
{
    set_tab(h, l);
}

Plateau::Plateau(const Plateau &plateau)
{
    Plateau result;
    result.hauteur = plateau.hauteur;
    result.largeur = plateau.largeur;
    result.set_tab(result.hauteur, result.largeur);
}

Plateau::~Plateau()
{
    for (int x = 0; x < largeur; x++)
    {
        delete tab[x];
    }
    delete tab;
}

//------------------------------------
void Plateau::set_tab(int h, int l)
{
    hauteur = h;
    largeur = l;
    if(!(hauteur & 1) || !(largeur & 1)) // test binary number, same as % 2 != 0
    {
        hauteur = 9;
        largeur = 15;
    }
    tab = new Etat*[largeur];
    for(int x = 0; x < largeur; x++)
    {
        tab[x] = new Etat[hauteur];
        for(int y = 0; y < hauteur; y++)
        {
            Etat t;
            tab[x][y] = t;
        }
    }
}

void Plateau::affiche()
{
    for(int y = 0; y < hauteur; y++)
    {
        for(int x = 0; x < largeur; x++)
        {
            std::cout << tab[x][y].symbole();
        }
        std::cout << std::endl;
    }
}

Etat& Plateau::get_case(int x, int y)
{
    return tab[x][y];
}

int Plateau::get_h()
{
    return hauteur;
}

int Plateau::get_l()
{
    return largeur;
}

// Surcharge d'opérateurs

Plateau& Plateau::operator=(const Plateau &plateau)
{
    *this = Plateau(plateau);
    return *this;
}

Plateau& Plateau::operator++(const int k)
{
    hauteur += 2;
    largeur += 2;
    
    Etat **newTab = new Etat*[largeur];
    for (int x = 0; x < largeur ; x ++)
    {
        newTab[x] = new Etat[hauteur];
        for (int y = 0; y< hauteur ; y++)
        {
            if (x == 0 || y == 0 || x == largeur -1 || y == hauteur -1)
            {
                Etat temp;
                newTab[x][y] = temp;
            }
            else
            {
                newTab[x][y] = tab[x-1][y-1];
            }
        }
    }
    tab = newTab;
    return *this;
}