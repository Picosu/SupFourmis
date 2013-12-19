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
sdfg
void Fourmiliere::affiche()
{
    
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
    int min(0), max(0);
    // two choices are available, either from 0 to the size() -1 or from the beginning to the end
    std::vector<Fourmi>::iterator i;
    for (i=popu.begin(); i!=popu.end(); i++)
    {
        if (min > (*i).Fourmi::get_d())
        {
            min = (*i).Fourmi::get_d();
        }
        std::cout << (*i).Fourmi::get_d();
        if (max < (*i).Fourmi::get_d())
        {
            max = (*i).Fourmi::get_d();
        }
    }
    std::cout << "min : " << min << " max : " << max << std::endl;
}

void Fourmiliere::stats(int n, int m)
{
    int min(0),max(0);
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
            min = value;
        }
        if (max < value)
        {
            max = value;
        }
    }
    std::cout << "min : " << min << " max : " << max << std::endl;
}