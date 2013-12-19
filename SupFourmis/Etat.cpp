//
//  Etat.cpp
//  SupFourmis
//
//  Created by Maxence de Cussac on 17/12/2013.
//  Copyright (c) 2013 Maxence de Cussac. All rights reserved.
//

#include "Etat.h"

Etat::Etat()
{
    occupe = false;
    direction = 1;
}
Etat::Etat(bool o, int d)
{
    occupe = o;
    direction = d;
    if(direction < 1 || direction > 4)
    {
        direction = 1;
    }
}
bool Etat::get_o()
{
    return occupe;
}
unsigned int Etat::get_d()
{
    return direction;
}
void Etat::set_o(bool o)
{
    occupe = o;
}
void Etat::set_d(int d)
{
    if (d > 4)
    {
        d -= 4;
    }
    direction = d;
}
unsigned int Etat::modif_d()
{
    return direction = direction % 4 + 1;
}
char Etat::symbole()
{
    char symboles[8] = {'o', 'n', 'e', 's', 'O', 'N', 'E', 'S'};
    return symboles[direction + (occupe ? 3 : -1)];
}
