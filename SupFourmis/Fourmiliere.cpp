//
//  Fourmiliere.cpp
//  SupFourmis
//
//  Created by Maxence de Cussac on 19/12/2013.
//  Copyright (c) 2013 Maxence de Cussac. All rights reserved.
//

#include "Fourmiliere.h"
int Fourmiliere::nb = 0;
Fourmiliere::Fourmiliere(Plateau& pl)
{
    plateau = &pl;
}

void Fourmiliere::ajout()
{
    nb++;
    Fourmi fourmi(*plateau);
    popu.push_back(fourmi);
    test = popu;
}

void Fourmiliere::affiche()
{
    // some text
    std::cout << "Fourmi numero " << nb << std::endl << std::endl;
    plateau->affiche();
    std::cout << "Distance parcourue par la fourmi : " << popu[nb-1].get_d() << std::endl;
}

int Fourmiliere::get_nb()
{
    return nb;
}

void Fourmiliere::stats()
{
    int min(0), max(0), indexMinFourmis(0), indexMaxFourmis(0);
    // two choices are available, either from 0 to the size() -1 or from the beginning to the end
    std::vector<Fourmi>::iterator i;
    for (i=popu.begin(); i!=popu.end(); i++)
    {
        if (min > (*i).Fourmi::get_d())
        {
            indexMinFourmis = (int)std::distance(popu.begin(), i);
            min = (*i).Fourmi::get_d();
        }
        if (max < (*i).Fourmi::get_d())
        {
            indexMaxFourmis = (int)std::distance(popu.begin(), i);
            max = (*i).Fourmi::get_d();
        }
    }
    std::cout << "Distance minimale : " << min << " parcourue par la fourmi : " << indexMinFourmis  << std::endl;
    std::cout << "Distance maximale : " << max << " parcourue par la fourmi : " << indexMaxFourmis  << std::endl;
}

void Fourmiliere::stats(int n, int m)
{
    // Testing if the two values are ordered, if they're not, order them.
    int min(0),max(0), indexMinFourmis(0), indexMaxFourmis(0);
    if (n > m)
    {
        int temp = m;
        m = n;
        n = temp;
        delete &temp;
    }
    for (int i = n; i <= m; i++)
    {
        int value = popu[i].get_d();
        if (min > value)
        {
            indexMinFourmis = i;
            min = value;
        }
        if (max < value)
        {
            indexMaxFourmis = i;
            max = value;
        }
    }
    std::cout << "Distance minimale : " << min << " parcourue par la fourmi : " << indexMinFourmis  << std::endl;
    std::cout << "Distance maximale : " << max << " parcourue par la fourmi : " << indexMaxFourmis  << std::endl;

    std::cout << "min : " << min << " max : " << max << std::endl;
}