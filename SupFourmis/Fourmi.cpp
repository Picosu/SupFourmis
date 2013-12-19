//
//  Fourmi.cpp
//  SupFourmis
//
//  Created by Maxence de Cussac on 18/12/2013.
//  Copyright (c) 2013 Maxence de Cussac. All rights reserved.
//

#include "Fourmi.h"
#include "Etat.h"

Fourmi:: Fourmi(Plateau& plat)
{
    x = (plat.get_l() - 1) / 2;
    y = (plat.get_h() - 1) / 2;
    d = 0; // DO NOT FORGET IT, if you do, there'll be an incomprehensive number ...
    
    // There is to option in here, either I use a reference to that state and modify it, or I get directly the state to call it's own method. But copy the state and modify it won't change it's values...
    Etat *state = &plat.get_case(x, y);
    while ((*state).get_o())
    {
        switch ((*state).modif_d())
        {
            case 1:
                x--;
                break;
            case 2:
                y--;
                break;
            case 3:
                x++;
                break;
            case 4:
                y++;
        }
        d++;
        state = &plat.get_case(x, y);
    }
    (*state).set_o(true);
};

int Fourmi::get_d()
{
    return d;
}

bool operator<(const Fourmi& a, const Fourmi& b)
{
    return (a.d < b.d);
}